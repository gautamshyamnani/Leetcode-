108. Convert Sorted Array to Binary Search Tree
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.

 

Example 1:
<img width="382" height="280" alt="image" src="https://github.com/user-attachments/assets/2e4810be-459a-4f70-9471-db3c0bc872ec" />
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:
<img width="379" height="282" alt="image" src="https://github.com/user-attachments/assets/2afc8f76-5419-4e04-9acf-c64373dba8b1" />
Example 2:
Input: nums = [1,3]
Output: [3,1]
Explanation: [1,null,3] and [3,1] are both height-balanced BSTs.
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in a strictly increasing order.
