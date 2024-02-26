/*
Problem statement
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.


Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4
Sample Output 1 :
2 2 3
3

time Complexity -- 1 sec


Explanation for Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.



// ------>>>> Brute Force Solution.

#include<bits/stdc++.h>
using namespace std;

  vector<int> intersectionOfArrays(vector<int>A, vector<int>B){
    
  vector <int> ans;
  
  // to maintain visited
  vector <int> visited(B.size(), 0);  
  int i = 0, j = 0;
  
  for (i = 0; i < A.size(); i++) {
      
    for (j = 0; j < B.size(); j++) {

      if (A[i] == B[j] && visited[j] == 0) { 
      
        //if element matches and has not been matched with any other before
        ans.push_back(B[j]);
        visited[j] = 1;

        break;
      } 
      
      else if (B[j] > A[i]) break; 
      //because array is sorted , element will not be beyond this
    }
  }
  
  return ans;
    
}

int main() {
    
  // Array Initialisation.
  vector < int > A {1,2,3,3,4,5,6,7};
  vector < int > B {3,3,4,4,5,8};

  vector<int> ans = intersectionOfArrays(A,B);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}

*/

// ------>>>> Optimal Solution.

#include<bits/stdc++.h>
using namespace std;

  vector<int> intersectionOfArrays(vector<int>A, vector<int>B){
    
  // Declare ans array.
  vector <int> ans;

  int i = 0, j = 0; 

  // to traverse the arrays
  while (i < A.size() && j < B.size()) {
      
    //if current element in i is smaller
    if (A[i] < B[j]) { 
      i++;
    } else if (B[j] < A[i]) {
      j++;
    } else {
        
      //both elements are equal
      ans.push_back(A[i]); 
      i++;
      j++;
    }
  }
  
  return ans;
    
}

int main() {
    
  // Array Initialisation.
  vector < int > A {1,2,3,3,4,5,6,7};
  vector < int > B {3,3,4,4,5,8};

  vector<int> ans = intersectionOfArrays(A,B);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}