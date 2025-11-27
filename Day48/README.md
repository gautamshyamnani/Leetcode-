98. Validate Binary Search Tree
Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys strictly less than the node's key.
The right subtree of a node contains only nodes with keys strictly greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 

Example 1:
<img width="380" height="232" alt="image" src="https://github.com/user-attachments/assets/25181908-385a-46a8-b700-1f9ef899c6b9" />
Input: root = [2,1,3]
Output: true
Example 2:
<img width="532" height="374" alt="image" src="https://github.com/user-attachments/assets/ed6fb75e-b31f-4547-9ffa-3d3d41678aa3" />
Input: root = [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.
 

Constraints:

The number of nodes in the tree is in the range [1, 104].
-231 <= Node.val <= 231 - 1
