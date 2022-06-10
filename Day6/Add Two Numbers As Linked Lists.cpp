#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node *addTwoNumbers(Node *head1, Node *head2)
{
    Node *head = NULL;
    Node *ptr = NULL;
    int carry = 0;
    while (head1 != NULL || head2 != NULL)
    {
        int sum = (head1 ? head1->data : 0) + (head2 ? head2->data : 0) + carry;
        //         cout << sum;
        carry = sum / 10;
        if (!head)
            head = new Node(sum % 10), ptr = head;
        else
            ptr->next = new Node(sum % 10), ptr = ptr->next;
        if (head1)
            head1 = head1->next;
        if (head2)
            head2 = head2->next;
    }
    if (carry > 0)
        ptr->next = new Node(carry);
    return head;
}