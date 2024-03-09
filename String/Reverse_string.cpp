#include<bits/stdc++.h>
using namespace std;

string reverseString(string &str){
	int s=0;
	int e= str.size()-1;
	while(s<=e){
		swap(str[s++],str[e--]);
	}
	return str;	
}

int main(){
    string s="Welcome to Coding !!";
    cout<< reverseString(s)<<endl;
    return 0;
    
}