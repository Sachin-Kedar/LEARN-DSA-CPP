//  Even Odd Program

//  Prints    Even -->1;
//            Odd-->  0

//            ex.         10
//                        01
//                    ans 00

//      for 5- 101
//             001
//             001


#include <iostream>
using namespace std ;

int EvenOdd(int a){
    if (a&1){
        return 0;
    }
    return 1;
}

int main(){
    int a;
    cin>>a;
    int ans = EvenOdd(a);
    cout <<ans<<endl;

}