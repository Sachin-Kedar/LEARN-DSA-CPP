//   Q2--    Prime Number 

#include<iostream>
using namespace std;

int main(){
    int N;
    cout<< "Enter the number N: ";
    cin>> N;
    bool isPrime=1;
    for (int i=2;i<N;i++){
        if (N%i==0){
            isPrime=0;
            break;
        }
    }
    if (isPrime==0){
        cout<<"This is not Prime number"<<endl;
        }
    else {
        cout<<"This is a Prime number"<<endl;
    }  
    
}

//  We can check the loop only till sqrt(number)  -- if any number is divisible by its sqrt then it will be not Prime number  
#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int N;
    cout<< "Enter the number N: ";
    cin>> N;
    bool isPrime=1;
    for (int i=2;i<=sqrt(N);i++){
        if (N%i==0){
            isPrime=0;
            break;
        }
    }
    if (isPrime==0){
        cout<<"This is not Prime number"<<endl;
        }
    else {
        cout<<"This is a Prime number"<<endl;
    }  
    
}
//  sqrt(49) --- 7