//With  NO extra space 
// #include<bits/stdc++.h>
#include<iostream>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void Merge_sorted_Arrays(vector<int> &nums1, vector<int> &nums2) {

    int m = nums1.size();
    int n = nums2.size();
    int left = m-1;
    int right =0;

    while(left>=0 && right < n) {
        if(nums1[left] > nums2[right]) {
            swap(nums1[left], nums2[right]);
            left--;
            right++;
        }
        else {
            break;
        }
    }

    sort(nums1.begin(), nums1.begin()+m);   // sort(nums1.begin(), nums1.end()); same for both
    sort(nums2.begin(), nums2.begin()+n);

    for( auto it : nums1) {
        cout << it << " ";
    }

    for( auto it : nums2) {
        cout << it << " ";
    }


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

    Merge_sorted_Arrays(nums1, nums2);

}