
#include <iostream>
using namespace std ;


int unique(int arr[],int size){
    int ans=0;
    for (int i=0;i<size;i++){
        ans^=arr[i];
    }
    return ans;
}
       

int main(){
    int arr[5]={1,3,6,1,3};
    int x=unique(arr,5);
    cout<<x<<endl;

}