#include<stdio.h>
#include<stdlib.h>

// A linked list
struct Node{
int data;
struct Node *next;
}


/* Given a reference (pointer to pointer) to the head of a list
   and an int, inserts a new node on the front of the list. */
   void push(struct **head_ref,int new_data){
     struct Node* new_node= (struct Node*)malloc(sizeof(struct Node))
     new_node->data=new_data;
     new_node->next=(*head_ref);
     (*head_ref)=new_node;
   }
   /* Given a reference (pointer to pointer) to the head of a list
   and a key, deletes the first occurrence of key in linked list */
   void deleteNode(struct Node**head_ref,int key){
     //store head Node
     struct Node* temp =*head_ref,*prev;
     //if head node itself contain the node to deleted
     if (temp!==NULL && temp->data==key){
      *head_ref=temp->next;// change head
      free(temp);// free old head
      return;
     }
     // Search for the key to be deleted, keep track of the
   // previous node as we need to change 'prev->next'
   while (temp != NULL && temp->data != key)
   {
       prev = temp;
       temp = temp->next;
   }
   // If key was not present in linked list
      if (temp == NULL) return;

      // Unlink the node from linked list
      prev->next = temp->next;

      free(temp);  // Free memory 
   }
