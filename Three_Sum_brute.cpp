#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Three_Sum_brute( vector<int> & nums) {

    int n = nums.size();
    set<vector<int>>st;   // For avoid Duplicate triplets
    for( int i=0;i<n; i++) {

        for( int j =i+1; j<n ; j++) {

            for( int k= j+1; k< n; k++) {

                int sum = nums[i]+nums[j]+nums[k];
                if( sum ==0) {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
int main() {

    int n ;
    cin >> n;
    vector<int> nums(n);
    for( int i=0;i<n; i++) {

        cin >> nums[i];
    }

    vector<vector<int>>ans = Three_Sum_brute(nums);
    for( auto it : ans) {
        
        for( auto x : it) {
            cout << x << " ";
        }
        cout << endl;
    }
}