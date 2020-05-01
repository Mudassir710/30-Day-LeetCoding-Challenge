/*
Mohammed Mudassir Mohiuddin
*/

/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
         vector<int> res = binaryMatrix.dimensions(); 
        int i = res[0] - 1, j = res[1] - 1;
        while(i >= 0 && j >= 0){
            if (binaryMatrix.get(i,j) == 0) i-=1;
            else j -= 1; 
        }
        if(j == res[1] - 1) return -1;
        return j+1;
    }
};