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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
        {
            ListNode dummy(0); //dummy being a node at 0, it is at posiiton 0. dummy(0)
            ListNode* answer= &dummy;//references dummy
            
            while(list1 && list2){ //check while they exist
                if(list1->val <= list2->val){
                    answer->next=list1;
                    list1= list1->next;
                }else{
                    answer->next=list2;
                    list2=list2->next;
                }
                answer= answer->next;
            }
            answer-> next= list1 ? list1 : list2;
            
            return dummy.next; //being the head of right after a empty node ( neve null though)
            
                
            }
        };