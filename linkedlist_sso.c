#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *front=NULL,*rear=NULL,*temp;

void create()
{
    node *newnode;
    newnode=(node*)malloc(sizeof(node));
    printf("Enter node value");
    scanf("%d",&newnode->data);
    newnode->next=NULL;


    if(rear==NULL)
    {
        front=rear=newnode;
    }

    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void display()
{
   // temp=front;

    if(front==NULL)
    {
        printf("Empty");
    }
        else
        {
           // for(temp=front;temp!=rear;temp=temp->next)
            //{
              //  printf("%d",temp->data);
               // printf("%d",temp->data);
            //}
            //printf("%d",temp->data);

            for(temp=front;temp!=rear;temp=temp->next)
            {
                printf("%d \n",temp->data);
            }
             //printf("%d",temp->data);

        }
    }


int main()
{
    int n,i;
    printf("Enter size of LL");
    scanf("%d",&n);

    printf("Enter values to LL");
    for(i=0;i<n;i++)
    {
        printf("\n");
        create();
    }

    display();


}
