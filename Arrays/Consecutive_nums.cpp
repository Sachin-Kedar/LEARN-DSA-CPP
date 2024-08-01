/*
// Brute force Solution

#include<bits/stdc++.h>
using namespace std;
int Cons(int a[],int n){
    int maxi=0;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) {
            cnt++;
            maxi=max(maxi,cnt);
        }
        else{
            cnt=0;
        }
    }
    return maxi;
}
int main(){
    int a=9;
    int n[a]={1,1,0,1,1,1,0,1,1};
    cout<<Cons(n,a)<<endl;
    return 0;
}

*/
//   Optimal Solution

#include<bits/stdc++.h>
using namespace std;
int Cons(int a[],int n){
    int term=0;
    for(int i=0;i<n;i++){
        term^=a[i];
    }
    return term;
}

int main(){
    int n=7;
    int a[n]={1,1,2,2,3,8,8};
    cout<<Cons(a,n)<<endl;

}