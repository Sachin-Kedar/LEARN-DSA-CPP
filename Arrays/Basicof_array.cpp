// Printing sum of all Array elements

#include <iostream>
using namespace std;

int sum(int arr[],int size){
    int add=0;
    for (int i=0;i<size;i++){
        add+=arr[i];
    }
    return add;
}

int main(){
    int size;
    cin>> size;
    int arr[5];
    for (int i=0;i<size;i++){
        cin>> arr[i];
    }
    cout <<sum(arr,size)<<endl;
}