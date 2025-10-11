class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int closestsum=nums[1]+nums[2]+nums[3];
        for(int k=0;k<=n-3;k++){
            int i=k+1,j=n-1;
            while(i<j){
            int sum=nums[k]+nums[i]+nums[j];
            if(abs(target-sum)<abs(target-closestsum)){
                closestsum=sum;
            }

            if(sum<target){
                i++;
            }else if(sum>target){
                j--;
            }else{
                return sum;
            }
        }
    }
        return closestsum;
    }
};
