#include <bits/stdc++.h> 
using namespace std;

int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) 
            largest = arr[i];
    }
    return largest;
}

int main() {
    vector<int> arr = {10, 5, 25, 15, 30};
    int n = arr.size();
    
    int largest = largestElement(arr, n);
    cout << "The largest element in the array is: " << largest << endl;
    
    return 0;
}