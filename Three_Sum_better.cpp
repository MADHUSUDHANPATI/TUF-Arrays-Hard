#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Three_Sum_better( vector<int> & nums) {

    int n = nums.size();
    set<vector<int>>st;   // For avoid Duplicate triplets
    for( int i=0;i<n ; i++) {
        set<int> hash;

        for( int j=i+1; j< n; j++) {

            int third = -(nums[i]+nums[j]);
            if(hash.find(third)!=hash.end()) {

                vector<int> temp ={nums[i], nums[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hash.insert(nums[j]);
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

    vector<vector<int>>ans = Three_Sum_better(nums);
    for( auto it : ans) {
        
        for( auto x : it) {
            cout << x << " ";
        }
        cout << endl;
    }
}