#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[], int i,int l){
    if(i>l/2) return ;
    swap(arr[i],arr[l]);
    ReverseArray(arr,i+1,l-1);
}

int main(){
    int n=5;
    int arr[n]={1,3,5,7,9};
    ReverseArray(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

} 