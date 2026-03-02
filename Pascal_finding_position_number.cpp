// We can find this also by :Print all traingle and find the location . but this brute one ;

#include<iostream>
#include<vector>
using namespace std;

int Pascal_finding_position_number(int n, int r) {

    int res=1 ;
    for( int i=0;i<r;i++) {

        res= res * (n-i);
        res= res/(i+1);
    }

    return res;

}
int main() {

    int row, col;  // This is not 0 - based indexing . this is 1 based indexing;
    cin >> row >> col;
    cout << Pascal_finding_position_number(row-1, col-1);
}