#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int find_x(int n, vector<int>& a) {
    if (n == 1) {
        return a[0];
    }
    if (n == 2) {
        return (a[0] + a[1]) / 2;
    }
    
    // find the index of the maximum value in the array
    auto max_it = max_element(a.begin(), a.end());
    int max_index = distance(a.begin(), max_it);
    
    // if the maximum value is not at the beginning or end of the array,
    // there is no value of x that will make the array sorted
    if (max_index != 0 && max_index != n - 1) {
        return -1;
    }
    
    // if the maximum value is at the beginning of the array,
    // x should be the maximum value plus the difference between
    // the maximum value and the second element
    if (max_index == 0) {
        return a[0] + (a[0] - a[1]);
    }
    
    // if the maximum value is at the end of the array,
    // x should be the maximum value minus the difference between
    // the maximum value and the second to last element
    if (max_index == n - 1) {
        return a[n - 1] - (a[n - 1] - a[n - 2]);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << find_x(n, a) << endl;
    }
    return 0;
}

