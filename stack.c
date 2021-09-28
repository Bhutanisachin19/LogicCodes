//stack on array

#include<stdio.h>

void push(int arr[]);
void pop(int arr[]);
void disp(int arr[]);

int top=-1;
int size,value,choice;

int main()
{
    printf("Enter the size of array  ");
    scanf("%d",&size);

    int arr[size];
    int i=0;

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
                push(arr);break;
            }
        case 2:
            {
                pop(arr);break;
            }
        case 3:
            {
                disp(arr);break;
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

void push(int arr[])
{
    //insert
    if(top == size-1)
        printf("STACK IS FULL  \n");
    else
    {
     if(top<=-1)
        {
            top++;
            printf("Enter the element  \n");
            scanf("%d",&value);
            arr[top] = value;
        }
     else
     {
            top++;
            printf("Enter the element \n");
            scanf("%d",&value);
            arr[top] = value;
     }
    }
}


void disp(int arr[])
{
    int i;
    if(top<=-1)
        printf("EMPTY STACK \n");
    else
    {
        printf("Stack is \n");
        for(i=top;i>=0;i--)
        {
            printf("%d \n",arr[i]);
        }
    }
}


void pop(int arr[])
{
    if(top==-1)
        printf("EMPTY STACK \n");
    else
    {
        printf("element deleted is %d  \n",arr[top]);
        top--;
    }
}
