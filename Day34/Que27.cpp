class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer for the next valid element position
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // Keep non-val elements
                k++;
            }
        }
        return k; // Return count of valid elements
    }
};
