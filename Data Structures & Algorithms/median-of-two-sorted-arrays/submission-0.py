class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        m=len(nums1)
        n=len(nums2)
        pointer1=0
        pointer2=0
        listf=[]
        while(len(listf)<(m+n)):
            if(pointer1==m):
                listf.append(nums2[pointer2])
                pointer2+=1
            
            elif(pointer2==n):
                listf.append(nums1[pointer1])
                pointer1+=1
            
            elif(nums1[pointer1]<nums2[pointer2]):
                listf.append(nums1[pointer1])
                pointer1+=1
            else:
                listf.append(nums2[pointer2])
                pointer2+=1
        total = m + n
        mid = total // 2
        if total % 2 == 1:
            return float(listf[mid])
        else:
            return (listf[mid - 1] + listf[mid]) / 2.0


