//  Q3  Reversing an Array
//            for Even and Odd both no of elements


#include <iostream>
using namespace std;

void Reverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<< " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 4, 7, 3, -5,6};
    int brr[7] = {9,6,-4,23,1,0,12};
    Reverse(arr, 6);
    Reverse(brr, 7);
    PrintArray(arr, 6);
    PrintArray(brr, 7);
    return 0;
}

