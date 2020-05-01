/*
Mohammed Mudassir Mohiuddin
*/
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        if(head->next == NULL) return head; 
        ListNode* temp = head;
        int count =0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        temp = head;
       // count+=1;
        count/=2;
        while(count--){
            temp=temp->next;
        }
        return temp;
    }
};