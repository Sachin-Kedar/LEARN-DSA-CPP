/*
Probem Statement: -->>  Missing Number

Given an array nums containing n distinct numbers in the range [0, n], 
return the only number in the range that is missing from the array.

Example 1:
Input: nums = [3,0,1]
Output: 2
Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.


Example 2:
Input: nums = [0,1]
Output: 2
Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.

//  1st solution  
        using SUM factor

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int> nums) {
       int n = nums.size();
        int total = ((n+1)*(n))/2;
        for(int i=0; i<n; i++){
            total = total - nums[i];
        }
        return total;
}

int main(){
    vector <int> nums={3,0,4,2,1};
    int ans=missingNumber(nums);
    cout<<ans<<endl;
    return 0;
}

