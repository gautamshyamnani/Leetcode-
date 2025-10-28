25. Reverse Nodes in k-Group
Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

Example 1:
<img width="682" height="281" alt="image" src="https://github.com/user-attachments/assets/bc4ed8e3-3d11-47a5-959b-94d502b4d5b2" />
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
Example 2:
<img width="682" height="287" alt="image" src="https://github.com/user-attachments/assets/3f1ba5d2-9858-4042-b12d-68ae97ed642a" />
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
 

Constraints:

The number of nodes in the list is n.
1 <= k <= n <= 5000
0 <= Node.val <= 1000
