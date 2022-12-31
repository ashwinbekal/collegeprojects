#include<stdio.h>
#include<stdlib.h>
int count;

struct node{
    int roll;
    char name[20];
    float marks;
    struct node *llink;
    struct node *rlink;
};

typedef struct node *NODE;
NODE first=NULL;

NODE getnode(){
    NODE x;
    x=(NODE)malloc(sizeof(struct node));
    return x;
}

NODE createnode(){
    NODE temp;
    temp=getnode();
    printf("Enter the details of the student (Roll number, Name and Marks):\n");
    scanf("%d%s%f",&(temp->roll),temp->name,&(temp->marks));
    temp->llink=NULL;
    temp->rlink=NULL;
    count++;
    return temp;
}

void disp_del(NODE temp){
    printf("The following details is deleted:\n");
    printf("USN || Name || Marks\n");
    printf("----------------------\n");
    printf("%d || %s || %.2f\n",temp->roll,temp->name,temp->marks);
    count--;
}

void insf(){
    NODE temp;
    temp=createnode();
    if(first==NULL){
        first=temp;
    }
    else{
        temp->rlink=first;
        first->llink=temp;
        first=temp;
    }
}

void delf(){
    NODE temp;
    if(first==NULL){
        printf("List is empty\n");
    }
    else if(first->rlink==NULL){
        disp_del(first);
        free(first);
        first=NULL;
    }
    else{
        temp=first;
        disp_del(temp);
        first=first->rlink;
        first->llink=NULL;
        temp->rlink=NULL;
        free(temp);
        temp=NULL;
    }
}

void insr(){
    NODE temp,cur;
    temp=createnode();
    if (first==NULL)
    {
        first=temp;
    }
    else{
        cur=first;
        while(cur->rlink!=NULL){
            cur=cur->rlink;
        }
        cur->rlink=temp;
        temp->llink=cur;
    }
}

void delr(){
    NODE cur;
    if(first==NULL){
        printf("List is empty\n");
    }
    else if(first->rlink==NULL){
        disp_del(first);
        free(first);
        first=NULL;
    }
    else{
        cur=first;
        while(cur->rlink!=NULL){
            cur=cur->rlink;
        }
        disp_del(cur);
        cur->llink->rlink=NULL;
        cur->llink=NULL;
        free(cur);
        cur=NULL;
    }
}

void disp(){
    NODE cur;
    if(first==NULL){
        printf("List is empty\n");
    }
    else{
        cur=first;
        printf("The student details are:\n");
        printf("USN || Name || Marks\n");
        printf("----------------------\n");
        while(cur!=NULL){
            printf("%d || %s || %.2f\n",cur->roll,cur->name,cur->marks);
            cur=cur->rlink;
        }
        printf("----------------------\n");
        printf("Number of nodes: %d\n",count);
    }
}

void main(){
    int choice,i,n;
    while(1){
        printf("-----------MENU-----------\n");
        printf("1.Create a DLL of N Students:\n");
        printf("2.Display Status and count of Nodes:\n");
        printf("3.Insert data at the rear:\n");
        printf("4.Delete data from the rear:\n");
        printf("5.Insert data at the front:\n");
        printf("6.Delete data from the front:\n");
        printf("7.Exit:\n");
        printf("----------------------\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:printf("Enter the number of students:\n");
        scanf("%d",&n);
        for (int i = 0; i < n; i++)
        {
            insr();
        }
        break;
        case 2:disp();
        break;
        case 3:insr();
        break;
        case 4:delr();
        break;
        case 5:insf();
        break;
        case 6:delf();
        break;
        case 7:
        return;break;
        default: printf("Invalid choice\n");return;
        }
    }
}
