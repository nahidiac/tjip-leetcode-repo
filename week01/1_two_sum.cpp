#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        int sz = nums.size();
        int remaining;
        for(int i = 0; i < sz; i++) {
            remaining = target-nums[i];
            if(seen.count(remaining)) {
                return {seen[remaining], i};
            }
            seen[nums[i]] = i;
        }

        return {};
    }
};

int main() {
    Solution s;

    vector<int> v {3, 2, 4};
    vector<int> ans = s.twoSum(v, 6);

    for(int x : ans) {
        cout << x << " ";
    }
    cout << '\n';
}
