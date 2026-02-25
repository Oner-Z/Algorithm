#include <bits/stdc++.h>

using namespace std;
//位运算另一应用：求n的第k位的值 n >> k & 1
int lowbit(int x){
    return x & -x;
}

int main(){
    int n;
    cin >> n;
    while (n -- ){
        int t;
        cin >> t;
        int res = 0;
        while (t){
            t -= lowbit(t);
            res ++;
        }        
        cout << res << " ";
    }
    return 0;
}