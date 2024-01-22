// --  Q4 Palindrome Number 

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number N: ";
    cin>> n;
    int temp=n;
    int digit =0;
    while (n!=0){
        int rem=n%10;
        digit = digit *10+rem;
        n/=10;
    }if (temp==digit){
        cout << "Number is palidrome"<<endl;
    }
    else{
           cout << "Number is not palidrome"<<endl;
    }
}

