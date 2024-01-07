//https://leetcode.cn/problems/search-a-2d-matrix-ii/
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int row = 0, col = *matrixColSize - 1;
    while(row < matrixSize && col >= 0) {
        int value = matrix[row][col];
        if(value == target) {
            return true;
        } else if(value > target) {
            col -= 1;
        } else if(value < target) {
            row += 1;
        }
    } 
    return false;
}
