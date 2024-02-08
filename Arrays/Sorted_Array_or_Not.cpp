#include<bits/stdc++.h>
using namespace std;
int SortedOrNot(vector<int> &a,int n){
    bool sorted=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            sorted=false;
            break;
        }
    }
    return sorted;
}

int main(){
    vector<int> a={1,2,3,4,6,7,9};
    int ans=SortedOrNot(a,a.size());
    if(ans==1) cout<<"Array is Alreay Sorted."<<endl;
    else cout<<"Array is Not Sorted."<<endl;
    return 0;
}