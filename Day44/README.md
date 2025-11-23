662. Maximum Width of Binary Tree
Given the root of a binary tree, return the maximum width of the given tree.

The maximum width of a tree is the maximum width among all levels.

The width of one level is defined as the length between the end-nodes (the leftmost and rightmost non-null nodes), where the null nodes between the end-nodes that would be present in a complete binary tree extending down to that level are also counted into the length calculation.

It is guaranteed that the answer will in the range of a 32-bit signed integer.

 

Example 1:
<img width="454" height="377" alt="image" src="https://github.com/user-attachments/assets/e1d1fc94-5319-450d-8131-71ec30ce2901" />
Input: root = [1,3,2,5,3,null,9]
Output: 4
Explanation: The maximum width exists in the third level with length 4 (5,3,null,9).
Example 2:
<img width="557" height="532" alt="image" src="https://github.com/user-attachments/assets/d6962eb0-8762-482c-ae32-d8199523ccaf" />
Input: root = [1,3,2,5,null,null,9,6,null,7]
Output: 7
Explanation: The maximum width exists in the fourth level with length 7 (6,null,null,null,null,null,7).
Example 3:
<img width="369" height="376" alt="image" src="https://github.com/user-attachments/assets/579bacd1-c0f5-4f46-b984-df9ff44f48d1" />
Input: root = [1,3,2,5]
Output: 2
Explanation: The maximum width exists in the second level with length 2 (3,2).
 

Constraints:

The number of nodes in the tree is in the range [1, 3000].
-100 <= Node.val <= 100
