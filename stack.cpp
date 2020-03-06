#include<bits/stdc++.h>

using namespace std;

#define max_size 1000

struct st{
    int top;
    int data[max_size];
};

void push(struct st *stack, int item)
{
    if(stack->top > max_size)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        stack->data[stack->top] = item;
        //cout << "push " << stack->data[stack->top] << endl;
        stack->top++;
    }

}

int pop(struct st *stack)
{
    int item;
    if(stack->top == 0)
    {
        cout << "stack is empty" << endl;
        return -1;
    }
    else
    {
        stack->top--;
        item = stack->data[stack->top];
       // cout << "pop " << stack->data[stack->top] << endl;

    }

    //cout<< "item " << item << endl;
    return item;
}

int top(struct st *stack)
{

}



int main()
{
    struct st arg;

    cout << "push data in stack" << endl;
    arg.top = -1;


    push(&arg, 1);
    push(&arg, 2);
    push(&arg, 3);

   // cout << arg.top << endl;

    int item;

    cout << "After pop " << endl;
    item = pop(&arg);
    cout << item << endl;
    item = pop(&arg);
     cout << item << endl;
     item = pop(&arg);
     cout << item << endl;
   // cout << "top" << arg.top << endl;


    return 0;
}
