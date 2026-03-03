#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> Majority_Element_II_better( vector<int> & nums) {

    int n= nums.size();
    int mini= (int)(n/3)+1;
    vector<int> ans;
    unordered_map<int, int> mpp;

    for( int i=0;i<n; i++) {

        mpp[nums[i]]++;
        if(mpp[nums[i]]  == mini) {
            ans.push_back(nums[i]);
        }
        if(ans.size()==2) break;
    }
    return ans;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for( int i=0;i<n; i++) {
        cin >> nums[i];
    }
    vector<int> result = Majority_Element_II_better(nums);
    for( auto it : result) {
        cout << it << " ";
    }
}