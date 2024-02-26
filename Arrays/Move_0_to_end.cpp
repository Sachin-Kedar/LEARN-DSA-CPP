// brute force solution..
/*
#include<bits/stdc++.h>
using namespace std;

vector<int> move0(vector<int> &a){
    vector<int> temp;
    for(int i=0;i<a.size();i++){
        if(a[i]!=0) temp.push_back(a[i]);
    }
    int n=temp.size();
    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
    for(int i=n;i<a.size();i++){
        a[i]=0;
    }
    return a;
}

int main(){
    vector<int> a={1,0,2,3,3,0,0,5,6,7};
    vector<int>ans=move0(a);
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;
    return 0; 
}
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> move0(int n, vector<int> a) {
    int j = -1;
    //place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    //no non-zero elements:
    if (j == -1) return a;

    //Move the pointers i and j
    //and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main()
{
    vector<int> a = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = move0(n, a);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}