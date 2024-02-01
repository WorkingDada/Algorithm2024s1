#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    int n, m, R;
    vector<vector<int> > v;
    cin >> n >> m >> R;
    v.resize(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    for (int k = 0; k < R; k++) {
        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;
        // Adjusting for 0-based index
        r1--; c1--; r2--; c2--;
        
        // Check if the region is entirely outside the matrix or invalid
        if (r1 >= n || c1 >= m || r2 < 0 || c2 < 0 || r1 > r2 || c1 > c2) {
            cout << "INVALID" << endl;
        } else {
            int rmax = INT_MIN; // Initialize to the smallest possible integer
            // Clamp the region to be within the matrix bounds
            r1 = max(r1, 0);
            c1 = max(c1, 0);
            r2 = min(r2, n - 1);
            c2 = min(c2, m - 1);

            for (int i = r1; i <= r2; i++) {
                for (int j = c1; j <= c2; j++) {
                    rmax = max(rmax, v[i][j]);
                }
            }
            cout << endl;
            cout << rmax << endl; // Removed the extra space
        }
    }
}
