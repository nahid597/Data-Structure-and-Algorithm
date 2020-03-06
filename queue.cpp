#include<iostream>

using namespace std;

#define size_max 3

struct queue
{
    int data[size_max + 1];
    int head, tail;
};

void enqueue(struct queue *que, int item)
{
    if(que->head == (que->tail+1) % (size_max + 1))
    {
        cout << "queue is full" << endl;
        return ;
    }

    que->data[que->tail] = item;
    que->tail = (que->tail+1)  % (size_max + 1);
}

int dequeue(struct queue *que)
{
    if(que->tail == que->head)
    {
        cout << "queue is empty" << endl;
        return -1;
    }

    int item;
    item = que->data[que->head];
    que->head = (que->head + 1) % (size_max + 1);

    return item;

}


int main()
{
    struct queue arg;

    arg.head = 0;
    arg.tail = 0;

    enqueue(&arg, 1);
    enqueue(&arg, 2);
    enqueue(&arg, 3);
    enqueue(&arg, 4);

    cout << "after pull data" << endl;

   int item;
   item = dequeue(&arg);

   cout << item << endl;
   item = dequeue(&arg);

   cout << item << endl;

   item = dequeue(&arg);

   cout << item << endl;



    return 0;
}
