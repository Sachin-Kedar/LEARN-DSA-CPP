/*

Leet Code

Problem Statement-->>  Majority Element

Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

Example 1:
Input: nums = [3,2,3]
Output: 3

Example 2:
Input: nums = [2,2,1,1,1,2,2]
Output: 2

*/

#include <iostream>
#include<vector>
using namespace std;
int majorityElement(vector <int> nums){
    int n=nums.size();
    int j;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (j = i; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                cnt++;
            }
            if (cnt > n / 2)
            {
                return nums[j];
            }
        }
    }
    return 0;
}
int main(){
    vector <int> nums = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(nums);
    cout<<ans<<endl;
    return 0;
}