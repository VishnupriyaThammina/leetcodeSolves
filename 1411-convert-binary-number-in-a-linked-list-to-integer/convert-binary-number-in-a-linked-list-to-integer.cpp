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
    int getDecimalValue(ListNode* head) {
        int sum = 0;
        int count = 0;
        ListNode* a = head;
        while(a->next!=NULL){count++; a=a->next;}
        cout << count ;
        a = head;
        while(a!=NULL){
            int s = a->val*pow(2,count);
            count--;
            sum = s+sum;
            a=a->next;

        }
        return sum;
    }
};