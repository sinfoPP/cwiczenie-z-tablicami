#include <stdio.h>
#include <conio.h>


void czolowka()
{
	printf("\n  \n");
	printf("  ************************************************************\n");
	printf("  *|                                                        |*\n"); 
	printf("  *|              PROGRAM      z    INFORMATYKI             |*\n");
	printf("  *|                        macro                           |*\n");
	printf("  *|                      WSPol 2017/2018                   |*\n");
	printf("  ************************************************************\n");
	printf("\n");
}
 int main()
 {
 	char napis[16] = "pomolka.";
 	*(napis +1) = 'o';
 	napis[3]= 'y';
 	czolowka();
 	printf("%s\n", napis);
 	return 0;
 }
