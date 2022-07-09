#include <iostream>

using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) // go to right
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) // go to right
        {
            s = mid + 1;
        }
        else if (key < arr[mid])
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int odd[11] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 5};

    cout << "First Occurrence of 3 is at index " << firstOcc(odd, 11, 3) << endl;
    cout << "Last Occurrence of 3 is at index " << lastOcc(odd, 11, 3) << endl;

    int totalOcc = (lastOcc(odd, 11, 3) - firstOcc(odd, 11, 3)) + 1;
    cout << "Total no of Occurrence is : " << totalOcc << endl;

    return 0;
}
