/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        int len1 = 0, len2 = 0;

        while(temp1 != NULL){
            len1++;
            temp1 = temp1->next;
        }
        while(temp2 != NULL){
            len2++;
            temp2 = temp2->next;
        }
        temp1 = headA;
        temp2 = headB;
        for(int i = 0; i < len1 - len2; i++){
            if(len1 > len2){
                temp1 = temp1->next;
            }
        }
        for(int i = 0; i < len2-len1; i++){
            if(len2 > len1){
                temp2 = temp2->next;
            }
        }

        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2){
                return temp1;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
};