    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(0);
        if(!l1 && !l2){
            return dummy;
        }// three types of corner case.
        if(!l1) return l2;
        if(!l2) return l1;
        
        ListNode *temp1 = l1;// pointer for each list including result.
        ListNode *temp2 = l2;
        ListNode *temp = dummy;
        int carry = 0;

        while(true){
            if(temp1 != NULL){
                carry += temp1->val;// add all value to carry
                temp1 = temp1->next;
            }
            if(temp2 != NULL){
                carry += temp2->val;
                temp2 = temp2->next;
            }
            temp->val = carry % 10;// carry%10 is result node value
            carry = carry / 10;// carry/10 is true carry
            if(temp1 || temp2 || carry != 0){//if at least one list is not empty or carry has value
                ListNode*newtemp = new ListNode(0);// new a node initial 0, will assign value next iteration.
                temp->next = newtemp;
                temp = newtemp;
            }else{// if two list both NULL and carry is 0, break the loop.
                break;
            }
        }
        return dummy;  
    }
