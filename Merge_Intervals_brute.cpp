#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> Merge_Intervals_brute(vector<vector<int>> &nums) {

    int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for( int i=0;i<n; i++) {
        int first =nums[i][0];
        int end = nums[i][1];

        if(!ans.empty() && end <= ans.back()[1]) {
            continue;
        }

        for( int j=i+1;j<n; j++) {
         
            if(nums[j][0] <= end) {
                end = max(end, nums[j][1]);
            }
        }
        ans.push_back({first, end});
    }
    return ans;
}
int main() {

    int n;
    int m=2;
    cin>> n;

    vector<vector<int>>nums(n, vector<int>(m));

    for( int i=0;i<n; i++) {
        for( int j=0;j<m; j++) {

            cin >> nums[i][j];
        }
    }

    vector<vector<int>>result =  Merge_Intervals_brute(nums);

    for( auto it : result) {
        for(auto x : it) {
            cout<< x << ",";
        }
        cout << endl;
    }

}