// udemy videos
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *start;


void insert_at_the_begning()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of the node \n");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(start==NULL)
        start=temp; //first node
    else
    {
        temp->next=start;
        start=temp;
    }
}


void insert_at_the_end()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data of the node \n");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(start==NULL)
        start=temp; //first node
    else
    {
        struct node *k;
        k= start;

        while(k->next!=NULL)
            k=k->next;

        //printf("%d",k->data); //the 1st elemet of the list
        k->next =temp;

    }
}



void insert_at_a_particuclar_position()
{
    int pos,i;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the position at which you want to insert the node");
    scanf("%d",&pos);

    printf("Enter the data of the node \n");
    scanf("%d",&temp->data);
    temp->next=NULL;

    if(start==NULL)
        start=temp; //first node
    else
    {
        struct node *k;
        k= start;


        //problem as it inserts at 5th instead of 4th


        for(i=1;i<pos-1 && k!=NULL;i++)
            k=k->next;


        temp->next=k->next;
        k->next=temp;

    }
}



void disp()
{
    struct node *s;
    s = start;
    if(s == NULL)
        printf("EMPTY LIST \n");
    else
    {
        printf("The List is \n");
        while(s!=NULL)
        {
            printf("%d  ",s->data);
            s=s->next;
        }
    }
}

void main()
{
    start = NULL;
     int ch=0;
    while(ch<5)
    {
        printf(" \n Choose from the following! \n 1.Insert at the begining \n 2.Insert at the END  \n 3.Insert at a particular position \n 4.Display \n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:insert_at_the_begning();break;
            case 3:insert_at_a_particuclar_position();break;
            case 2:insert_at_the_end();break;
            case 4:disp();break;
        }
    }
}
