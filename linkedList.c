#include<stdio.h>
#include<stdlib.h>
struct point{
    int data;
    struct point *link;
};
int main(){
    struct point *head=NULL;
    head =(struct point *)malloc(sizeof(struct point));

    head->data=8;
    head->link=NULL;
    printf("the value is: ");
    printf("%d",head->data);
    return 0;
}