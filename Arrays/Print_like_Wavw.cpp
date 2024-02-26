#include<bits/stdc++.h>
using namespace std;

int wavePrint(int arr[][3],int nRows,int mCols){
    vector<int> ans;
    for(int col=0;col<mCols;col++){
        if(col&1){
            for(int row=nRows-1;row>=0;row--)
            ans.push_back(arr[row][col]);
        }
        else{
            for(int row=0;row<nRows;row++)
            ans.push_back(arr[row][col]);
        }
    }
    return ans;
}

int main(){
    int n=3, m=4;
    vector<int> a[][]={1,2,3,4,5,6,7,8,9,10,11,12};
    wavePrint(a,n,m);

    return 0;
}