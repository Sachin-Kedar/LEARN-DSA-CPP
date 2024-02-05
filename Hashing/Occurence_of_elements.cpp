

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    // Lets consider we have elements till max value of 12.
    // create new array of size 13 cause we have max value till 12 we need last index to be 12 as 1st will be 0.

    int hash[13]={0};  // initialize array with 0 as all elements.
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q; cin>>q;
    while(q--){
        int num; cin>>num;
        cout<<hash[num]<<" ";
    }
    return 0;
}