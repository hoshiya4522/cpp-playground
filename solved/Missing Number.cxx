// https://cses.fi/problemset/task/1083/
#include <iostream>
#include <string>
using namespace std;
 
 
int main() {
    // Write C++ code here
    long long int n;
    cin >> n;
    long long int sum=n*(n+1)/2;
 
    long long int x;
    for(long long int i=0; i<n-1; i++){
        cin >> x;
        sum = sum - x;
    }
 
    cout << sum << endl;
    
    return 0;
