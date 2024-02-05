/*
// Here we are taking only lowercase alphabets which range starts from 97 - 122 in ASCII series .

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hash[26]={0};  // Array size wil be of max 26 for alphabets.
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']+=1;  // here any char will be converted into number cause we r substracting "a" which has 97 value as integer.
    }                       // so the characters are arranged like 'a' will be assigned to 0 index , 'b' for 1 , 'c' for 2 and so on.
    int q; cin>>q;
    while(q--){
        char num; cin>>num;
        // extracting counting of char.
        cout<<hash[num-'a']<<" "; // for any cahr it should find at (char-97)th position only.
    }
}
*/

//  If we dont know the what will be the characters then we can simply take a array of 256 size which is max of ASCII char size.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hash[256]={0};  // Array size wil be of max 256 for alphabets.
    for(int i=0;i<s.size();i++){
        hash[s[i]]+=1;  
    }                       
    int q; cin>>q;
    while(q--){
        char num; cin>>num;
        // extracting counting of char.
        cout<<hash[num]<<" "; 
    }
}