class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i=0;
        int j=0;
        int sum = 0;
        while(i<mat.size()&&j<mat[i].size()){
            sum+=mat[i][j];
            i++;
            j++;
        }
        i = 0;
        j = mat[i].size()-1;
        while(i<mat.size()&&j>=0){
            sum+=mat[i][j];
            i++;
            j--;
        }
        if(mat.size()%2!=0){
            int k = (mat.size()/2);
            sum-=mat[k][k];
        }
        return sum;
    }
};