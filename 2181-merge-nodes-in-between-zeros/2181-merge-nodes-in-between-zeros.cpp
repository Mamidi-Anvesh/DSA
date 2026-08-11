/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* head1 = nullptr;
        ListNode* tail1 = nullptr;
        int sum=0;
        while(temp!=NULL){
            if(temp->val==0){
                ListNode* newNode = new ListNode(sum);
                if(head1==NULL){
                    head1 = newNode;
                    tail1 = newNode;
                }
                else{
                    tail1->next = newNode;
                    tail1 = newNode;
                }
                sum=0;
            }
            sum+=temp->val;
            temp = temp->next;
        }
        return head1;
    }
};