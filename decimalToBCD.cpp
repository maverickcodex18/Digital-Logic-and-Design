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
    string decimal;
    cout<<"Enter No: ";
    cin>>decimal;

    //BCD TEMPLATE
    //A B C D (A: MSB , D: LSB)
    for (auto &&digit : decimal)
    {
        int digitValue=(int)digit -48;
        int A=(digitValue==8 || digitValue==9)?1:0;
        int B=(digitValue==4 || digitValue==5|| digitValue==6|| digitValue==7)?1:0;
        int C=(digitValue==2 || digitValue==3|| digitValue==6|| digitValue==7)?1:0;
        int D=(digitValue==1 || digitValue==3|| digitValue==5|| digitValue==7|| digitValue==9)?1:0;
        cout<<A<<B<<C<<D;
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
    string decimal;
    cout<<"Enter No: ";
    cin>>decimal;

    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }





    return 0;
}
#endif
