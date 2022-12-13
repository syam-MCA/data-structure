#include<stdio.h>
#include<stdlib.h>
 void push();
 void pop();
 void printlist();
struct node
{ 
  int data;
  struct node *next;
};
  struct node *top;
  
void main()
{
 int opt;
 do
  {
    printf("enter you option\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
    scanf("%d",&opt);
    switch(opt)
  {
    case 1:push();
           break;
    case 2:pop();
           break;
    case 3:printlist();
           break;
    default:
            printf("not valid\n");
  } 
  }while(opt!=4);
}

void push()
{
 struct node *new=NULL;
 new=(struct node*)malloc(sizeof (struct node));
 printf("enter the data to be pushed\n");
 scanf("%d",&new->data);
 new->next=top;
 top=new;
}
 
void pop()
{
 struct node *temp;
 temp=top;
 if (top==NULL)
    printf("Stack underflow\n");
 else
   {
    printf("the item to be poped\n%d",top->data);
    
    top=top->next;
    free(temp);
    }
}
 
void printlist()
{
 struct node *ptr;
 ptr=top;
 if(top==NULL)
    printf("No List\n");
 else
    {
    while(ptr!=NULL)
     {
      printf("The list is %d\n",ptr->data);
      ptr=ptr->next;
     }
    }
}
    
    

























  
