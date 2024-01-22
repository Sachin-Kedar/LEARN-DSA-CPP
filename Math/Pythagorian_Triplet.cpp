//  Pythagorean Triplet contains three numbers in which the square of max. number is equal to sum of square of other two numbers.
// if a,b,c in which a is max then  a*a == (b*b + c*c).


#include<iostream>
#include<cmath>
using namespace std;
bool check(int x, int y, int z){
    int a=max(x,max(y,z));
    int b,c;
    if (a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if ( a*a==b*b+c*c){
        return true;
    }
    else{
        return false;
    }


}
int main(){
    int x,y,z;
    cin>>x >> y >>z;

    if (check(x,y,z)){
        cout<<"Pythagorean Triplet.";
    }
    else{
        cout <<"Not a pythogorean Triplet";
    }
}