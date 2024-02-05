#include<bits/stdc++.h>
using namespace std;
int s(int n){
    if(n==0) return 0;
    return n+s(n-1);
}
int main(){
    int n=5;
    cout<<s(n)<<endl;
}