#include<stdio.h>
#include<stdlib.h>
struct point{
    int data;
    struct point *link;
};
struct point* node_at_end(struct point *ptr,int data){
    struct point* temp =malloc(sizeof(struct point));
    temp->data=data;
    temp->link=NULL;

    ptr->link=temp;
    return temp;
}
int main(){
    struct point *head =malloc(sizeof(struct point));
    head->data=23;
    head->link=NULL;

    struct point *ptr=head;

    ptr=node_at_end(ptr,78);
    ptr=node_at_end(ptr,9);
    ptr=node_at_end(ptr,45);
    
    ptr= head;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
}
