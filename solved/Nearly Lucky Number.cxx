// https://codeforces.com/contest/110/problem/A
#include <iostream>
using namespace std;
 
int main() {
    // Write C++ code here
    int count=0;
    string s;
    cin >> s;
    
    for(int i=0; i<s.length(); i++){
        if (s[i]=='4' || s[i]=='7') count++;
    }
    
    string cs = to_string(count);
    
    for(int j=0; j<cs.length(); j++){
        if (cs[j]!='4' && cs[j]!='7'){
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}
