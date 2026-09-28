class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool flag=true;
        
   

for(int i=0;i<9;i++){
    vector<int> tempv(9);
    vector<int> tempv1(9);
    vector<int> tempv2(9);

    for(int j=0;j<9;j++){
       if(board[i][j]!='.'){
 tempv[board[i][j]-'1']++;
       }
        
      if(board[j][i]!='.'){
       tempv1[board[j][i]-'1']++;}
    
     int r= 3*(i/3)+(j/3);
 int c= 3*(i%3)+(j%3);
 if(board[r][c]!='.'){
    tempv2[board[r][c]-'1']++;
 }
    }
sort(tempv.rbegin(),tempv.rend());
 sort(tempv1.rbegin(),tempv1.rend());
 if(tempv[0]>1||tempv1[0]>1){
    flag=false;
    break;
 }


sort(tempv2.rbegin(),tempv2.rend());
 if(tempv2[0]>1){
    flag=false;
    break;
 }



}

        
  return flag;  }
};
