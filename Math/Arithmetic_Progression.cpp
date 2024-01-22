//Arithmrtic Progression


 #include <iostream>
 using namespace std;
 int ArithP(int n){
    int ans = 3 * n + 7;
    return ans;
 }
int main(){
    int n;
    cin>>n;
    int ans=ArithP(n);
    cout<<ans<<endl;
}