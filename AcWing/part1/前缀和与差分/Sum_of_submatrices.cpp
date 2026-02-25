#include <bits/stdc++.h>

using namespace std;

int s[1005][1005];

int main(){
    int n, m, q;
    cin >> n >> m >> q;
    for (int i = 1; i <= n; i ++ ){
        for (int j = 1; j <= m; j ++ ){
            int t;
            cin >> t;
            s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + t;
        }
    }
    while (q -- ){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << s[x2][y2] -s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1] << endl;;
    }
    return 0;
}