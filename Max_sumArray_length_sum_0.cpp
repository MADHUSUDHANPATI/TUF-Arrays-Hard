#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int Max_sumArray_length_sum_0( vector<int > &nums) {

    int n = nums.size();
    unordered_map<int, int> mpp;
    long long preSum =0;
    int maxLen =0;
    for( int i=0;i<n; i++) {
        preSum +=nums[i];
        if( preSum ==0) {
            maxLen= i+1;

        }
        if(mpp.find(preSum)!=mpp.end()) {
                maxLen = max( maxLen, i-mpp[preSum]);
        }
        if(mpp.find(preSum)==mpp.end()) {
            mpp[preSum] =i;
        }
              
        
    }
    return maxLen;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);
    for( int i=0;i<n; i++) {
        cin >> nums[i];
    }

    cout << Max_sumArray_length_sum_0( nums);
}