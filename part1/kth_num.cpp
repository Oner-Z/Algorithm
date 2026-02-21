#include <iostream>

using namespace std;

int q[100005];

void quick(int q[],int l, int r){
    if(l >= r) return;
    int x = q[(l + r) >> 1], i = l - 1, j = r + 1;
    while(i < j){
        do i++; while(q[i] < x);
        do j--; while(q[j] > x);
        if(i < j) swap(q[i],q[j]);
    }
    quick(q,l,j);
    quick(q,j + 1,r);
}

int main (){
    int n,k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> q[i];
    }
    quick(q,0,n-1);
    cout << q[k-1];
    return 0;
}