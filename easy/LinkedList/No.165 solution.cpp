    ListNode * mergeTwoLists(ListNode * l1, ListNode * l2) {
        // write your code here
        // first consider corner case
        if(!l1 && !l2){
            return NULL;// if two list is empty
        }
        if(!l1) return l2;// if one of the lists is empty
        if(!l2) return l1;
        ListNode *dummy = new ListNode(-1);
        ListNode *pointer = dummy;// set pointers to the result list and two input lists
        ListNode *temp1 = l1;
        ListNode *temp2 = l2;
        while(temp1 && temp2){// if two list is valid
            if(temp1->val > temp2->val){
               // ListNode *temp = new ListNode(temp2->val);
                pointer->next = temp2;// change result pointer to the node temp2 point to
                pointer = temp2;
                temp2 = temp2->next;
            }else{
               // ListNode *temp = new ListNode(temp1->val);// change result pointer to the node temp1 point to
                pointer->next = temp1;
                pointer = temp1;
                temp1 = temp1->next;
            }
        }
       if(temp1){// if temp 1 still valid change pointer to it
            // ListNode *temp = new ListNode(temp1->val);
            // pointer->next = temp;
            // pointer = temp;
            // temp1 = temp1->next;
            pointer->next = temp1;
        }
        if(temp2){// if temp 2 still valid change pointer to it
            // ListNode *temp = new ListNode(temp2->val);
            // pointer->next = temp;
            // pointer = temp;
            // temp2 = temp2->next;
            pointer->next = temp2;
        }
        return dummy->next;
    }
