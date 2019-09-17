#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;

    struct node *next;
}*top=NULL;

void push(int t);
void pop();
void peek();
void main()
{ 
    
    int ch,t,d;
    do{
    printf("enter choice 1.push 2.pop 3.peek 4.exit");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("enter element to insert");
                scanf("%d",&t);
                push(t);break;
        case 2:
              pop();break;
       case 3:peek();break;
       //case 4:display();break;
       case 4:exit(0);
    }
    }while(ch!=4);
    
}
    void push(int t)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("stack overflow");
        
        }
        else
        {
            newnode->data=t;
            newnode->next=top;
            top=newnode;
        }
    }
    void pop()
    {
        struct node *temp=top;
        if(top==NULL)
        {
            printf("stack underflow");
        }
        else
        {
            printf("deleted element %d",temp->data);
            top=top->next;
            free(temp);
        }
    }
   void peek()
   {
     printf("%d",top->data);
   }
