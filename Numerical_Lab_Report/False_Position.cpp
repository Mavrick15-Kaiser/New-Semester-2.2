#include<iostream>
#include<math.h>
using namespace std;
double f(double x){
    return 3*x-cos(x)-1;
}
int main(){
    double a,b,c;
    int n;
    cout<<"Enter a and b: ";
    cin>>a>>b;
    cout<<"Enter Iteration: ";
    cin>>n;
    if(f(a)*f(b)>=0){
        cout<<"Wrong Initial"<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++){
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        cout<<"Iteration "<< i <<" root= " <<c<<endl;
        if(f(a)*f(c)<0){
            b=c;
        }
        else
            a=c;
    }
    cout<<"Final Root is: "<<c<<endl;
    return 0;
}