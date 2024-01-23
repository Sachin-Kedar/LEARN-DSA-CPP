/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt=1;
    for (int i = 0; i < n - i; i++)
    {
        if (arr[i+1] < arr[i])
        {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
    for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

Problem Statement:  Coding Ninja

Bubble Sort is one of the sorting algorithms that works by repeatedly swapping the adjacent elements of the array if they are not in sorted order.

You are given an unsorted array consisting of N non-negative integers. Your task is to sort the array in non-decreasing order using the Bubble Sort algorithm.

For Example:
Bubble Sort implementation for the given array:  {6,2,8,4,10} is shown below :-

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 100
1 <= N <= 100
1 <= Arr[i] <= 1000

Where 'T' represents the number of test cases, 'N' represents the size of the array, and Arr[i] represents the elements of the array.
Time Limit: 1 sec.
Sample Input 1:
1
5
6 2 8 4 10
Sample Output 1:
2 4 6 8 10
Sample Input 2:
2
2
1 2
4
4 3 2 1
Sample Output 2:
1 2
1 2 3 4
*/


#include <iostream>
#include <algorithm>
using namespace std;

void Bubblesort(int arr[], int n)
{
    for(int i=0;i<n-1;i++){
        for (int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
            }
        }
    }
    }
int main(){
        int n = 5;
        int arr[n] = {6, 2, 8, 4, 10};
        Bubblesort(arr,n);
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}