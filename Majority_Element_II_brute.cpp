#include<iostream>
#include<vector>
#include<list>
using namespace std;
list<int> Majority_Element_II_brute( vector<int> & nums) {

    int n= nums.size();
    list<int> ls;
    for( int i=0;i<n; i++) {
        
        if(ls.size()==0 || ls.front()!=nums[i]) {        // Vector using indexing but, list is not indexing;

            int count=0;
            for( int j=0;j<n; j++) {
                if(nums[i]==nums[j]) {
                    count++;
                }
            }
            if(count > (n/3)) {
                ls.push_back(nums[i]);
            }
        }
        if(ls.size()==2) break;
        
    }
    return ls;
}
int main() {

    int n;
    cin >> n;
    vector<int> nums(n);

    for( int i=0;i<n; i++) {
        cin >> nums[i];
    }
    list<int> ans = Majority_Element_II_brute(nums);
    for( auto it : ans) {
        cout << it << " ";
    }
}
