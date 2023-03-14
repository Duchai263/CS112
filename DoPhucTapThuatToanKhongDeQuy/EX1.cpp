#include <iostream>
using namespace std;
#define MAX 100
int main()
{
    int i, n, j, a[MAX][MAX], k, sum, m, x, y, thisSum, b[MAX];

    //1
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            a[i][j] = 0;
    for (i = 0; i < n; i++)
        a[i][j] = 1;
    
    //2
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
    
    //3
    sum = 0;
    for (i = 0; i < n; i++)
        for (j = i + 1; j <= n; j++)
            for (k = 1; k < 10; k++)
                sum = sum + i * j * k;

    //4
    sum = 0;
    for (i = 0; i < n; i++)
        for (j = i + 1; j <= n; j++)
            for (k = 1; k < m; k++) {
                x = 2 * y;
                sum = sum + i * j * k;
            }
    
    //5
    sum = 0;
    thisSum = 0;
    for (i = 0; i < n; i++) {
        thisSum += b[i];
        if (thisSum > sum)
            sum = thisSum;
        else
            thisSum = sum;
    }

    return 0;
}