#include <iostream>

using namespace std;

void rowSum(int arr[][3], int row, int col)
{
    cout << "Row wise sum is : " << endl;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void colSum(int arr[][3], int row, int col)
{
    cout << "Col wise sum is : " << endl;
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[3][3];

    cout << "Enter array element: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Element are: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    rowSum(arr, 3, 3);
    colSum(arr, 3, 3);

    return 0;
}
