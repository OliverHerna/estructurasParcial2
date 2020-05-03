#include <bits/stdc++.h>
using namespace std;
vector<int>records;
int f;
int fibbonacci(int n){
    //Using a memorization table you can reduse the complexity of your recursive algorithms
    if (n>1 && n <= records.size()) f = records[n];
    if(n == 0) f = 0;
    else if(n == 1) f = 1;
    else f = fibbonacci(n-1)+fibbonacci(n-2); 
    records.push_back(f);
    return f;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++) cout << fibbonacci(i) << " ";
    return 0;
}
