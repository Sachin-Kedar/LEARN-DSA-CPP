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