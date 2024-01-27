/*

--- Q1   Printing sum of all Array elements

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


---  Q2   Finding the Specified element is present in an array or not


#include <iostream>
using namespace std;

bool findElement(int arr[],int n, int key){
    for (int i=0;i<n;i++){

        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    // lets take ex. of array having 10 elements.
    int arr[10]={1,2,3,4,55,6,7,8,9,33};
    int key;
    cin>>key;
    int found=findElement(arr,10,key);
    //  1- element is present in an array
    //  0- element is not present in an array
    if (found==1){
        cout << key<<" is Present in Array"<<endl;

    }
    else{
        cout << key<<" is not Present in Array"<<endl;
    }
}

---  Q4 Swaping Alternating Numbers
*/ 

#include <iostream>
using namespace std;

void SwapAlternate(int arr[] , int size){
    for (int i=0;i<size;i+=2){
        if (i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout <<arr[i]<<" ";

    }
    cout <<endl;
}

int main(){
    int arr[8]={2,4,5,7,9,8,33,24};
    int brr[5]={23,45,3,67,1};
    SwapAlternate(arr,8);
    printArray(arr,8);
    SwapAlternate(brr,5);
    printArray(brr,5);
    return 0;

}
 