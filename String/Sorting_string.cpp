#include<bits/stdc++.h>
using namespace std;

//  sort string without using sort function

string countSorting(string str){
    vector<int> freq(26,0);
    for (int i=0; i<str.length();i++){
        int index = str[i]  - 'a';
        freq[index]++;
    }
    int j=0;
    for(int i=0;i<26;i++){
        while(freq[i]--){
            str[j++]=i+'a';
        }
    }
    return str;

}
int main (){
    string str ;
    //sort(str.begin(),str.end());
    //cout<<str<<endl;
    cin>> str;
    cout<<countSorting(str)<<endl;
    return 0;
}