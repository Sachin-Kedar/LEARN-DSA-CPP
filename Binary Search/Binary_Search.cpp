#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid= (s+e)/2;
    while(s<=e){
        if (arr[mid]==key){
            return mid;
        }
        if (key>arr[mid]){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;

}
int main(){
    int arr[8]={1,3,6,9,11,17,23,27};
    cout<<"Enter the Key : ";
    int key;
    cin >>key;
    cout <<BinarySearch(arr,8,key)<<endl;
}