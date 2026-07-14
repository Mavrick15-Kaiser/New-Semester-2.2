#include<iostream>
using namespace std;
void knapsack(int n, float weight[], float profit[], float capacity){
    float x[20], tp = 0;
    int i, j;
    float u;
    u = capacity;
    for (i = 0; i < n; i++){
        x[i] = 0.0;
    }
    for (i = 0; i < n; i++){
        if (weight[i] > u){
            break;
        }
        else{
            x[i] = 1.0;
            tp = tp + profit[i];
            u = u - weight[i];
        }
    }
    if (i < n){
        x[i] = u / weight[i];
        tp = tp + (x[i] * profit[i]);
    }
    cout<<"\nThe result vector is: ";
    for(i = 0; i < n; i++){
        cout << x[i] << "\t";
    }
    cout << "\nMaximum profit is: " << tp;
}
int main(){
    float weight[20], profit[20], ratio[20];
    float capacity, temp;
    int num, i, j;
    cout << "Enter the number of objects: ";
    cin >> num;
    cout << "Enter weight and profit of each object:\n";
    for (i = 0; i < num; i++){
        cin >> weight[i] >> profit[i];
    }
    cout << "Enter the capacity of knapsack: ";
    cin >> capacity;
    for (i = 0; i < num; i++){
        ratio[i] = profit[i] / weight[i];
    }
    for (i = 0; i < num; i++){
        for (j = i + 1; j < num; j++){
            if (ratio[i] < ratio[j]){
                temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;
                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;
                temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;
            }
        }
    }
    knapsack(num, weight, profit, capacity);
    return 0;
}