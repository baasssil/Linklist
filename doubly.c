#include<stdio.h>
#include<stdlib.h>
void main()
{
 struct node
 {
 struct node *prev;
 int data;
 struct node *next;
 };
 int ch,entry;
 struct node *head=NULL,*pos=NULL,*tail=NULL;
 while(1)
 {
 printf("'\n\t\tMENU\n1.APPEND\n2.DISPLAYFORWARD)\n3.DISPLAY(REVERSE)\n4.EXIT\n\n(ENTER CHOICE)");
 scanf("%d",&ch);
 switch(ch)
 {
  	case 1:
  	{
  	printf("Enter Data: ");
  	scanf("%d",&entry);
  	if(head==NULL)
  		{
  			head=(struct node*)malloc(sizeof(struct node));
  			head->prev=NULL;
  			head->data=entry;
  			head->next=NULL;
  			pos=head;
  			tail=head;
  			}
       
       else
             {tail->next=(struct node*)malloc(sizeof(struct node));
        	tail->next->prev=tail;
        	tail->next->data=entry;
        	tail->next->next=NULL;
        	tail=tail->next;}
        break;
        }
 	case 2:
 	{
 	 pos=head;
 	 printf("\nforward\n");
 	 while (pos!=NULL)
 	 {
 	  printf("\t%d",pos->data);
 	  pos=pos->next;}
 	  break;
 	 }
       
 	 case 3:
 	 {
 	 pos=tail;
 	 printf("reverse display");
 	 while(pos!=NULL)
 	 {printf("\t%d",pos->data);
 	 pos=pos->prev;}
 	 break;
 	 }
 	 case 4:
 	 {
 	  printf("\n goodbe");
  	  exit(0);
  	  }
  	 }
  	 }
  	 }
 	    
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
 	 
