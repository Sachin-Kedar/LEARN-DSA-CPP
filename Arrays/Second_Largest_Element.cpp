#include<bits/stdc++.h>
using namespace std;
int slargest(vector<int> &arr,int n){
    int largest=arr[0];
    int slargestt=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargestt=largest;
            largest=arr[i];
        }
        else if (arr[i]<largest && arr[i]>slargestt) slargestt=arr[i];
    }
    return slargestt;
}

int ssmallest(vector<int> &arr,int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<ssmallest) ssmallest=arr[i];
    }
    return ssmallest;
}
int main(){
    vector<int> arr={1,9,6,4,2,7,9};
    int n=arr.size();
    cout<<"Second largest element is : "<<slargest(arr,n)<<endl;
    cout<<"Second largest element is : "<<ssmallest(arr,n)<<endl;
    return 0;
}