#include <iostream>

using namespace std;

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = i;
        }
    }
    cout << "The maximum sum is: " << maxi << endl;
    return rowIndex;
}

int largestColSum(int arr[][3], int row, int col)
{
    int maxi = INT_MIN;
    int colIndex = -1;
    for (int j = 0; j < col; j++)
    {
        int sum = 0;
        for (int i = 0; i < col; i++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            colIndex = j;
        }
    }
    cout << "The maximum sum is: " << maxi << endl;
    return colIndex;
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

    int ansIndex1 = largestRowSum(arr, 3, 3);
    cout << "Max row is at index: " << ansIndex1 << endl;

    int ansIndex2 = largestColSum(arr, 3, 3);
    cout << "Max row is at index: " << ansIndex2 << endl;
    return 0;
}
