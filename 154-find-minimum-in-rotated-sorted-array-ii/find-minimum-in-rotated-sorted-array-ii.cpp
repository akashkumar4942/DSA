class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans=INT_MAX;
        while(low<high){
            int mid=low+(high-low)/2;
            if(nums[high]>nums[mid]){
               high=mid;
                
            }
             else if(nums[mid]>nums[high]){
                low=mid+1;
                
            }
            else{
                high--;
                
            }
        }
        return nums[low];
        
    }
};