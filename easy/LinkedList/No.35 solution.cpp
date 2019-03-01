    ListNode * reverse(ListNode * head) {
        //write your code here
        //in place and one pass
        if(!head){
            return NULL; //corner case handle: if head is NULL 
        }
        if(head -> next == NULL){ //corner case: if list only has one element.
            return head;
        }
        ListNode *temp = head->next;
        ListNode *dummy = head; //use two pointer since change next pointer will break the "link"
        head->next = NULL;
        while(temp->next != NULL){ //pointer t to record temp->next, since change next pointer of temp will break the link between temp and next node.
            ListNode *t = temp->next;
            temp->next = dummy; //this is relink the previous break link.
            dummy = temp; //move pointer to next
            temp = t;
        }
        temp->next = dummy; //link the last node
        return temp;
    }
