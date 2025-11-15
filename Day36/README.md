572. Subtree of Another Tree
Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. The tree tree could also be considered as a subtree of itself.

 

Example 1:
<img width="671" height="514" alt="image" src="https://github.com/user-attachments/assets/c1d3e685-b0d8-4478-a7ae-65b6ec68674e" />
Input: root = [3,4,5,1,2], subRoot = [4,1,2]
Output: true
Example 2:
<img width="634" height="583" alt="image" src="https://github.com/user-attachments/assets/05a188e6-ae14-4765-a86c-560a66d83065" />
Input: root = [3,4,5,1,2,null,null,null,null,0], subRoot = [4,1,2]
Output: false
 

Constraints:

The number of nodes in the root tree is in the range [1, 2000].
The number of nodes in the subRoot tree is in the range [1, 1000].
-104 <= root.val <= 104
-104 <= subRoot.val <= 104
