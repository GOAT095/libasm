#include "libasm.h"
# define STRLEN(x) (printf("%s\nft_strlen : %lu\nstrlen : %lu\n", x, ft_strlen(x), strlen(x)))
# define STRCMP(x, y) (printf("%s | %s\nftstrcmp : %d\nstrcmp : %d\n", x, y, ft_strcmp(x, y), strcmp(x, y)))
# define STRDUP(x) (printf("%s\nft_strdup : %s\nstrdup : %s\n", x, ft_strdup(x), strdup(x)))
int     main()
{
	char *s1,*s2;
	char dst1[1000];
	char dst2[1000];
	char buf[20];
	int fd;
	printf("\033[0;31mMandatory TEST\033[0m\n");
	printf("\033[0;32mft_strlen TEST\033[0m\n");
	STRLEN("");
	STRLEN("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.");
	printf("\033[0;32mft_strcpy TEST\033[0m\n");
	ft_strcpy(dst1, "");
	strcpy(dst2, "");
	printf("ft_strcpy : %s\nstrcpy : %s\n", dst1, dst2);
	ft_strcpy(dst1, "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.");
	strcpy(dst2, "Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.");
	printf("ft_strcpy : %s\nstrcpy : %s\n", dst1, dst2);
	printf("\033[0;32mft_strcmp TEST\033[0m\n");
	s1 = "";
	s2 = "";
	STRCMP(s1, s2);
	s1 = "";
	s2 = "test";
	STRCMP(s1, s2);
	s1 = "test";
	s2 = "";
	STRCMP(s1, s2);
	s1 = "test";
	s2 = "test";
	STRCMP(s1, s2);
	s1 = "Test";
	s2 = "test";
	STRCMP(s1, s2);
	s1 = "tes";
	s2 = "tesT";
	STRCMP(s1, s2);
	printf("\033[0;32mft_write TEST\033[0m\n");
	ft_write(1, "hello\n", 6);
	fd = open("test", O_WRONLY);
	ft_write(fd, "hello\n", 6);
	if ((ft_write(-4, "hello\n", 6) == -1))
		perror("error");
	printf("%d\n", (int)ft_write(1, "hello\n", 6));
	close(fd);
	printf("\033[0;32mft_read TEST\033[0m\n");
	ft_read(0, buf, 20);
	bzero(buf, 20);
	printf("%s", "test dyal test file\n");
	fd = open("test", O_RDONLY);
	ft_read(fd, buf, 7);
	printf("%s\n", buf);
	if ((ft_read(-4, buf, 6) == -1))
		perror("error");
	printf("%d\n", (int)ft_read(0, buf, 20));
	close(fd);
	printf("\033[0;32mft_strdup TEST\033[0m\n");
	STRDUP("");
	STRDUP("Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum.");
    return 0;
}