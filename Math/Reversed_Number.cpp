//  Q3-- Reversed Number


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number N: ";
    cin>> n;
    int digit =0;
    while (n!=0){
        int rem=n%10;
        digit = digit *10+rem;
        n/=10;
    }
    cout << "Reversed Number is : "<< digit<<endl ;
}