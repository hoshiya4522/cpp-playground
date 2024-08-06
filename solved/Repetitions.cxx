// https://cses.fi/problemset/task/1069
#include <iostream>
using namespace std;
#define deb(x) cerr << #x << " = " << x << std::endl;

int main() {
    string s;
    int count=1, rep=1; // A single character counts as a repetition appearntly
    cin >> s;

    char curr, prev=s[0];

    for(int i=1; i<s.length(); i++){
        curr=s[i];
        if (curr!=prev) {
            if (count > rep) rep = count;
            count=0;
        }
        prev=curr;
        count++;

        if(i==(s.length()-1)){
            if (count > rep) rep = count;
        }
    }

    cout << rep << endl;

    return 0;
}
