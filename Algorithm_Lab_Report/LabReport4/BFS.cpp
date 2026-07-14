#include <iostream>
using namespace std;
int a[20][20]={0},q[20],visited[20]={0},n,i,j,f=0,r=-1;
void bfs(int v){
    for(i=0;i<n;i++){
        if(a[v][i] == 1 && visited[i] == 0){
            q[++r] = i;
        }
    }
    if(f<=r){
        visited[q[f]] = 1;
        bfs(q[f++]);
    }
}
int main(){
    int v;
    cout<<"Enter the number of vertices : ";
    cin>>n;
    cout<<"Enter graph data in matrix form : "<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the starting vertex : ";
    cin>>v;
    visited[v]=1;
    bfs(v);
    cout<<"The nodes which are reachable : ";
    for(i=0;i<n;i++){
        if (visited[i] == 1){
            cout<<i<<" ";
        }
        else{
            cout<<"\nBFS is not reachable. Not all nodes are reachable.";
            break;
        }
    }
    return 0;
}