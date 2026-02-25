#include <bits/stdc++.h>

using namespace std;

int a[100005], b[100005];

//version1
void insert(int l, int r, int c){
    b[l] += c;
    b[r + 1] -= c;
}

int main(){
    int n, m;
    cin >> n >> m;
    //version1
    for (int i = 1; i <= n; i ++ ){
        cin >> a[i];
        insert(i, i, a[i]);
    }
    while (m -- ){
        int l, r, c;
        cin >> l >> r >> c;
        insert(l, r, c);
    }
    
    //version2
    // for (int i = 1; i <= n; i ++ ){
    //     cin >> a[i];
    //     b[i] = a[i] - a[i - 1];
    // }
    // while (m -- ){
    //     int l, r, c;
    //     cin >> l >> r >> c;
    //     b[l] += c;
    //     b[r + 1] -= c;
    // }
    int sum = 0;
    for (int i = 1; i <= n; i ++ ){
        sum += b[i];
        cout << sum << " ";
    }
    return 0;
}