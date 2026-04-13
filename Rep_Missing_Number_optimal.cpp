#include<iostream>
#include<vector>
using namespace std;
vector<int> Rep_Missing_Number_optimal(vector<int> &nums) {

    int n = nums.size();
    long long SN = (1LL *n*(n+1))/2;
    long long S2N= (1LL *n*(n+1)*(2*n+1)) /6;
    long long S=0;
    long long S2=0;
    for( int i=0;i<n;i++) {

        S+= nums[i];
        S2+= (1LL * nums[i] * nums[i]);
    }

    long long VAL1 = S - SN;     // x-y
    long long VAL2 = S2 - S2N;   // x2- y2
    VAL2 = VAL2 / VAL1;          // x+y

    long long x = (VAL1 + VAL2)/2;
    long long y = x-VAL1;

    return{(int)x, (int)y};
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for( int i =0;i<n; i++) {
        cin >> nums[i];
    }

    vector<int> res= Rep_Missing_Number_optimal(nums);
    for(auto it: res) {
        cout <<it << " ";
    }
}