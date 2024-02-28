// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* curr = head;
//         ListNode* prev = nullptr;

//         while(curr != nullptr){
//             ListNode*forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
//             head = prev;
//         }
         
//          return head;
        
//     }
// };