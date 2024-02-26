#include<bits/stdc++.h>
using namespace std;

// bool isPresent(int a[][4],int target,int r,int c){

//     for(int r=0;r<3;r++){
//         for(int c=0;c<4;c++){
//             if(a[r][c]==target) return 1;
//         }
//     }
//     return 0;
// }

void RowSum(int arr[][3]){
    int maxi=INT_MIN;
    int num=-1;
    int c,r; 
    for(r=0;r<3;r++){
        int sum=0;
        for(c=0;c<3;c++){
            sum+=arr[r][c];
        }
        // cout<<sum<<" ";
        // maxi=max(maxi,sum);
        if(sum>maxi){
            maxi=sum;
            num=r;
        }
    }
    cout<<endl<<"Maximum Sum is : "<<maxi<<" at Row no. : "<<num<<endl;
}
void ColSum(int arr[][3],int r,int c){
    for(int c=0;c<3;c++){
        int sum=0;
        for(int r=0;r<3;r++){
            sum+=arr[r][c];
        }
        cout<<sum<<" ";
    }
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // int target;
    // cout<<"Enter the Target: ";
    // cin>>target;
    //if(isPresent(arr,target,r,c)) cout<<"Target is Present"<<endl;
    //else cout<<"Taregt is not Present "<<endl;
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            cout<<arr[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"Row Wise Sum is: ";
    RowSum(arr);
    cout<<endl;
    cout<<"Col Wise Sum is: ";
    ColSum(arr,3,3);
    cout<<endl;
    return 0;
}
