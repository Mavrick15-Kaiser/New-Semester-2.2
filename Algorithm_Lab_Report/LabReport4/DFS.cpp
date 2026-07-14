#include<iostream>
using namespace std;
void dfs(int);
int g[10][10], visited[10] = {0}, n;
int main(){
    cout<<"Enter the number of vertices: ";
    cin>>n;
    cout<<"\nEnter the adjacency matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cin>>g[i][j];
        }
    }
    cout<<"\nVisited vertices are: ";
    dfs(0);
    return 0;
}
void dfs(int i){
    visited[i]=1;
    cout<<i<<" ";
    for(int j=0;j<n;j++){
        if(visited[j] == 0 && g[i][j] == 1){
            dfs(j);
        }
    }
}