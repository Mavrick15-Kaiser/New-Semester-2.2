#include<iostream>
using namespace std;
double f(double x){
    return 3*x-cos(x)-1;
}
void bisection(double a,double b){
    if(f(a)*f(b)>0){
        cout<<"Not insert correct a and b\n";
        return ;
    }
    double c;
    for(int i=0;i<8;i++){
        c=(a+b)/2;
        cout<<"Root  "<<i+1<<" c = "<<c<<endl;
        if(f(c)==0.0)
            break;
        else if(f(a)*f(c)<=0)
            b=c;
        else
            a=c;
    }
}
int main(){
    double a=0,b=1;
    //cout<<"Enter value of a: ";
    //cin>>a;
    //cout<<"Enter value of b: ";
    //cin>>b;
    bisection(a,b);
    return 0;
}
