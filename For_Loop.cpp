/*  Q1-- Find the sum of first N numbers--

#include<iostream>
using namespace std;

int main(){
    int N, sum=0;
    cout<< "Enter the number N: ";
    cin>> N;
    for (int i=1;i<=N;i++){
        sum=sum+i;
    }
    cout<<"The Value of total Sum is : "<< sum;
}


Q2--    Prime Number 


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
*/

#include<iostream>
#include <math.h>
using namespace std;

int main(){
    int N ;
    cout <<"Enter a Number : ";
    cin>>N;
    int temp = N;
    int cnt = 0;
    int power=0;
    while (temp!= 0) {
        int rem = temp % 10;
        cnt = cnt + pow(rem, 3) +(1e-9);
        power= pow(rem, 3);
        cout<<power<<endl;  // Corrected the calculation
        temp = temp / 10;         // Added the division operation
        cout<<cnt<<"rem : "<<rem<<endl;
    }

    if (cnt == N){
        cout << "This is an Armstrong number" << endl;
    } else {
        cout << "This is not an Armstrong number" << endl;
    }  

    return 0;  // Added return statement
}



// #include<iostream>
// #include <math.h>
// using namespace std;

// int main(){
//     int N ;
//     cout <<"Enter a Number : ";
//     cin>>N;
//     int temp = N;
//     int cnt = 0;
//     while (temp!= 0) {
//         int rem = temp % 10;

//         temp = temp / 10;         // Added the division operation
        
//     }
//     cout<<cnt<<

//     if (cnt == N){
//         cout << "This is an Armstrong number" << endl;
//     } else {
//         cout << "This is not an Armstrong number" << endl;
//     }  

//     return 0;  // Added return statement
// }
