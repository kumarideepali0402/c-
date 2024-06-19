#include <bits/stdc++.h>
using namespace std;

bool isAsc(vector<int> v) {
    bool flag = true;
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] > v[i + 1]) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }
        if (isAsc(v)) 
            cout << "yes" << endl;
        else if (k > 1) 
            cout << "yes" << endl;
        else if (k == 1) 
            cout << "no" << endl;
    }
}