/* ---  Q4-- Simple Calculator

#include<iostream>
using namespace std;

int main(){
    int a,b;
    char o;
    cout<< "Enter the numbers  a and b: ";
    cin>> a >> b;
    cout << endl;
    cout<< "Enter the Operation : ";
    cin>>o;
    cout << endl;
    switch(o){
        case '+': cout<< a+b<<endl;
        break;
        case '-': cout<< a-b<<endl;
        break;
        case '*': cout<< a*b<<endl;
        break;
        case '/': cout<< a/b<<endl;
        break;
        case '%': cout<< a%b<<endl;
        break;
        }
}


    @@    Functions ##

Q1  Power of number


#include <iostream>
using namespace std ;

int power(int a , int b){
    int ans=1;
    for (int i=1;i<=b ; i++){
        ans=ans * a;
    }
    return ans;
}

int main() {
    int a, b;
    cout << "enter the values of a and b: "<<endl;
    cin>> a >> b;
    int ans = power(a,b);
    cout<<ans<<endl;
    return 0;
}



Q 2 --- Even Odd Program

 Prints    Even -->1;
           Odd-->  0

           ex.         10
                       01
                   ans 00

     for 5- 101
            001
            001





#include <iostream>
using namespace std ;

int EvenOdd(int a){
    if (a&1){
        return 0;
    }
    return 1;
}

int main(){
    int a;
    cin>>a;
    int ans = EvenOdd(a);
    cout <<ans<<endl;

}

Q 3 --- Prime Numbers

1-- Prime No.
0-- Not Prime No.

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



Q4 -->>    nCr Value find

// The Case of function under the another functon.

 nCr= n fact. / r fact. *(n-r) fact.

 ex. 8C2= 8F/(2F * 6F) --> 28


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


Q5 ---  Arithmrtic Progression


 #include <iostream>
 using namespace std;
 int ArithP(int n){
    int ans = 3 * n + 7;
    return ans;
 }
int main(){
    int n;
    cin>>n;
    int ans=ArithP(n);
    cout<<ans<<endl;
}


Q6-- Find the nth Term in Fibonacchi Sequence


*/
#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        int a = 0;
        int b = 1;
        int next;
        for (int i = 2; i <= n; i++)
        {
            next = a + b;
            a = b;
            b = next;
        }
        return next;
    }
}

int main()
{
    int n;
    cin >> n;
    int ans = fib(n);
    cout << ans << endl;
}