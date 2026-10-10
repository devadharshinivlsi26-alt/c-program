#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("=====BITWISE OPERATION=====\n");
	printf("Enter the first number:\n");
	scanf("%d",&a);
	printf("Enter the second number:\n");
	scanf("%d",&b);
	printf("-----MENU-----\n");
	printf("1. Bitwise AND(&)\n");
	printf("2. Bitwise OR(|)\n");
	printf("3. bitwise XOR(^)\n");
	printf("4. Bitwise NOT(~)\n");
	printf("5. Left shift(<<)\n");
	printf("6. Right shift(..)\n");
	printf("Enter your choices:/n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				res=a&b;
				printf("Bitwise AND Result=%d",res);
			}
			break;
		case 2:
		    {
		    	res=a|b;
		    	printf("Bitwise OR Result:%d",res);
			}
			break;
		case 3:
		    {
		    	res=a^b;
		    	printf("Bitwise XOR Result=%d",res);
			}
			break;
		case 4:
		    {
		    	res=~a;
		    	printf("Bitwise NOT REsult=%d",res);
			}
			break;
		case 5:
		    {
		    	res=a<<b;
		    	printf("Left shift Result=%d",res);
			}
			break;
		case 6:
		    {
		    	res=a>>b;
		    	printf("Right shift Result=%d",res);
			}
			break;
		default:
	        {
	        	printf("Invalid choice.");
		    }
	}
}
