class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums[0]==1){
            int count=1;
            int max_count=1;
            for(int i=1;i<nums.size();i++){
if(nums[i]==0){
    max_count=max(count,max_count);
    count=0;
}
else {
    count++;
}
            }
            max_count=max(max_count,count);
            return max_count;
        }
        else {
             int count=0;
            int max_count=0;
            for(int i=1;i<nums.size();i++){
if(nums[i]==0){
    max_count=max(count,max_count);
    count=0;
}
else {
    count++;
}
            }
            max_count=max(max_count,count);
            return max_count;
        }
    }
};
