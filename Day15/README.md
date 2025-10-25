142. Linked List Cycle II
Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.

Do not modify the linked list.

 

Example 1:
<img width="562" height="187" alt="image" src="https://github.com/user-attachments/assets/f7d6017f-412f-4605-80ec-42db5948be87" />
Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1
Explanation: There is a cycle in the linked list, where tail connects to the second node.
Example 2:
<img width="265" height="140" alt="image" src="https://github.com/user-attachments/assets/23e6cf14-137f-4be6-afaf-e5910be8414b" />
Input: head = [1,2], pos = 0
Output: tail connects to node index 0
Explanation: There is a cycle in the linked list, where tail connects to the first node.
Example 3:
<img width="101" height="93" alt="image" src="https://github.com/user-attachments/assets/7939c485-d8fc-4825-860e-227072abbdee" />
Input: head = [1], pos = -1
Output: no cycle
Explanation: There is no cycle in the linked list.
 

Constraints:

The number of the nodes in the list is in the range [0, 104].
-105 <= Node.val <= 105
pos is -1 or a valid index in the linked-list.
