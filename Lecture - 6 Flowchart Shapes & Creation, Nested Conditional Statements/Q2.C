// Q2. W.A.P. To find the Maximum number from the given 4 Numbers.
// Must use Nested if-else, Take the values of Numbers from the User.

#include<stdio.h>
#include<conio.h>

main()

{
 int A, B, C, D;

 clrscr();

 printf("Enter The Value of A : ");
 scanf("%d", &A);

 printf("Enter The Value of B : ");
 scanf("%d", &B);

 printf("Enter The Value of C : ");
 scanf("%d", &C);

 printf("Enter The Value of D : ");
 scanf("%d", &D);

 if(A>B)
 {
  if(A>C)
  {
   if(A>D)
   {
	printf("%d is Greatest", A);
   }
	else
   {
	  printf("%d is Greatest", D);
   }
  }
   else
   {
	if(C>D)
	{
		printf("%d is Greater", C);
	}
	else
	{
		 printf("%d is Greater", D);
	}
   }
 }
 else
 {
	if(B>C)
	{
		if(B>D)
		{
			printf("%d is Greater",B);
		}
		else
		{
			printf("%d is Greater", D);
		}
	}
	else
	{
		if(C>D)
		{
			printf("%d is Greater", C);
		}
		else
		{
			printf("%d is Greater", D);
		}
	}
 }
 getch();

}