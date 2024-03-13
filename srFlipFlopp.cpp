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
    //generates Qn+1 using characteristic table
    //NAND GATE
    int enable;
    int set;
    int reset;
    int prevState;
    cout<<"Enable: ";
    cin>>enable;
    if (enable==0) {
        cout<<"No State";
        return 0;
    }
    cout<<"Set: ";
    cin>>set;
    cout<<"Reset: ";
    cin>>reset;
    if (set==1 && reset==1){
        cout<<"Useless State";
        return 0;
    }
    cout<<"Previous state: ";
    cin>>prevState;

    cout<<"Next State: "<<(set||(prevState&&(!reset)));


    return 0;
}

#else
//c

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() {
    //generates Qn+1 using characteristic table
    int set;
    int reset;
    cout<<"Set: ";
    cin>>set;
    cout<<"Reser: ";

    return 0;
}
#endif
