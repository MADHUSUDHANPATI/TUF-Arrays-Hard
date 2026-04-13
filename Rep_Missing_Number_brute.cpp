#include<iostream>
#include<vector>
using namespace std;
vector<int> Rep_Missing_Number_brute(vector<int> &nums) {

    int n = nums.size();
    int rep=-1;
    int mis=-1;
    for( int i=1;i<=n; i++) {
        int count=0;
        for( int j=0;j<n;j++) {

            if(nums[j]==i) {
                count++;
            }
        }
        if(count==2) rep=i;
        if(count==0) mis=i;

        if(rep!=-1 && mis!=-1) {
            break;
        }
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

    vector<int> res= Rep_Missing_Number_brute(nums);
    for(auto it: res) {
        cout <<it << " ";
    }
}