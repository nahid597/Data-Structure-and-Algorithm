#include<iostream>

using namespace std;

class Node{

public:
    int data;
    Node *prevs;
    Node *next;

};

Node *create_node(Node *prevs, int data, Node *next)
{
   Node *new_node = new Node();

    if(new_node == NULL)
    {
        cout << "Node can not create" << endl;
        exit(1);
    }

    new_node->prevs = prevs;
    new_node->data = data;
    new_node->next = next;

    return new_node;
}


void prepand(Node **head, int data)
{
   Node* new_node = create_node(NULL, data, *head);

   if((*head) == NULL)
   {
      (*head) = new_node;
      return;
   }

   (*head)->prevs = new_node;
   (*head) = new_node;
}

void append(Node **head, int data)
{
   Node *new_node = create_node(NULL,data,NULL);

   Node *current_node = *head;

   if((*head) == NULL)
   {
      (*head) = new_node;
      return;
   }

   while(current_node->next != NULL)
   {
      current_node = current_node->next;
   }

   current_node->next = new_node;
   new_node->prevs = current_node;

   return;

}

void afterinsert(Node *prev_node, int data)
{
    Node *new_node = create_node(NULL, data, NULL);

    new_node->next = prev_node->next;
    new_node->prevs = prev_node;
    prev_node->next = new_node;

    if(new_node->next != NULL)
    {
      new_node->next->prevs = new_node;
    }
}

void delete_node(Node **head, Node *del_node)
{
    if((*head) == del_node)
    {
       *head = del_node->next;
       free(del_node);
       return;
    }

    // delete last node..
    if(del_node->next == NULL)
    {
        del_node->prevs->next = NULL;
        free(del_node);
        return;
    }

    // delete any node

    del_node->prevs->next = del_node->next;
    del_node->next->prevs = del_node->prevs;

    free(del_node);
    return ;
}

void printlist(Node *head)
{
   Node *last;

   cout << "forword traverse " << endl;

   Node *current_node = head;

   while(current_node != NULL)
   {
       cout << current_node->data << " ";
       last = current_node;
       current_node = current_node->next;
   }

    cout << "\nBackword traverse " << endl;

    while(last != NULL)
   {
       cout << last->data << " ";
       last = last->prevs;
   }
}




int main()
{

   Node *node;
   Node *head = NULL;

   node = create_node(NULL, 10, NULL);

   head = node;


   append(&head, 5);
   //prepand(&head, 20);
   //prepand(&head, 30);

   //afterinsert(head->next->next, 100);

   cout << "before delete ";
     printlist(head);
     cout << endl;
   delete_node(&head, head->next);

  cout << "after delete ";
     printlist(head);
     cout << endl;



   //cout << node->data << endl;

    return 0;
}
