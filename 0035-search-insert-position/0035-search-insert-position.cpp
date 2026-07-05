class Solution {
public:
    int searchInsert(vector<int>& nums, int x) {
         int st=0,end=nums.size()-1;
        int ans=nums.size();
        while(st<=end){
            int mid=(st+end)/2;
            if(nums[mid]>=x){
                ans=mid;
                end=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};