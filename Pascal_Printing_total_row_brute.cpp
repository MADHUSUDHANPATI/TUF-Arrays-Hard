#include<iostream>
#include<vector>
using namespace std;
int Each_Number(int n, int r) {

    int res=1;
    for( int i=0;i<r; i++) {

        res= res *(n-i);
        res= res/(i+1);
    }
    return res;

}
void Pascal_Printing_total_row_brute(int n) {
   
    for( int i=1;i<=n;i++) {
       
        cout << Each_Number(n-1, i-1) <<  " ";
    }
}
int main() {

    int n;
    cin >> n;
    Pascal_Printing_total_row_brute(n);
}