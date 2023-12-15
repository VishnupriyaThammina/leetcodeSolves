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
    int pairSum(ListNode* head) {
        stack<ListNode*>st;
        int count = 0 ; ListNode* a = head;
        while(a!=NULL){count++;a =a->next;}
        int mid = count/2;a=head;
        while(mid!=0){
st.push(a);
a=a->next;
mid--;
        }
        int maxi = INT_MIN;
        while(a!=NULL){
            int sum = st.top()->val+a->val;
            maxi = max(sum,maxi);
            st.pop();
            a=a->next;
        }
        return maxi;
    }
};