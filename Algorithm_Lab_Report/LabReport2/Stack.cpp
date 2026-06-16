#include<iostream>
using namespace std;
int main(){
    int i,n,a[20],max=4,top=-1;
    while(true){
        cout<<"Enter 1 for insertion\n";
        cout<<"Enter 2 for deletion\n";
        cout<<"Enter 3 for display\n";
        cin >> n;
        if(n==1){
            if(top==max)
                cout<<"Stack is overflow\n";
            else{
                int b;
                cout<<"Enter the value\n";
                cin>>b;
                top=top+1;
                a[top]=b;
                cout<<"Data successfully inserted\n";
            }
        }
        else if(n==2){
            if(top==-1)
                cout<<"Stack is underflow\n";
            else{
                cout<<"Deleted value is "<<a[top]<<"\n";
                top = top - 1;}
        }
        else if(n==3){
            if(top==-1)
                cout<<"Stack is empty\n";
            else{
                cout<<"The present values are:\n";
                for(i=0;i<=top;i++)
                    cout<<a[i]<<endl;
                cout<<endl;}
        }
        else{
            break;
        }
    }
    return 0;
}