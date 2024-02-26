#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int factorial;
    if(n<=1) return n;
    for(int i=0;i<n;i++){
        factorial=n *fact(n-1);
    }
    return factorial;
}

int main(){
    int n=6;
    int ans=fact(n);
    cout<<ans<<endl;
    return 0;

}