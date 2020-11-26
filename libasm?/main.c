#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

size_t  ft_strlen(char *s);
char    *ft_strcpy(char *s1, char *s2);
int     ft_strcmp(char *s1, char *s2);
ssize_t ft_write(int filedest, const void *buf, size_t nbyte);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);

int main()
{
    char dst[15];
    char *src = "yoyoyoy";
    char *s1 = "";
    char *s2 = "";
    char buff[20];
    int fd;
    
    //printf("%d", ft_strlen("123456789"));
    /*ft_strcpy(dst, src);
    printf("<%s>", dst);*/
    //printf("<%d>", ft_strcmp(s1, s2));
    //ft_write(1, (const void *)"dadawdad", 8);
    fd = open("ft_read.s", O_RDONLY);
    ft_read(fd, buff, 10);
    printf("%s", buff);
    //printf("%zd",ft_write(1, (const void *)"dadawdad", 8));
    return (0);
}