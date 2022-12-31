#include<stdio.h>
#include<stdlib.h>
void insert_rear();
void delete_front();
void display();
void display_deleted();
struct node{
    int num;
    struct node *link;
};
typedef struct node *NODE;
NODE front=NULL;
NODE rear=NULL;
NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}
NODE create_node(){
    NODE temp;
    temp=getnode();
    printf("Enter a number:\t");
    scanf("%d",&(temp->num));
    temp->link=NULL;
    return temp;
}
void insert_rear(){
    NODE temp;
    temp=create_node();
    if(front==NULL&&rear==NULL){
        front=temp;
        rear=temp;
        display();
    }
    else if(front!=NULL&&rear!=NULL){
        rear->link=temp;
        rear=temp;
        display();
    }
}
void delete_front(){
    NODE temp;
    if(front==NULL&&rear==NULL){
        printf("Queue is empty\n");
    }
    else if(front==rear&&front!=NULL&&rear!=NULL){
        display_deleted(front);
        free(front);
        front=NULL;
        rear=NULL;
        display();
    }
    else{
        display_deleted(front);
        temp=front->link;
        free(front);
        front=temp;
        display();
    }
}
void display_deleted(NODE temp){
    printf("The element deleted is:\t");
    printf("%d\n",temp->num);
}
void display(){
    NODE temp;
    if(front==NULL&&rear==NULL){
        printf("Queue is empty\n");
    }
    else{
        printf("The queue elements are:\t");
        temp=front;
        while(temp->link!=NULL){
            printf("%d\t",temp->num);
            temp=temp->link;
        }
        printf("%d\n",temp->num);
    }
}
void main(){
    int choice;
    while(1){
        printf("===============================================\n");
        printf("Queue representation using Linked List\n");
        printf("1 to Enqueue, 2 to Dequeue and 3 to Display\n");
        printf("===============================================\n");
        printf("Enter you choice:\t");
        scanf("%d",&choice);
        switch(choice){
            case 1:insert_rear();break;
            case 2:delete_front();break;
            case 3:display();break;
            default:printf("Enter the correct choice\n");
        }
    }

}
