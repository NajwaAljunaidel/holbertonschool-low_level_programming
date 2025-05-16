#include "main.h"


/** hello 
 *this
 *is
 *Najwa
 *Aljunaidel
 */
 

char *_memset(char *s, char b, unsigned int n); 
{ 

	unsigned int itre;

	for(itre = 0; n > 0; itre++,  n--)
	{
	
		s[itre] = b;
	}

	return (s);
}
