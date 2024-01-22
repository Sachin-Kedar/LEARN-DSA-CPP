#include<iostream>
#include <cmath>
using namespace std;
int fact(int n){
    int factorial=1;
    for (int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int N ;
    cout <<"Enter a Number : ";
    cin>>N;
    int ans = fact(N);
    cout<<ans<<endl;
}