#include<iostream>

using namespace std;

int Insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    }
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
   // int arr[n] = {6, 2, 8, 4, 10};
    cout<<"Sorted Array is: ";
    Insertion_sort(arr,n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}