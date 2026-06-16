#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Decimal Number: ";
    cin>>num;
    int arr[20],i=0;
    for(i=0;num>0;i++)
    {
        arr[i]=num%2;
        num=num/2;
    }
    cout<<"Binary Number: ";
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j];
    }
    cout<<endl;
    return 0;
}
