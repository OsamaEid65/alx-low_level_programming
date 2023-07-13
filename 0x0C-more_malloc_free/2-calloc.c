/**
 * *_calloc - good fucatio gssdjsigj jfjf fgn d
 * @nmemb : goof ofo eojf fioej odnofg
 * @size : oidjf kfrng vkkd vdnvnb .vn
 * Return:return 0 always
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr = NULL;
if (nmemb == 0 || size == 0)
	return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
	return (NULL);
		return (ptr);
}
