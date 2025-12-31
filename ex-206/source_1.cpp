//documentation
/*----------------------
nick: guhf
id: s100-y
exercise 206: reverse linklist
content: Given the head of a singly linked list,
  reverse the list, and return the reversed list.
------------------------*/

//pre-processor
#include <stdio.h>
#include <stdlib.h>


//definition
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode {
      int val;
      struct ListNode *next;
 };
struct ListNode* reverseList(struct ListNode* head);
void reverseList_2(struct ListNode** head_ref);
    
//mainfunction
int main(){
    // 1. Tạo thử node 1 (giá trị 1)
    struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n1->val = 1;
    
    // 2. Tạo thử node 2 (giá trị 2)
    struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    n2->val = 2;
    n1->next = n2;
    n2->next = NULL;

    printf("Original: 1 -> 2\n");

    // 3. Gọi hàm xử lý
    struct ListNode* result = reverseList(n1);

    // 4. In kết quả
    printf("Reversed: ");
    while (result != NULL) {
        printf("%d -> ", result->val);
        result = result->next;
    }
    printf("NULL\n");

    return 0;
}

//sub-program
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    while (curr != NULL) {
        struct ListNode *nextTemp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextTemp;
    }
    return prev;
}

void reverseList_2(struct ListNode** head_ref) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = *head_ref;
    struct ListNode *next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *head_ref = prev; // Cập nhật lại giá trị của head gốc
    return;
}