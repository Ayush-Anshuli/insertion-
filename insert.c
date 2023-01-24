#include<stdio.h>
#include<stdlib.h>
void insert(int);
struct node
{
    int data;
    struct node*next;
};

struct node*head;
void main(){
    int choice, item;
    do{
        printf("enter the insert item");
        scanf("%d",&item);
        insert(item);
        printf("enter the 0 toinsert more");
        scanf("%d",&choice);
    }while(choice==0);
}
void insert(int item){
    struct node*ptr=(struct node*)malloc(sizeof(struct node*));
    if(ptr==NULL){
        printf("overflow");
    }
    else{
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("NODE INSERTED");
    }
}
