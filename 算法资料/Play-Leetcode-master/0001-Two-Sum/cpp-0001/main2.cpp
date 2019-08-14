/// Source : https://leetcode.com/problems/two-sum/description/
/// Author : liuyubobobo
/// Time   : 2017-11-15

#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>

using namespace std;

/// Two-Pass Hash Table
/// Time Complexity: O(n)
/// Space Complexity: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> record;
        for(int i = 0 ; i < nums.size() ; i ++)
            record[nums[i]] = i;

        for(int i = 0 ; i < nums.size() ; i ++){
            unordered_map<int,int>::iterator iter = record.find(target - nums[i]);
             // 找到了相加的值
            if(iter != record.end() && iter->second != i) // 保证这个值 不是最后的一个值 和当前的值不相等
                //iter->second;  获取value的值
                return {i, iter->second};
        }

        throw invalid_argument("the input has no solution");
    }
};


void print_vec(const vector<int>& vec){
    for(int e: vec)
        cout << e << " ";
    cout << endl;
}

int main() {

    vector<int> nums = {0,4,3,0};
    int target = 0;
    printVec(Solution().twoSum(nums, target));

    return 0;
}
