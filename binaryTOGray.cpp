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

    cout<<no[0];
    for (int i = 1; i < no.size(); i++)
    {
        int currVal=(int)no[i] -48;
        int prevVal=(int)no[i-1] -48;
        if(currVal>1){
            cout<<"\nWrong Input";
            return -1;
        }
        cout<<(currVal^prevVal);
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

    cout<<no[0];
    for (int i = 0; i < count; i++)
    {
        /* code */
    }

    return 0;
}
#endif
