/**
 * str_concat - this fucation good and betty 
 * @s1 : is good prameter good
 * @s2 : s d dponfo pfoe flgdfg
 * Return : return 0 always 
 */ 
#include <stdio.h>
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
    char *counter1=&(*s1);
    char *counter2=&(*s2);
    int size1;
    int size2;
    int i ; 
    int sumsize;
    char * ptr;
    while (*counter1!='\0')
    {
        counter1++;
        size1++;
    }
     while (*counter2!='\0')
    {
        counter2++;
        size2++;
    }
    
    sumsize=size1+size2+1;
    
    ptr=(char *)malloc(sumsize*sizeof(char));
    
    for (i=0;i<size1;i++)
    {
        ptr[i]=s1[i];
    }
    for (i=0;i<size2;i++)
    {
        ptr[size1+i]=s2[i];
    }
    ptr[size1-1]=' ';
    ptr[sumsize-1]='\0';
    return (ptr);
}
