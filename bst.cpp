#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    struct node *left, *right;
};

struct node *newNode(int value)
{
    struct node *item = (struct node*)malloc(sizeof(struct node));

    item->key = value;
    item->left = item->right = NULL;

    return item;

}

struct node* Insert(struct node *root, int key)
{
    if(root == NULL)
    {
        return newNode(key);
    }

    if(key < root->key)
    {
        root->left = Insert(root->left, key);
    }

    else if(key > root->key )
    {
        root->right = Insert(root->right, key);
    }

    return root;
}

// inorder traversal

void inOrder(struct node *root)
{
    if(root != NULL)
    {
       inOrder(root->left);

       printf("%d ", root->key);

       inOrder(root->right);
    }
}



int main()
{

    struct node *root = NULL;

    root = Insert(root, 50);
    Insert(root, 30);
    Insert(root, 20);
    Insert(root, 40);
    Insert(root, 70);
    Insert(root, 60);
    Insert(root, 80);

    inOrder(root);

    return 0;
}

