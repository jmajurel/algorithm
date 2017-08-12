#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

struct node * create(int data);

struct node
{
  int data;
  struct node *next;
};

struct node *head;
struct node *current;

int main(void)
{
  create(5);
  return 0;
}

struct node * create(int data)
{
  struct node *newnode = NULL;
  newnode = malloc(sizeof(struct node));
  if (newnode == NULL)
  {
    printf("null pointer\n");
  }
  newnode->next = NULL;

  return newnode;
}
struct node * insert(struct node newnode,int index )
{
  if(head->next == NULL) //head
  {
    head->next = &newnode;
  } 
  else
  {
    int i = 0;
    current = head;
    while( current!=NULL)
    {
     if(i<index)
     {
       current = current->next; 
       i++;
     }
     else
     {
       newnode->next = current;

     }
    }
  }

}
void display(struct node *linkedlist)
{
  int i = 1;
  while(linkedlist != NULL)
  {
    printf("node n°%d - value: %d", i, linkedlist->data);
    linkedlist = linkedlist->next;
    i++;
  }
}
