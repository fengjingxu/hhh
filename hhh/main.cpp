



#include <stdio.h>
#include <string.h>
char *my_strcpy (char *a , char *b)
{
    char *c=a;
    while (*b != '\0' )
    {
        *a=*b;
        a++;
        b++;
        
    }
    *a='\0';
    return c;
}
int main(int argc,char *argv[])
{
    int i;
    
    char s1[]="abc";
    char s2[]="def";
    my_strcpy(s1,s2);
    printf("复制后的为%s\n",my_strcpy(s1,s2));
    return 0;
}

