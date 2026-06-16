#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,l,key;
    cout<<"Enter an odd number: "<<endl;
    cin>>n;
    int square [n][n];
    if(n%2==0){
        cout<<"n is Even";
        return 0;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            square[i][j]=0;
        }
    }
    int mid=(n-1)/2;
    square[0][mid]=1;
    j=mid;
    for(key=2;key<=n*n;key++){
        if(i>0){
            k=i-1;
        }
        else{
            k=n-1;
        }
        if(j>0){
            l=j-1;
        }
        else{
            l=n-1;
        }
        if(square[k][l]>0){
            i=(i+1)%n;
        }
        else{
            i=k;
            j=l;
        }
        square[i][j]=key;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<square[i][j]<<"  ";
        }
        cout<<endl;
    }
}