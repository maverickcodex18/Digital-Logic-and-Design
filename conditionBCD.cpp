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

    //q12 M MOREY UNIT 4

    //CONDITION TO CHECKK WHETHER THE BCD CODE IS ACCEPTANBLE OR NOT
    //CREATED TRUTH TABLE
    //CREATED BOOLEN EQ
    //USED KMAP
    //PARITY CHECKER

    //EXCEPT LSB , ALL BITS ARE USEFUL FOR PARITY CHECK
    //if ABCD is BCD CODE
    //A(B+C) RETURNS 1 => NOT ACCEPTABLE STATE( BCD RANGES FROM 0 TO 15)

    int a;
    int b;
    int c;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a&(b||c)) cout<<"False";
    else cout<<"True";
    return 0;
}

#else
//c

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() {
    //CONDITION TO CHECKK WHETHER THE BCD CODE IS ACCEPTANBLE OR NOT
    //CREATED TRUTH TABLE
    //CREATED BOOLEN EQ
    //USED
    return 0;
}
#endif
