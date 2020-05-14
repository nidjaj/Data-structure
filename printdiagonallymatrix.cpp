#include <iostream>
using namespace std;
#define M 5
#define N 5
 
void printMatrixDiagonally(int mat[][N])
{
    // print '/' diagonal for upper-left half of the matrix
    for (int r = 0; r < M; r++)
    {
        // start from each cell of first column of the matrix
        for (int i = r, j = 0; j < N && i >= 0; i--, j++)
            cout << mat[i][j] << " ";
 
        cout << '\n';
    }
 
    // print '/' diagonal for lower-right half of the matrix    
    for (int c = 1; c < N; c++)
    {
        // start from each cell of the last row
        for (int i = M - 1, j = c; j < N && i >= 0; i--, j++)
            cout << mat[i][j] << " ";
 
        cout << '\n';
    }
}
 
// main function
int main()
{
    int mat[M][N] =
    {
        { 1, 2, 3, 4, 5 },
        { 2, 3, 4, 5, 6 },
        { 3, 4, 5, 6, 7 },
        { 4, 5, 6, 7, 8 },
        { 5, 6, 7, 8, 9 }
    };
 
    printMatrixDiagonally(mat);
 
    return 0;
}
