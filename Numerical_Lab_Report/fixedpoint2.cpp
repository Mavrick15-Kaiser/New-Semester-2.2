#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double g(double x){
    return(cos(x)+1)/3;
}
int main(){
    double x,x1;
    string eq;
    cout<<"Enter equation: ";
    getline(cin, eq);
    if(eq.find("log") != string::npos ||
       eq.find("sin") != string::npos ||
       eq.find("cos") != string::npos ||
       eq.find("tan") != string::npos ||
       eq.find("exp") != string::npos)
    {
        cout<<"\nEquation type: Logarithmic/Trigonometric\n";
        x=3.2;
    }
    else{
        cout<<"\nEquation type: Simple equation\n";
        x=0.5;
    }
    cout<<"\nInitial guess = "<<x<<endl;
    cout<<fixed<<setprecision(6);
    double eps=1e-6;
    for(int i=1;i<=6;i++)
    {
        x1=g(x);
        cout<<"Iteration " << i << " : x = " << x1 << endl;
        if(fabs(x1 - x)<eps)
        {
            break;
        }
        else{
        x=x1;}
    }
    cout<<"\nApproximate Root = "<<x1<<endl;
    return 0;
}