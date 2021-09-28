//stack on linked list

#include<stdio.h>

void push();
void pop();
void disp();

struct node
{
    int data;
    struct node *ptr;
};

struct node *head;
int choice;

int main()
{
    head = NULL;
    printf("Press 1 for insertion \n");
    printf("Press 2 for deletion \n");
    printf("Press 3 for display \n");
    printf("Press 4 for exit \n");
    do
    {
        printf("Enter your choice \n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            {
                push();break;
            }
        case 2:
            {
                pop();break;
            }
        case 3:
            {
                disp();break;
            }
        case 4:
            {
                printf("Exit Point \n");
                break;
            }
        default:
            {
                printf("Please Enter Valid option \n");
            }
        }
    }while(choice!=4);
}

void push()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node)); //creating a node

    printf("Enter element \n");
    scanf("%d",&temp->data);
    temp->ptr = NULL;

    if(head == NULL)
        head = temp;
    else
    {
        temp->ptr = head;
        head = temp;
    }
}


void pop()
{
    struct node *del;

    if(head==NULL)
        printf("EMPTY STACK \n");
    else
    {
        del = head;
        head = head->ptr;
        free(del);
    }

}

void disp()
{
    struct node *temp;
    temp = head;

    if(head == NULL)
    {
        printf("EMPTY STACK \n");

    }
    else
    {
          while(temp != NULL)
        {
            printf("%d  ",temp->data);
            temp = temp->ptr;
        }
    }
}
