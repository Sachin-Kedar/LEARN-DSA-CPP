



/*  --- Print the below patterns
Q1
          ****
          ****
          ****
          ****


#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout <<"number A : ";
    cin>>a;
    int i=1;
    while (i<=a){
        int j=1;
        while(j<=a){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;

}


Q2
number A : 5
11111
22222
33333
44444
55555


#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout <<"number A : ";
    cin>>a;
    int i=1;
    while (i<=a){
        int j=1;
        while(j<=a){
            cout<<i;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;

}



Q3
number A : 7
1234567
1234567
1234567
1234567
1234567
1234567
1234567




#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout <<"number A : ";
    cin>>a;
    int i=1;
    while (i<=a){
        int j=1;
        while(j<=a){
            cout<<j;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;

}


Q4

number A : 4
4321
4321
4321
4321



#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout <<"number A : ";
    cin>>a;
    int i=1;
    while (i<=a){
        int j=a;
        while(j<=a && j>0){
            cout<<j;
            j-=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;

}

Q5
Number A : 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25



#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout <<"number A : ";
    cin>>a;
    int count=1;
    int i=1;
    while (i<=a){
        int j=1;
        while(j<=a){
            cout<<count<< " ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;

}


Q6

number A : 4
*
**
***
****


#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout <<"number A : ";
    cin>>a;
    int i=1;
    while (i<=a){
        int j=1;
        while(j<=i){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}


Q7

number A : 6
1
22
333
4444
55555
666666


#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout <<"number A : ";
    cin>>a;
    int i=1;
    while (i<=a){
        int j=1;
        while(j<=i){
            cout<<i;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}


Q8




#include<iostream>
using namespace std;
int main(){
    int a=5;
    cout <<"number A : ";
    cin>>a;
    int i=1;
    while (i<=a){
        int j=1;
        while(j<=i){
            cout<<i<< " ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}


Q9

number : 5
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE



#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cout << "number : ";
    cin >> n;
    char a = 65;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << a;
            j += 1;
        }
        cout << endl;
        a += 1;
        i += 1;
    }
}


-- Q 10 

****
****
****
****
****

//  using For Loop
#include <iostream>
using namespace std;

int main (){
    int n=5;
    for (int i=0;i<n;i++){
        int j=1;
        for(j;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


//   using While Loop

#include <iostream>
using namespace std;

int main (){
    int n=5;
    int i=0;
    while(i<n){
        
        for (int j=1;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
        i++;
    }
}

Q 11--
--  Hologram with * 
****
*  *
*  *
*  *
****

#include <iostream>
using namespace std;

int main (){
    int row=5;
    int col=4;
    for (int i =1;i<=row;i++){
        for (int j=1;j<=col;j++){
            if (i==1 || i==row || j==1 ||j==col){
                cout <<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}


--  Q-12
---  Inverted Half Pyramid
*****
****
***
**
*


#include <iostream>
using namespace std;

int main (){
    int n=5;
    while(n>0){
        for (int i=0;i<n;i++){
            cout<<"*";
        }
        cout<<endl;
        n--;
    }
}

--  Q-13
-- Half Pyramid after 180 degree rotation
    *
   **
  ***
 ****
*****

#include <iostream>
using namespace std;

int main (){
    int n=5;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (j <= n-i){
                cout<<" ";

            }
            else{
                 cout<<"*";
            }

           
        }
        cout<<endl;
    }
}

--- Q -14
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

#include <iostream>
using namespace std;

int main (){
    int n=5;
    for(int i=0;i<n;i++){
        int count=1;
        for (int j=1;j<=n;j++){
            if (j < n+1-i){
            cout<<count<<" ";
            count++;
            }
        }
        cout<<endl;
    }
}

-- Q 15
1
01
101
0101
10101

//  here in this pattern where i+j is even value is 1 else its 0.

#include <iostream>
using namespace std;

int main (){
    int n=5;
    for (int i =1;i<=n;i++){
        for (int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
}

*/