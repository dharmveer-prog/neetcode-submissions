class LRUCache {
public:
 struct node{
        int key;
        int val;
        node*next;
        node*prev;
        node(int k,int v){
            key=k;
            val=v;
            next=nullptr;
            prev=nullptr;
        }
       
    };
    node*head;
    node*tail;
    int count=0;
     
    int maxcapacity;
    map<int,node*> mp;
    LRUCache(int capacity) {
       maxcapacity=capacity;
       head=new node(-1,-1);
       tail=new node(-1,-1);
       head->next=tail;
       tail->prev=head;

   

    }
    void addtofront(node*newnode){
       node*temp=head->next;
       head->next=newnode;
       newnode->next=temp;
       temp->prev=newnode;
       newnode->prev=head;


    }
    void removenode(node*delnode){
        node*nexti=delnode->next;
        node*previ=delnode->prev;
        nexti->prev=previ;
        previ->next=nexti;

    }
    
    int get(int key) {
       if(mp.find(key)!=mp.end()){
          node*existingnode=mp[key];
        int value=existingnode->val;
          removenode(existingnode);
          addtofront(existingnode);
          return value;
       }
else{
    return -1;
}
    }
    
    void put(int key, int value) {
      if(mp.find(key)!=mp.end()){
        node*existingnode=mp[key];
        existingnode->val=value;
        removenode(existingnode);
        addtofront(existingnode);
        return;
      }
        if(mp.size()==maxcapacity){
            node*pointy=tail->prev;
           
           mp.erase(pointy->key);
            removenode(pointy);
          

        }

        node*newnodet=new node(key,value);
       mp[key]=newnodet;
       addtofront(newnodet);
      




     
       
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
 