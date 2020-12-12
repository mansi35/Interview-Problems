class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int, vector<int>, greater<int>> minheap;
        for(ListNode *head:lists){
            while(head!=NULL){
                minheap.push(head->val);
                head = head->next;
            }
        }
        ListNode *temp = new ListNode(-1);
        ListNode *head = temp;
        while(!minheap.empty()){
            temp->next = new ListNode(minheap.top());
            minheap.pop();
            temp = temp->next;
        }
        return head->next;
    }
};
