#include <stdio.h>
#include <stdlib.h>

int     hello();
int     ft_strlen(char *s);
char    *ft_strcpy(char *s1, char *s2);
int     ft_strcmp(char *s1, char *s2);
int main()
{
    char dst[15];
    char *src = "yoyoyoyoyo";
    char *s1 = "123";
    char *s2 = "123";
    //printf("%d\n", hello()); 
    //printf("%d", ft_strlen("123456789"));
    //ft_strcpy(dst, src);
    //printf("<%s>", dst);
    printf("<%d>", ft_strcmp(s1, s2));
    return (0);
}