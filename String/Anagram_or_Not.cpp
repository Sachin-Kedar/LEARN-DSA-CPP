#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="anagram";
    string t="nagaram";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t){
        cout<<"string is anagram"<<endl;
    }
    else{
        cout<<"string is not anagram"<<endl;
    }
    return 0;


}