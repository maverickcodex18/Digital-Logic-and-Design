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

    //1 octal occupies 4 bits
    // a b c d:(a: MSB , d:LSB)

    for(auto &digit:no){
        int digitValue=(int)digit-48;
        switch (digit){
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
                digitValue-=7;
        }

        if(digitValue>15){
            cout<<"\nWrong Input";
            break;
            //return -1;
        }
        int a=(digitValue==8|| digitValue==9|| digitValue==10|| digitValue==11|| digitValue==12|| digitValue==13|| digitValue==14|| digitValue==15)?1:0;
        int b=(digitValue==4|| digitValue==5|| digitValue==6|| digitValue==7|| digitValue==12|| digitValue==13|| digitValue==14|| digitValue==15)?1:0;
        int c=(digitValue==2|| digitValue==6|| digitValue==3|| digitValue==7|| digitValue==10|| digitValue==11|| digitValue==14|| digitValue==15)?1:0;
        int d=(digitValue%2!=0)?1:0;
        cout<<a<<b<<c<<d;
    }
    while(true){
        string key;
        cout<<"\nPress Any Key to Exit: ";
        cin>>key;
        break;
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
    return 0;
}
#endif
