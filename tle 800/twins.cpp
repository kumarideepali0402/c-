#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    int sum = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    
    int count = 0;
    sort(v.begin(), v.end());
    int current_sum = 0;
    
    for(int i = n - 1; i >= 0; i--) {
    	current_sum += v[i];
        count++;

        if(current_sum > (sum / 2)) {
            break;
        }
    }
    
    cout << count;
    return 0;
}
