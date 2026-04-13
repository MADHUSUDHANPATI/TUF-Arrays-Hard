#include<iostream>
#include<vector>
using namespace std;
vector<int> Rep_Missing_Number_better(vector<int> &nums) {

    int n = nums.size();
    int rep=-1;
    int mis=-1;
    vector<int> hash(n+1, 0);

    for( int i=0;i<n; i++) {
        hash[nums[i]]++;
    }

    for( int i=1;i<=n;i++) {
        if(hash[i]==2) rep=i;
        if(hash[i]==0) mis=i;
    }

    return{rep, mis};
}
int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for( int i =0;i<n; i++) {
        cin >> nums[i];
    }

    vector<int> res= Rep_Missing_Number_better(nums);
    for(auto it: res) {
        cout <<it << " ";
    }
}