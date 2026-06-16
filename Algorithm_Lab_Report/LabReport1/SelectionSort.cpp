#include<iostream>
using namespace std;
void seletectionSort(int a[],int n){
    int min_idx;
    for(int i=0;i<n;i++){
        min_idx=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!=i){
            swap(a[min_idx],a[i]);
        }
    }
}
void printSort(int a[],int n){
    cout<<"\nSorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    seletectionSort(a,n);
    printSort(a,n);
}