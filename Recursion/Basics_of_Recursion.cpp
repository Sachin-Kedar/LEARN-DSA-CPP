/*

#include<bits/stdc++.h>
using namespace std;
void f(int i,int n){
    if(i>n) return ;
    cout<<"Hello";
    cout<<endl;
    f(i+1,n);
}
int main(){
    int n=6;
    f(1,n);
    cout<<endl;
}


//  Print 1 - N numbers.

#include<bits/stdc++.h>
using namespace std;
void p(int i,int n){
    if(i>n) return ;
    cout<<i<<endl;
    p(i+1,n);
}

int main(){
    int n=6;
    p(1,n);
    return 0;
}

//  Print numbers from N - 1 .

#include<bits/stdc++.h>
using namespace std;
void p(int i,int n){
    if(i<1) return ;
    cout<<i<<endl;
    p(i-1,n);
}

int main(){
    int n=6;
    p(n,n);
    return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;
void p(int i,int n){
    if(i<1) return ;
    p(i-1,n);
    cout<<i<<endl;
    
}

int main(){
    int n=6;
    p(n,n);
    return 0;
}
