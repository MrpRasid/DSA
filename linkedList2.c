#include<stdio.h>
#include<stdlib.h>
struct point{
    int data;
    struct point *link;
};
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
    return 0;
}