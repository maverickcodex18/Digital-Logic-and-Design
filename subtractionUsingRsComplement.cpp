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
int noOfDigits(int no){
    int i=0;
    for(;no!=0;i++){
        no/=10;
    }
    return i;
}

int main() {
    int base;
    int operand1;
    int operand2;
    int noofDigitsInOperand2;
    int noofDigitsInOperand1;
    int noofDigitsInOperandMax;

    cout<<"Base: ";
    cin>>base;
    cout<<"operand1: ";
    cin>>operand1;
    cout<<"operand2: ";
    cin>>operand2;
    noofDigitsInOperand2=noOfDigits(operand2);
    noofDigitsInOperand1=noOfDigits(operand1);
    noofDigitsInOperandMax=(noofDigitsInOperand1>noofDigitsInOperand2)?noofDigitsInOperand1:noofDigitsInOperand2;

    int operand2RC=pow(base,noofDigitsInOperandMax)-operand2;
    int sum=operand1+operand2RC;
    int noOfDigitsInSum=noOfDigits(sum);
    if (noOfDigitsInSum>noofDigitsInOperandMax) {
        int msb=sum/pow(10,(noOfDigitsInSum-1));
        sum-=((msb)*(10*noOfDigitsInSum));
        sum+=msb;
    }
    else{
        sum=pow(base,noofDigitsInOperandMax)-sum;
    }

    cout<<operand1<<" - "<<operand2<<" : "<<sum;

    return 0;
}

#else
//c

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main() {

    return 0;
}
#endif
