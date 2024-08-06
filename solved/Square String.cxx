// https://codeforces.com/problemset/problem/1619/A
#include <iostream>
using namespace std;
#define deb(x) cerr << #x << " = " << x << std::endl;

int main() {
    int n, status;
    cin >> n;
    string s;

    while(n--){
        status = 1;
        cin >> s;
        if (s.length()%2) { // check if even eligible
            cout << "NO" << endl;
            continue;
        }

        int half=s.length()/2;
        for(int i=0; i<half; i++){
            if (s[i]!=s[half+i]){
                status = 0;
                break;
            }
        }

        status==0 ? cout << "NO" << endl : cout << "YES" << endl;
    }

    return 0;
}
