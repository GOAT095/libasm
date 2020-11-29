/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anassif <anassif@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:16:15 by anassif           #+#    #+#             */
/*   Updated: 2020/11/28 23:29:00 by anassif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <string.h>
int main()
{
    char dst[15];
    char *src = "123";
    char *s1 = "";
    char *s2 = "";
    char buff[20];
    int fd;
    
    //printf("%d", ft_strlen("123456789"));
    //printf("<%s>", ft_strcpy(dst, src));
    //printf("<%d>", ft_strcmp(s1, s2));
    //ft_write(1, (const void *)"dadawdad", 8);
    /*fd = open("ft_read.s", O_RDONLY);
    ft_read(fd, buff, 10);
    printf("%s", buff);*/
    //printf("%zd",ft_write(1, (const void *)"dadawdad", 8));
    printf("%s", ft_strdup("456789"));
    return (0);
}