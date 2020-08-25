class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int T) {
       if(!A.size()){return false;}
        int n=A.size();
        int m=A[0].size();
        int low=0;
        int high=(n*m)-1;
        
        while(low<=high){
            int mid=(low+high)/2;
        if(A[mid/m][mid%m]==T){
            return true;
        }
        if(A[mid/m][mid%m]<T){
            low=mid+1;
        }  
        else{
            high=mid-1;
        }
        }
        return false;
    }
};
