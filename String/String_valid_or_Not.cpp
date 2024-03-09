#include<bits/stdc++.h>

using namespace std;
bool isValid(char ch){
    if(ch>='A' && ch<='Z' || ch>= 'a'&& ch <='z') return true;
    return false;
}
int main(){
    string st = "hello";
    bool val = true ;
    for (char ch : st){
        if (!isValid(ch) ){
            val= false;
            break;
        }
    }
    if(val){
        cout<< "string is valid" <<endl;
    }
    else{
        cout<< "string is not valid" <<endl;
    }
    return 0;
    
}