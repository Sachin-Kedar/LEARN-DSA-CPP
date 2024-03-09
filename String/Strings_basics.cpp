#include<bits/stdc++.h>

using namespace std;
int main(){
    string s1 ="welcome";        
    string s2 = "com";
    string s3= "";
    cout<<s3.empty()<<endl;
    cout<<s1.find(s2)<<endl;
    cout<< s1.erase(3,2)<<endl;
    cout<< s2.insert(2,"hel")<<endl;
    cout<<s1.length()<<endl; //  length and size both works same on strings.
    cout<< s1.size()<<endl;
    cout<< s1.substr(2,3)<<endl;
}