#include<iostream>
using namespace std;
int main(){
    int i,n,a[20],front=-1,rear=-1,max=4;
    while(true){
        cout<<"Enter 1 for insertion\n";
        cout<<"Enter 2 for deletion\n";
        cout<<"Enter 3 for display\n";
        cin >> n;
        if(n==1){
            if(rear==max)
                cout<<"Queue is overflow\n";
            else{
                int b;
                cout<<"Enter the value\n";
                cin>>b;
                if(front==-1)
                    front=0;
                rear=rear+1;
                a[rear]=b;
                cout<<"Data successfully inserted\n\n";
            }
        }
        else if(n==2){
            if(front==-1 || front>rear)
                cout<<"Queue is underflow\n\n";
            else{
                cout<<"Deleted value is "<<a[front]<<"\n";
                front=front+1;
            }
        }
        else if(n == 3){
            if(front == -1 || front>rear)
                cout<<"Queue is empty\n\n";
            else{
                cout<<"The present values are:\n";
                for(i=front;i<=rear;i++)
                    cout<<a[i]<<endl;
                cout<<endl;
            }
        }
        else{
            break;
        }
    }
    return 0;
}

