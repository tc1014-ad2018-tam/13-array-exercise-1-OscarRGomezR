/*
Write a program to read n number of integer values in an array and then:

    -Displays in a single line, separated by spaces, the numbers in the order they were entered.
    -Displays in another single line, separated by spaces, the numbers in reverse oder.

Name: Óscar Rubén Gómez Ríos
Matricule Number: A01411750
Mail: A01411750@itesm.mx

 */

#include <stdio.h>

void main()
{
   int a,b,c[100];

   printf("Give me the number of elements of the array :");
   scanf("%d",&b);

   printf("There are %d numbers of elements in the array :\n",b);
   for(a=0;a<b;a++)
      {
	  printf("element - %d : ",a);
	  scanf("%d",&c[a]);
	  }

   printf("\nThe values of the array are : \n");
   for(a=0;a<b;a++)
     {
	   printf("% 5d",c[a]);
	 }

   printf("\n\nThe values of the array in reverse are :\n");
   for(a=b-1;a>=0;a--)
      {
	   printf("% 5d",c[a]);
	  }
   printf("\n\n");
}