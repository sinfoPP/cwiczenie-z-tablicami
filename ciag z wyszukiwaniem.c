#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	const char ciag_zn[]= "Ala ma kota , a kot ma Ale.";
	int histogram[26] ={0};
	char znak;
	int licznik = 0;
	while ( (znak = ciag_zn[licznik]) != 0)
	{
		if ((znak >= "a")&& (znak <= "z")){
			++histogram[znak - 'a'];
			
		}
		++licznik;
		}	
	printf( ciag_zn);
	printf( znak);
	}
