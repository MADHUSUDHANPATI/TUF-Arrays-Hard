#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

vector<vector<int>> Four_sum_better( vector<int> &nums, int target) {

    int n = nums.size();
    set<vector<int>> st;
    for( int i=0;i<n; i++) {
        for( int j =i+1; j< n; j++) {
            set<int> hash;
            for( int k = j+1; k<n; k++) {
                long long sum = nums[i]+nums[j];
                sum+=nums[k];

                int fourth = target-sum;

                if(hash.find(fourth)!=hash.end()) {

                    vector<int> temp = {nums[i], nums[j], nums[k], fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hash.insert(nums[k]);
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

    vector<vector<int>> res = Four_sum_better(nums, target);

    for(auto it : res) {
        for(auto x : it) {

            cout << x<< " ";
        }
        cout << endl;
    }
}