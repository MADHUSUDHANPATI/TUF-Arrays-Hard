#include<iostream>
#include<vector>
using namespace std;

void Each_Row( int n) {

    cout << 1<< " ";
    int res=1;
    for( int i=1; i<n ; i++) {
        res = res*(n-i);
        res= res/i;
        cout << res << " ";
    }
}
void Pascal_Printing_total_traingle_optimal( int n) {

    for(int i=1;i<=n; i++) {
        Each_Row(i);
        cout << endl;
    }
}
int main() {

    int n;
    cin>> n;

    Pascal_Printing_total_traingle_optimal(n);
}