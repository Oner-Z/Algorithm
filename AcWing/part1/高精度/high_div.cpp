#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> div(vector<int> &A, int b, int &r){
    vector<int> C;
    for (int i = A.size() - 1; i >= 0; i -- ){
        r = r * 10 + A[i];
        C.push_back(r / b);
        r %= b;
    }
    //version1
    reverse(C.begin(), C.end());
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    //version2
    // while(C.size() > 1 && C.front() == 0) C.erase(C.begin());
    
    return C;
}

int main(){
    string a;
    int b;
    cin >> a >> b;
    vector<int> A;
    for (int i = a.size() - 1; i >= 0; i -- ) A.push_back(a[i] - '0');
    vector<int> C;
    int r = 0;
    C = div(A, b, r);
    //version1
    for(int i = C.size() - 1; i >= 0; i -- ) cout << C[i];
    //version2
    // for (int i = 0; i < C.size(); i ++ ) cout << C[i];
    cout << endl << r << endl;
    return 0;
}