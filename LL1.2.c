#include<stdio.h>
#include<stdlib.h>
void main()
{
 struct node
 {
  int data;
  struct node *next;
 };
 struct node *head=NULL,*pos=NULL,*tail=NULL;
 int ch,entry,c,t,u;
 while(1)
 {
  printf("\n1.INSERT\n2.DISPLAY\n3.COUNT\n4.SEARCH\n5.EXIT");
  printf("\nEnter Your Choice ");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
  {
  printf("\nEnter Data");
  scanf("%d",&entry);
  if (head==NULL)
  	{
  	  head=(struct node*)malloc(sizeof(struct node));
  	  head->data=entry;
  	  pos=head;
  	  tail=head;
  	  }
  	  else
  	  {
  	  tail->next=(struct node*)malloc(sizeof(struct node));
  	  tail=tail->next;
  	  tail->data=entry;
  	  }
  	  break;
  	  }
  	 
  	   case 2:
  	   {
  	   pos=head;
  	   printf("\nELEMENTS ARE ");
  	   while(pos!=NULL)
  	   {
  	   printf("\t%d",pos->data);
  	   pos=pos->next;
  	   }
  	   break;
  	  }
  	  
  	  case 3:
  	  {
  	  c=0;
  	  pos=head;
  	  while (pos!=NULL);
  	  {
  	  c++;
  	  pos=pos -> next;
  	  }
  	  printf("number of elements in list is %d" ,c);
  	  
  	  break;
  	  }  
  	    case 4:
  	    {
  	     printf("enter the number to be searched");
  	     scanf("%d",&u);
  	     pos=head;
  	     t=0;
  	     while(pos!=NULL)
  	     {
  	     if (pos->data==u)
  	          {
  	          t=1;
  	          break;
  	          }
  	          pos=pos->next;
  	          }
  	          if (t==1)
  	               printf("The element is present");
  	          else
  	              printf("The element is absent");
  	          
  	                break;
  	     }   
  	    case 5:
  	  printf("\n goodbe");
  	  exit(0);
  	  }
  	 }
  }
 
