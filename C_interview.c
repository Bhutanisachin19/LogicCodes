
#include<stdio.h>
#include<conio.h>


struct node
{
    int data;
    float f;
}st;


int main()
{
		//struct node = (* struct node)malloc(sizeof(struct node));

		printf("Enter the int value");
		scanf("%d", &st.data);

		printf("Enter the floatvalue");
		scanf("%f", &st.f);


		printf("Data is %d %f", st.data , st.f);
		return 0;
}


