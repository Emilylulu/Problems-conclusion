    def addLists2(self, l1, l2):
        # write your code here
        string_1 = ''
        string_2 = ''
        while l1 != None:
            string_1 += str(l1.val)
            l1 = l1.next
        while l2 != None:
            string_2 += str(l2.val)
            l2 = l2.next
        num = int(string_1) + int(string_2)
        dummy = ListNode(-1)
        num = str(num)
        head = ListNode((num[0]))
        dummy.next = head
        for i in range(1,len((num))):
            node = ListNode(num[i])
            head.next = node
            head = node
        return dummy.next
