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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * dummy=new ListNode(0);
        ListNode *ans=dummy;
        ListNode *l1=list1,*l2=list2;
        while(l1 && l2){
            // cout<<"l1-> "<<l1->val<<" l2-> "<<l2->val<<" ";
            if(l1 && l2 && l1->val<=l2->val){
                dummy->next=l1;
                l1=l1->next;
            }else if(l1 && l2 && l1->val>l2->val){
                dummy->next=l2;
                l2=l2->next;
            }
            dummy=dummy->next;

            
        }
		//to handle last node when one list goes to null
        if(l1 && !l2){
                dummy->next=l1;
                dummy=dummy->next;
            }
            else if(!l1 && l2){
                dummy->next=l2;
                dummy=dummy->next;
                
            }
        return ans->next;
        
        
    }
};
