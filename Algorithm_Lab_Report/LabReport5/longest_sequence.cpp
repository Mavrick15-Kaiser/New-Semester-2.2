#include<iostream>
#include<cstring>
using namespace std;
#define MAX 100
int m, n;
int c[MAX][MAX];
char x[MAX], y[MAX];
char b[MAX][MAX];
void printLCS(int i, int j){
    if (i == 0 || j == 0){
        return;
    }
    if(b[i][j] == 'c'){
        printLCS(i - 1, j - 1);
        cout << x[i - 1];
    }
    else if(b[i][j] == 'u'){
        printLCS(i - 1, j);
    }
    else{
        printLCS(i, j - 1);
    }
}
void lcs(){
    m = strlen(x);
    n = strlen(y);
    for(int i = 0; i <= m; i++){
        c[i][0] = 0;
    }
    for(int j = 0; j <= n; j++){
        c[0][j] = 0;
    }

    for(int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if(x[i - 1] == y[j - 1]){
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = 'c'; 
            }
            else if(c[i - 1][j] >= c[i][j - 1]){
                c[i][j] = c[i - 1][j];
                b[i][j] = 'u'; 
            }
            else{
                c[i][j] = c[i][j - 1];
                b[i][j] = 'l'; 
            }
        }
    }
}
int main(){
    cout << "Enter the 1st sequence: ";
    cin >> x;
    cout << "Enter the 2nd sequence: ";
    cin >> y;
    lcs();
    cout << "\nLength Table (c):\n";
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\nDirection Table (b):\n";
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "\nLength of LCS = " << c[m][n] << endl;
    cout << "LCS = ";
    printLCS(m, n);
    cout << endl;
    return 0;
}