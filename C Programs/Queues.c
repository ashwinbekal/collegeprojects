#include<stdio.h>
#define N 20
int queue[N];
int front=-1,rear=-1;
void enqueue(int x){
    if(rear>N-1){
        printf("Queue is full.");
    }
    if(front==-1&&rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else if(front==0){
        rear++;
        queue[rear]=x;
    }
    else if(front!=-1&&rear!=-1){
        rear++;
        queue[rear]=x;
    }
}
void display(){
    if(front==-1&&rear==-1){
        printf("Queue is empty.\n");
    }
    else if(front==0){
        printf("Displayed Queue is:\n");
        for(int i=front;i<=rear;i++){
            printf("%d\t",queue[i]);
        }printf("\n");
    }
    else if(front!=-1&&rear!=-1){
        printf("Displayed Queue is:\n");
        for(int i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
        printf("\n");
    }
}
void dequeue(int x){
    if(front==-1&&rear==-1){
        printf("Queue is empty.\n");
    }
    else if(front==rear){
        printf("The element deleted is %d\n",queue[front]);
        front=-1;
        rear=-1;
    }
    else if(front!=-1&&rear!=-1){
        printf("The element deleted is %d\n",queue[front]);
        front=front+1;
    }
}
void main(){
    int x,d;
    while(1){
        printf("Enter correct choice 1 and 2 and 3:\n");
        scanf("%d",&d);
        switch(d){
            case 1:
            printf("Enter the member:\n");
            scanf("%d",&x);
            enqueue(x);break;
            case 2:display(); break;
            case 3:dequeue(x);break;
            default:printf("Wrong choice\n");
        }
    }
}
