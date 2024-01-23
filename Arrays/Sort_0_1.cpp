#include<iostream>
using namespace std;
void sort_01(int arr[],int n){
    int left =0;
    int right=n-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
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
    int arr[8]={1,1,0,0,0,0,1,0};
    sort_01(arr,8);
    PrintArray(arr,8);
    return 0;
}
