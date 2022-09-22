// Print the elements of a linked list - HackerRank
// Link to Problem:- https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem

void printLinkedList(SinglyLinkedListNode* head) {
    while(head != NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}
