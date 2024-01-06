//---  Q4-- Simple Calculator 

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
