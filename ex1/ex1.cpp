//g++ ex1.cpp -o ex1
#include<vector>
#include<map>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum1(vector<int>& nums, int target) {
        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            for(int j = i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    res.push_back(i);
                    res.push_back(j);
                    break;
                }  
            }
        }
        return res;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map<int,int> resMap;
        for(int i = 0; i<nums.size(); i++){
            int k = target - nums[i];
            if(resMap.find(k)==resMap.end()){
                resMap.insert({nums[i], i});
            }
            else{
                res.push_back(resMap[k]);
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};

int main(){
    Solution s = Solution();
    //test case 1 
    vector<int> t1{2,7,11,15};
    int target1 = 9;
    vector<int> res = s.twoSum(t1,target1);
    for (int e : res) cout << e << " ";
}