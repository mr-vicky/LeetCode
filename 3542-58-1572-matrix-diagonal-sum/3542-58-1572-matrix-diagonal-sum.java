// TC: O(N^2)
// SC: O(1)
class Solution {
    public int diagonalSum(int[][] mat) {
        int n = mat.length;
        int sum = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                // primary diagonal 
                if(i == j){
                    sum += mat[i][j];
                }
                // secondary diagonal 
                if(i + j == n-1 && i != j){
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
}