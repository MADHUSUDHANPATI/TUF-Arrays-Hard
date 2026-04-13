#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<vector<int>> Four_sum_brute( vector<int> &nums, int target) {

    int n = nums.size();
    set<vector<int>> st;
    for( int i=0;i<n; i++) {
        for( int j =i+1; j< n; j++) {
            for( int k = j+1; k<n; k++) {
                for( int l = k+1; l<n; l++) {

                    long long sum = nums[i]+nums[j];
                    sum+=nums[k];
                    sum+=nums[l];
                    if(sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
int main() {

    int n, target;
    cin >> n >> target;
    vector<int> nums(n);

    for( int i=0;i<n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> res = Four_sum_brute(nums, target);

    for(auto it : res) {
        for(auto x : it) {

            cout << x<< " ";
        }
        cout << endl;
    }
}