// Insert a node at the tail of a Linked list - HackerRank
// Link to Problem:- https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem

/*
* For the reference:
* SinglyLinkedListNode{
*     int data;
*     SinglyLinkedListNode* next;
* };
*/

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data){
    SinglyLinkedListNode* p = head;
    SinglyLinkedListNode* new_node = new SinglyLinkedListNode(data);
    if(head == NULL){
        head = new_node;
    }else{
        while(p->next != NULL){
            p = p->next;
        }
        p->next = new_node;
    }
    return head;
}
