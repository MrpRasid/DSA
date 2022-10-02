#include<stdio.h>
#include<stdlib.h>
struct point{
    int data;
    struct point *link;
};
void print_data(struct point *head){
    if(head==NULL)
    printf("link list is empty");

    struct point *ptr =NULL;
    ptr =head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
   void add_at_end(struct point *head,int data){
    struct point *ptr, *temp;
    ptr=head;
    temp=(struct point*)malloc(sizeof(struct point));
    temp->data =data;
    temp->link =NULL;
    while(ptr->link!=NULL){
        ptr =ptr->link;   
    }
    ptr->link=temp;
   }

int main(){
    struct point *head =malloc(sizeof(struct point));
    head->data=5;
    head->link=NULL;

    struct point *current =malloc(sizeof(struct point));
    current->data=8;
    current->link=NULL;
    head->link=current;

    current=malloc(sizeof(struct point));
    current->data=27;
    current->link=NULL;
    head->link->link=current;
    add_at_end(head,45);
    print_data(head);
    return 0;
}
