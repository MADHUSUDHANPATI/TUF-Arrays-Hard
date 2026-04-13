//With extra space 
#include<iostream>
#include<iostream>
#include<vector>
using namespace std;
vector<int> Merge_sorted_Arrays(vector<int> &nums1, vector<int> &nums2) {

    int m = nums1.size();
    int n = nums2.size();

    vector<int> final;

    int left=0;
    int right=0;

    while(left<m && right< n) {

        if(nums1[left] <= nums2[right]) {
            final.push_back(nums1[left]);
            left++;
        }
        else {
            final.push_back(nums2[right]);
            right++;
        }
    }

    while(left < m) {
        final.push_back(nums1[left]);
        left++; 
    }

    while(right<n) {
        final.push_back(nums2[right]);
        right++;
    }

    return final;
}
int main() {
    int m, n;
    cin >> m >> n;

    vector<int> nums1(m);
    vector<int> nums2(n);

    for( int i=0;i<m; i++) {
        cin >> nums1[i];
    }
    for( int i=0;i<n; i++) {
        cin >> nums2[i];
    }

    vector<int> result = Merge_sorted_Arrays(nums1, nums2);

    for( auto it : result) {
        cout << it<< " ";
    }

}