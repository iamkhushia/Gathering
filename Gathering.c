#include<stdio.h>

    int add (int x , int y)
	{
		return x+y;
	}
	int sub (int x , int y)
	{
		return x-y;
	}
	void multiplication (int x, int y)
	{
		printf("multiplication = %d",x*y);
	}
	void division (int x, int y)
	{
		printf("division = %d",x/y);
	}
	void module (int x, int y)
	{
		printf("module = %d",x%y);
	}

void main()
{
	//Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
	
	int a,b,num;
	
	do
	{   
	    printf("\n -------*****------ \n");
	    printf("Press 1 for addition\n");
		printf("Press 2 substraction\n");
		printf("Press 3 for multiplication\n");
		printf("Press 4 for division\n");
		printf("Press 5 for module\n");
		printf("Press 0 for the exit\n");
		
		printf("enter the number = ");
		scanf("%d",&num);
			
		if(num>=1 && num<6)
		{

			printf("enter any value  A = ");
			scanf("%d",&a);
			printf("enter any value  B = ");
			scanf("%d",&b);	
	    
		switch(num){

				case 1:
					printf("addition = %d",add(a,b));
					break;

				case 2:
					printf("substraction = %d",sub(a,b));
					break;

				case 3:
					multiplication (a,b);
					break;

				case 4:
					division (a,b);
					break;

				case 5:
					module(a,b);
					break;

			}
		}		
			
	}while(num!=0);
}