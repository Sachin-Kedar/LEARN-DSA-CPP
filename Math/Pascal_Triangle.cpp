/* Pascal triangle is basically depends on nCr method.
            //    nCr = n!/(r!*(n-r)!)

        1-0c0
        1 1 
        1 2 1 
        1 3 3 1 
        1 4 6 4 1 ---4 will be from  4C1 = 4! / (1!*3!)  // all values will be like this only.
*/
#include <iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n;
    cin>>n;

    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }

}

/*
vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        ans.push_back(generateRow(row));
    }
    return ans;
}

*/