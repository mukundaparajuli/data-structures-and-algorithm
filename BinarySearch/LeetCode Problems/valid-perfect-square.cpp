class Solution {
public:
    bool isPerfectSquare(int num) {
       int start=0;
       int end=num-1;
       if(num==1) return true;
       while(start<=end){
       int mid=(end-start)/2+start;
        if(mid==sqrt(num)) return true;
        if(mid>sqrt(num)){
            end=mid-1;
        }else{
            start=mid+1;
        }
       }
       return false;
    }
};