class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int soma = 0;
        vector<int> runningSum(nums.size());
        for(int i=0; i<nums.size(); i++){
            soma += nums[i];
            runningSum[i] = soma;
        }
        
        return runningSum;
    }
};
