#include<iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

struct Node *create_node(int data, struct Node *next)
{
   struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));

   if(new_node == NULL)
   {
       printf("Can not create a node\n");
       exit(1);
   }

   new_node->data = data;
   new_node->next = next;

   return new_node;
}

struct Node *prepand(struct Node *head, int data)
{
    struct Node *new_node = create_node(data, head);

    return new_node;
}



struct Node *append(struct Node *head, int data)
{
    struct Node *new_node = create_node(data, NULL);

    if(head == NULL)
    {
        return new_node;
    }

    struct Node *current_node = head;

    while(current_node != NULL)
    {
        if(current_node->next == NULL)
          break;
        current_node = current_node->next;
         //cout << "current " << current_node->data << endl;

        // cout << "naid" << endl;
    }

    current_node->next = new_node;


    return head;

}

void inserAfterNode(struct Node *node, int data)
{
    //struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *new_node = create_node(data, node->next);

    //new_node->data = data;
    //new_node->next = node->next;

    node->next = new_node;
}

void printNode(struct Node *head)
{
    struct Node *current_node = head;
    while(current_node != NULL)
    {
      cout << current_node->data <<" ";
      current_node = current_node->next;
    }

    cout << endl;
}



struct Node *delete_node(struct Node *head, struct Node *node)
{
    if(node == head)
    {
        head = node->next;
        free(node);
        return head;
    }

    struct Node *current_node = head;

    while(current_node != NULL)
    {
        if(current_node->next == node)
        {
            break;
        }

        current_node = current_node->next;
    }

    if(current_node == NULL)
      return head;

    current_node->next = node->next;
    free(node);

    return head;
}




int main()
{
    struct Node *node;
    struct Node *head = NULL;

    node = create_node(30, head);
    head = node;
    //cout << head->next << endl;

    struct Node *pr ;
     pr = prepand(head, 20);
    head = pr;
    pr = prepand(head, 10);

    head = pr;



    inserAfterNode(head->next, 500);

    pr = append(head, 100);

    head = pr;

    pr = append(head, 300);
      head = pr;

    //cout << pr->next << endl;

      printNode(head);

     pr = delete_node(head, head);
     head = pr;
      printNode(head);


    return 0;
}
