// The Case of function under the another functon.

//  nCr= n fact. / r fact. *(n-r) fact.

//  ex. 8C2= 8F/(2F * 6F) --> 28


#include <iostream>
using namespace std ;
// First  we need to create a Factorial func. and thn go for nCr function.


int Factorial(int n){
    int fact=1;
    for (int i=1; i<=n;i++){
        fact*=i;
    }
    return fact;

}

int nCr(int n, int r){
    int a=Factorial(n);
    int b=Factorial(r)* Factorial(n-r);
    int ans= a/b;

    return ans;
}

int main(){
    int n,r;
    cin>> n>>r;
    int ans=nCr(n,r);

    cout << ans <<endl;
}