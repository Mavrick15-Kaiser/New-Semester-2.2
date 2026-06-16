#include<iostream>
using namespace std;
int binaryToDecimal(int binary)
{
    int decimal=0,power=1,remainder;
    while(binary>0)
    {
        remainder=binary%10;
        decimal+=remainder*power;
        binary/=10;
        power*=2;
    }
    return decimal;
}
int main()
{
    int binary;
    cout<<"Enter a Binary Number: ";
    cin>>binary;
    cout<<"Decimal Number: "<<binaryToDecimal(binary);
    cout<<endl;
    return 0;
}
