//only function
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)   
    {
       int n;
       n=nums.size(); 
       unordered_map<int, int> NumMap;
       for(int i=0;i<n;i++){
        NumMap[nums[i]]=i;
       }
       for(int i=0;i<n-1;i++){
        int k=target-nums[i];
        if(NumMap.count(k)!=0&& NumMap[k]!=i){
            return{i,NumMap[k]};
        }
       }
       return{};
    }
};
