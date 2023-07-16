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
class compare{
    public:
    bool operator()(ListNode* a,ListNode* b){
        return a->val> b-> val;
        
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode* ,vector<ListNode*> ,compare> minheap;
        int k = lists.size();
        if(k==0) return NULL;
        for(int i=0;i<k;i++){
            if(lists[i]!= NULL)
            minheap.push(lists[i]);
        }
        ListNode* head= NULL;
        ListNode* tail=NULL;
        while(!minheap.empty()){
            ListNode* tmp = minheap.top();
            minheap.pop();
            // check it is first element or not
            if(head== NULL){
                head= tmp;
                tail= tmp;
                if(tail-> next != NULL){
                    minheap.push(tail-> next);
                }
            }
            else{
                tail-> next= tmp;
                tail=tmp;
                 if(tail-> next != NULL){
                    minheap.push(tail-> next);
                }
            }
        }
        
        return head;
    }
};