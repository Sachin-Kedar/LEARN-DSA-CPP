#include<iostream>
#include<vector>
#include<CLIMITS>
using namespace std;

int FindMax(int arr[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

int FindMin(int arr[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}
int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Maximum Element of an Array: ";  
    cout<<FindMax(arr,n)<<endl;
    cout<<"Minimum Element of an Array: ";
    cout<<FindMin(arr,n);
}