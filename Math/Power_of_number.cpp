#include <iostream>
using namespace std ;

int power(int a , int b){
    int ans=1;
    for (int i=1;i<=b ; i++){
        ans=ans * a;
    }
    return ans;
}

int main() {
    int a, b;
    cout << "enter the values of a and b: "<<endl;
    cin>> a >> b;
    int ans = power(a,b);
    cout<<ans<<endl;
    return 0;
}
