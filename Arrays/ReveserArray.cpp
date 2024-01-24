//  Q  Reversing an Array
//       for Even and Odd both no of elements

/*
#include <iostream>
using namespace std;

void Reverse(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i]<< " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 4, 7, 3, -5,6};
    int brr[7] = {9,6,-4,23,1,0,12};
    Reverse(arr, 6);
    Reverse(brr, 7);
    PrintArray(arr, 6);
    PrintArray(brr, 7);
    return 0;
}
*/

//  ---  Using vector

#include<iostream>
#include<vector>
using namespace std;

vector <int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
    // -->> We can use below code also which will be optimized one.

    //     for (int i = 0; i < a.size() / 2; ++i) {
    //     // Swap elements from the beginning and end of the array
    //     int temp = a[i];
    //     a[i] = a[a.size() - i - 1];
    //     a[a.size() - i - 1] = temp;
    // }
    // return a;


void printArray(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> a;
    a.push_back(11);
    a.push_back(7);
    a.push_back(3);
    a.push_back(12);
    a.push_back(4);
    cout<<"original array is : ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


    vector<int> ans= reverse(a);
    cout<<"Reversed array is : ";
    printArray(ans);

    return 0;
}

