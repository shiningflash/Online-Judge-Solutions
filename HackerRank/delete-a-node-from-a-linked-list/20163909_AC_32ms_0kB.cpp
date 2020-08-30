// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* cur = head;
    if (position == 0) return head->next;
    for (int i = 0; i < position-1; i++) cur = cur->next;
    cur->next = cur->next->next;
    return head;
}