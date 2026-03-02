#include<iostream>
#include<vector>
using namespace std;
void Pascal_Printing_total_row_optimal(int n) {

    cout << 1 << " ";
    int res=1;
    for( int i=1;i<n; i++) {

        res = res *(n-i);
        res= res/ i;
        cout << res <<  " ";
    }
}
int main() {

    int n;
    cin >>n;
    Pascal_Printing_total_row_optimal(n);
}