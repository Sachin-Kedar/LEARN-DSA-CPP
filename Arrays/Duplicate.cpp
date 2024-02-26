/*
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. 
There is a single integer value that is present in the array twice. 
Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.


Sample Input 1:
no. of samples      2
   array Lenght     5
                    4 2 1 3 1
   array Lenght     7
                    6 3 1 5 4 3 2
                    Sample Output 1:
                    1
                    3

*/

#include <iostream>
using namespace std;
int FindDuplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=arr[i];
    }
    for (int i=1;i<n;i++){
        ans^=i;
    }
    return ans;
}


int main (){
    int arr[3]={1,1,1};
    cout<<FindDuplicate(arr,3)<<endl;

}



