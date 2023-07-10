/**
 *create_array - this funcation is so good and hejthy
 *@size: is good prameter nd helthy foog
 *@c: is good char and hrlthy dood a;
 *Return:return 0 always
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
ptr = (char *)malloc(size);
if (size == 0 || ptr == 0)
{
return (0);
}
while (size--)
{
ptr[size] = c;
}
}
