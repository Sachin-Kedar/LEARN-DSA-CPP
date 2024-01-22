// Prime Numbers

// 1-- Prime No.
// 0-- Not Prime No.

#include <iostream>
using namespace std ;

bool isPrime(int n){
    for (int i=2;i<n;i++){
        if (n%i==0){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int ans = isPrime(n);
    if (ans==1){
        cout<<"Prime No"<<endl;

    }
    else{
        cout <<"Not Prime Number"<<endl;
    }
}