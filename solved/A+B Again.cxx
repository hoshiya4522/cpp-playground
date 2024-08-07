// https://codeforces.com/contest/1999/problem/A

#include <iostream>
using namespace std;
#define deb(x) cerr << #x << " = " << x << std::endl;
 
int main() {
    int n,x;
    cin >> n;
    while (n--){
        cin >> x;
        if (x<10) {cout << x << endl; continue;}
        cout << x/10 + x%10 << endl;
    }
    return 0;
}
