/* 
 --- >> Problem Statement 

Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers.
Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example
The minimum sum is  and the maximum sum is . The function prints
16 24

Function Description: 
Complete the miniMaxSum function in the editor below.
miniMaxSum has the following parameter(s):
arr: an array of  integers
Print
Print two space-separated integers on one line: the minimum sum and the maximum sum of  of  elements.

Input Format
A single line of five space-separated integers.

Constraints

Output Format
Print two space-separated long integers denoting the respective minimum and maximum values that can be calculated by 
summing exactly four of the five integers. (The output can be greater than a 32 bit integer.)

Sample Input

1 2 3 4 5
Sample Output

10 14
*/


#include<bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
    long long totalSum = 0;
    int n = arr.size();

    // Calculate the total sum of the array
    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Initialize minSum and maxSum with the total sum
    long long minSum = totalSum;
    long long maxSum = 0;

    // Iterate through the array to find minSum and maxSum
    for(int i = 0; i < n; i++) {
        long long currentSum = totalSum - arr[i];
        minSum = min(minSum, currentSum);
        maxSum = max(maxSum, currentSum);
    }

    cout << minSum << " " << maxSum << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 7, 9};
    miniMaxSum(arr);
    return 0;
}
