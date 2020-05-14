#include <iostream>
using namespace std;
 
// M x N matrix
#define M 4
#define N 5
 
int count(int mat[][N])
{
    // variable to store negative number count
    int negative = 0;
 
    // start from (0, N-1) i.e. top-rightmost cell of matrix
    int i = 0, j = N - 1;
    
    // run till matrix boundary is reached
    while (i <= M - 1 && j >= 0)
    {
        // if current element is negative
        if (mat[i][j] < 0)
        {
            negative += j + 1;    // increment the negative count
            i++;    // move to next row
        }
        else j--;    // move to cell to the left
    }
 
    // return negative number count
    return negative;
}
 
// main function
int main()
{
    int mat[M][N] =
    {
        { -7, -3, -1, 3, 5 },
        { -3,  2,  2, 4, 6 },
        { -1,  1,  3, 5, 8 },
        {  3,  4,  7, 8, 9 }
    };
 
    cout << "Total number of negative elements present are " << count(mat);
 
    return 0;
}
