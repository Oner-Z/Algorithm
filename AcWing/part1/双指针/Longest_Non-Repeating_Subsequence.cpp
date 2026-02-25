#include <bits/stdc++.h>

using namespace std;

int a[100005], s[100005];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++ ){
        cin >> a[i];
    }
    int res = -1;
    for (int i = 0, j = 0; i < n; i ++ ){
        s[a[i]] ++;
        while (s[a[i]] > 1){
            s[a[j]] --;
            j ++;
        }
        res = max(res, i - j + 1);
    }
    cout << res;
    return 0;
}