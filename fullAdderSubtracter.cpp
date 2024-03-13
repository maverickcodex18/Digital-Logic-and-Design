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

class fullAdderSubtracter{
    private:
        int mode;
        string operand1; //4bit
        string operand2; //4bit
    public:
        fullAdderSubtracter(const int & mode,const string & operand1,const string & operand2):mode(mode),operand1(operand1),operand2(operand2){

            int carry=0;
            string answer="";
            // cout<<operand1;
            // cout<<operand2;
            int bit1;
            int bit2;

            for (int i = 3; i >=0; i--)
            {
                bit1=(int)operand1[i]-48;
                bit2=(int)operand2[i]-48;
                //modifying bit2 with mode
                bit2^=mode;
                answer+=char(bit1^bit2^carry+48);
                carry=bit1&bit2 || (bit1^bit2)&carry;
                //cout<<bit1<<bit2<<carry<<endl;
            }
            answer+=char(carry+48);

            //showing answer
            if(mode==1) cout<<"Answer is in 1C Addition Form : ";
            for (int i = 4; i >=0; i--)
            {
                cout<<answer[i];
            }


        };

};


int main() {
    int mode=1;
    string operand2="1001";
    string operand1="1100";
    new fullAdderSubtracter(mode,operand1,operand2);
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
