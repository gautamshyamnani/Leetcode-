141. Linked List Cycle
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

 

Example 1:
<img width="380" height="129" alt="image" src="https://github.com/user-attachments/assets/24fd9896-1ebc-4ad1-b309-2f43671877e8" />
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).
Example 2:
<img width="177" height="95" alt="image" src="https://github.com/user-attachments/assets/1b14d9d7-3fc3-41bb-9bcc-76d9e92c73be" />
Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.
Example 3:
<img width="74" height="70" alt="image" src="https://github.com/user-attachments/assets/819631e3-ea1b-4690-a1e2-81ec57738b10" />
Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
 

Constraints:

The number of the nodes in the list is in the range [0, 104].
-105 <= Node.val <= 105
pos is -1 or a valid index in the linked-list.
