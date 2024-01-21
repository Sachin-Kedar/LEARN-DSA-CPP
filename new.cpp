#include<iostream>
#include <cmath>
using namespace std;

int main(){
    int N ;
    cout <<"Enter a Number : ";
    cin>>N;
    int temp = N;
    int cnt = 0;
    while (temp!= 0) {
        int rem = temp % 10;
        cnt = cnt + pow(rem, 3);  // Corrected the calculation
        temp = temp / 10;         // Added the division operation
    }

    if (cnt == N){
        cout << "This is an Armstrong number" << endl;
    } else {
        cout << "This is not an Armstrong number" << endl;
    }  

    return 0;  // Added return statement
}
