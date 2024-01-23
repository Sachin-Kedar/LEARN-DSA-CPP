#include <bits/stdc++.h>
using namespace std;

void sort012(int *arr, int n) {
    int left = 0, right = n - 1, i = 0;

    while (i <= right) {
        if (arr[i] == 0) {
            swap(arr[i], arr[left]);
            left++;
            i++;
        } else if (arr[i] == 1) {
            i++;
        } else if (arr[i] == 2) {
            swap(arr[i], arr[right]);
            right--;
        }
    }
}      
void PrintArray(int arr[],int n){
    for (int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;
}

int main(){
    int arr[9]={0,2,2,1,0,1,1,0,2};
    sort012(arr,9);
    PrintArray(arr,9);
    return 0;
}