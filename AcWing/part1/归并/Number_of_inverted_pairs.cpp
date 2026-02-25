#include <iostream>

using namespace std;

#define ll long long

int q[100005],tmp[100005];

ll merge(int l, int r){
    if (l >= r) return 0;
    int mid = l + r >> 1;
    ll res = merge(l, mid) + merge(mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while(i <= mid && j <= r){
        if(q[i] <= q[j]) tmp[k ++ ] = q[i ++ ];
        else{
            tmp[k ++ ] = q[j ++ ];
            res += mid - i + 1;
        }
    }
    while(i <= mid) tmp[k ++ ] = q[i ++ ];
    while(j <= r) tmp[k ++ ] = q[j ++ ];
    for(i = l, j = 0; i <= r; i ++ , j ++ ) q[i] = tmp[j];
    return res;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++ ) cin >> q[i];
    cout << merge(0, n - 1);
    return 0;
}