#include<stdio.h>
#include<stdlib.h>
void insert_front();
void delete_front();
void display();
void display_deleted();
struct node{
    int num;
    struct node *link;
};
typedef struct node *NODE;
NODE first=NULL;
NODE get_node(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}
NODE create_node(){
    NODE temp;
    temp=get_node();
    printf("Enter a number:\n");
    scanf("%d",&(temp->num));
    temp->link=NULL;
    return temp;
}
void insert_front(){
    NODE temp;
    temp=create_node();
    if(first==NULL){
        first=temp;
    }
    else{
        temp->link=first;
        first=temp;
    }
    display();
}
void delete_front(){
    NODE temp;
    if(first==NULL){
        printf("List is empty\n");
    }
    else if(first->link==NULL){
        display_deleted(first);
        free(first);
        first=NULL;
        display();
    }
    else{
        display_deleted(first);
        temp=first->link;
        free(first);
        first=temp;
        temp=NULL;
        display();
    }
}
void display(){
    NODE cur;
    if(first==NULL){
        printf("List is empty\n");
    }
    else{
        printf("The elements of the Stack are:\t");
        cur=first;
        while(cur->link!=NULL){
            printf("%d\t",cur->num);
            cur=cur->link;
        }
        printf("%d\t",cur->num);
    }
    printf("\n");
}
void display_deleted(NODE temp){
    printf("The element deleted is:\t");
    printf("%d\n",temp->num);
}
void main(){
    int choice;
    while(1){
        printf("================================================\n");
        printf("Program to implement Stacks using Linked Lists\n");
        printf("1 to insert, 2 to delete and 3 to display\n");
        printf("================================================");
        printf("\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        printf("\n");
        switch(choice){
            case 1: insert_front();break;
            case 2: delete_front();break;
            case 3: display();break;
            default: printf("Enter a correct choice\n");
        }
    }
}
