100. Same Tree
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

 

Example 1:
<img width="783" height="239" alt="image" src="https://github.com/user-attachments/assets/ad6d251c-cdc9-4ed3-9524-63b35afbd566" />
Input: p = [1,2,3], q = [1,2,3]
Output: true
Example 2:
<img width="478" height="236" alt="image" src="https://github.com/user-attachments/assets/24860ba7-e06b-44d2-a54f-41d479ac19a4" />
Input: p = [1,2], q = [1,null,2]
Output: false
Example 3:
<img width="782" height="236" alt="image" src="https://github.com/user-attachments/assets/844905db-1990-4b20-8f51-ffb3831f98f7" />
Input: p = [1,2,1], q = [1,1,2]
Output: false
 

Constraints:

The number of nodes in both trees is in the range [0, 100].
-10^4 <= Node.val <= 10^4
