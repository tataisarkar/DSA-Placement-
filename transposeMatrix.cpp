#include <iostream>
using namespace std;

void displayMatrix(int matrix[][10], int n){
    int i, j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
}

void transpose(int matrix[][10], int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for(j=0;j<=i;j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    displayMatrix(matrix, n);
}

int main()
{
    int matrix[10][10];
    int i, j;
    int n;

    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    transpose(matrix, n);

    return 0;
}