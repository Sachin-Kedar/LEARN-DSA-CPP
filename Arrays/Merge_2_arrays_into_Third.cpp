#include<iostream>
using namespace std;

int MergedArray(int arr1[],int n,int arr2[],int m, int arr3[]){
    int i=0; int j=0; int k=0;
    while(i<n && j<m){
        if (arr1[i] < arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}

void printArray(int arr3[],int size){
    for(int i=0;i<size;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n ;
    cout<<"Enetr value of n: ";
    cin>>n;
    int arr1[n];
    for (int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    int m ;
    cout<<"Enetr value of m: ";
    cin>>m;
    int arr2[m];
    for (int i = 0; i < m; i++){
        cin>>arr2[i];
    }
    int arr3[n+m];
   // int arr[n] = {6, 2, 8, 4, 10};
    cout<<"Merged Array is: ";
    int size=n+m;
    int ans= MergedArray(arr1,n,arr2,m,arr3);
    printArray(arr3,size);
    return 0;
}