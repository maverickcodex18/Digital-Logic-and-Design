#define cpp
#ifdef cpp
//cpp
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<cmath>
using namespace std;
int main() {

    //input
    string no;
    cout<<"Enter No: ";
    cin>>no;

    //1 octal occupies 3 bits
    // a b c :(a: MSB , c:LSB)

    for(auto &digit:no){
        int digitValue=(int)digit-48;
        if(digitValue>7){
            cout<<"\nWrong Input";
            return -1;
        }
        int a=(digitValue==4|| digitValue==5|| digitValue==6|| digitValue==7)?1:0;
        int b=(digitValue==2|| digitValue==3|| digitValue==6|| digitValue==7)?1:0;
        int c=(digitValue==1|| digitValue==5|| digitValue==3|| digitValue==7)?1:0;
        cout<<a<<b<<c;
    }

    return 0;
}

#else
//c

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() {

    //input
    string no;
    cout<<"Enter No: ";
    cin>>no;

    //1 octal occupies 3 bits
    // a b c :(a: MSB , c:LSB)

    for(auto &digit:no){
        int digitValue=(int)digit-48;
        int a=(digitValue==4|| digitValue==5|| digitValue==6|| digitValue==7)?1:0;
        int a=(digitValue==4|| digitValue==5|| digitValue==6|| digitValue==7)?1:0;
        int a=(digitValue==4|| digitValue==5|| digitValue==6|| digitValue==7)?1:0;
    }

    return 0;
}
#endif
