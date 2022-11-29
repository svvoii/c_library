#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "libft.h"

/* ft_lstnew.c test

void	t_bzero(void *s);

int	main(void)
{
	char	s0[] = "Wake up Neo..";
	char	s1[] = "Follow the White Rabbit..";
	char	s2[] = "Run Forest.. run";
	char	s3[] = "There is no faith..";
	char	s4[] = "..but the one we chose for ourselves.";
	char	s5[] = "This node is added to the end of the list";
	char	s6[] = "This node was added to beginning of thelist.";
	t_list	*node;
	t_list	*list;
	t_list	*tmp;
	t_list	*last;

	list = ft_lstnew(s0);
	tmp = list;
	printf("list start @ '%p'\n", tmp);

	node = ft_lstnew(s1);
	tmp->next = node;

	node = ft_lstnew(s2);
	tmp->next->next = node;

	node = ft_lstnew(s3);
	tmp->next->next->next = node;

	node = ft_lstnew(s4);
	tmp->next->next->next->next = node;

	// ft_lstadd_front.c test
	ft_lstadd_front(&list, ft_lstnew(s6));
	printf("\\/\n");
	printf("ft_lstadd_front.c:\nlist start @ '%p'\n", list);
	printf("\n\\/\n");

	// ft_lstlast.c test
	last = ft_lstlast(list);	
	printf("ft_lstlast.c\n");	
	printf("last node @ '%p'\tlist @ '%p'\n", last, list);	
	printf("\n\\/\n");

	// ft_lstadd_back.c test
	printf("ft_lstadd_back.c\n");	
	ft_lstadd_back(&list, ft_lstnew(s5));
	last = ft_lstlast(list);	
	printf("list @ '%p'\tlast @ '%p'\n", list, last);	
	printf("\n\\/\n");

	// ft_lstsize.c test
	printf("ft_lstsize.c\nnodes total: '%d'\n", ft_lstsize(list));	

	printf("\n\\/ \\/ \\/ \\/ \\/ \\/ \\/ \\/ \\/ \\/ \\/ \\/ \\/ \\/ \\/\n");

	node = list;
	for (int i = 1; i <= ft_lstsize(list); i++)
	{
		printf("%d)\nnode	  : @ '%p'\n", i, node);
		printf("node->next: @ '%p'\n", node->next);
		printf("->content:'%s' @ '%p'\n", (char *)node->content, node->content);
		printf("\n");
		node = node->next;
	}

	// ft_lstclear.c ft_lstdelone.c test
	printf("clear starting from node with text '%s'\n", (char *)list->content);
	printf("@ '%p'\n", list);
	ft_lstclear(&list, t_bzero);
	printf("end ft_clear\n\\/\n");
	
	// ft_lstsize.c test
	printf("list @ '%p'\n", list);

	tmp = list;
	while (tmp)
	{
		node = tmp->next;
		free(tmp);
		tmp = node;
	}
	return (0);
}
void	t_bzero(void *s)
{
	char	*str;

	str = s;
	printf("t_bzero\n*str: '%s'\n", str);
	while (*str)
	{
		printf("%c|", *str);
		*str = 0;
		str++;
	}
	printf("end t_bzero\n\n");
}
*/
/* ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c test
int	main(void)
{
	//char	s[] = "\0";
	//char	s[] = "Wake up neo..";
	int		num1 = 2147483647;
	int		num2 = -2147483648;
	int		num3 = 2147483648;
	int		num4 = 0;
	
	ft_putnbr_fd(num1, 1);
	printf("\n");
	ft_putnbr_fd(num2, 1);
	printf("\n");
	ft_putnbr_fd(num3, 1);
	printf("\n");
	ft_putnbr_fd(num4, 1);
	printf("\n");
	//ft_putchar_fd(s[0], 1);
	//printf("\n");
	//ft_putstr_fd(s, 1);
	//printf("\n");
	//ft_putendl_fd(s, 1);
	return (0);
}
*/
/*
ft_strmapi.c - ft_striteri.c test
void	f(unsigned int i, char *c)
{
	*c += 1;
	printf("%d\t", i);
	printf("%c @ '%p'\n", *c, c);
}

int	main(void)
{
	char	s[] = "wake up neo..";

	printf("s:\n");
	for (size_t i = 0; i < ft_strlen(s); i++)
	{
		printf("%ld\t", i);
		printf("%c @ '%p'\n", s[i], &s[i]);
	}
	printf("\n");
	ft_striteri(s, f);
	return (0);	
}
*/
/* ft_itoa.c test
int	main(void)
{
	//int	num = 1;
	//int   num = -1234567890;
	int   num = -2147483648;
	//int   num = 2147483647;
	char	*str;
	printf("num: '%d'\n", num);
	str = ft_itoa(num);
	printf("str: '%s'\n", str);
	free(str);
	return (0);
}
*/
/* ft_split.c test
int	main(void)
{
	//char	str[] = "Wake up NEO, ... follow the white, Rabbit..";
	//char	sep = '.';
	char	**sub_strings;
	char	**sub;
	int		i = 0;
	//printf("str: '%s'\n", str);
	sub_strings = ft_split("     tripouille   42  ", ' ');
	printf("\nBack to main\n-----Read:\n");
	sub = sub_strings;
	//while (i < n)
	while (sub[i])
	{
		printf("sub_s[%d]: '%s'\t\t@ '%p'\n", i, sub[i], sub[i]);
		i++;
	}
	i = 0;
	sub = sub_strings;
	//while (i < n)
	printf("-----Free:\n");
	while (sub[i])
	{
		free(sub[i]);
		printf("free sub[%d]@ '%p'\n", i, sub[i]);
		i++;
	}
	printf("end free\tsub_strings @ '%p'\n", sub_strings);
	free(sub_strings);
	return (0);
}
*/
/* ft_strtrim.c test
int     main(void)
{
	char    str[] = "a b ccbaWake up Neo. Follow the white Rabbit..  c a ";
	char    set[] = "b  a  c";
	char    *trim;
	trim = ft_strtrim(str, set);
	printf("str: '%s'\n", str);
	printf("trim: '%s'\n", trim);
	free(trim);
	return (0);
}
*/
/* ft_substr.c test
int	main(void)
{
	char	str[] = "Wake up NEO! Follow the White Rabbit...";
	char	*sub;

	sub = ft_substr(str, 24, 12);
	printf("str: '%s'\n", str);
	printf("sub: '%s'\n", sub);
	free(sub);
	return (0);
}
*/
/* ft_strjoin.c test
int		main(void)
{
	char	str1[] = "Wake up NEO.. ";
	char	str2[] = "Follow the white Rabbit !";
	char	*str3;

	str3 = ft_strjoin(str1, str2);
	printf("strjoin: '%s'\n", str3);
	free(str3);
	return (0);
}
*/

/* ft_strlcat.c test
#include <stdio.h>
#include <bsd/string.h>int	main(void)
{
	//char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	//char buff1[0xF00] = "there is no stars in the sky";
	//char buff2[0xF00] = "there is no stars in the sky";
	char b[0xF] = "nyan !";
	//size_t max = ft_strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	size_t max = 0;
	int		s_cat = 0;
	int		fts_cat = 0;

	s_cat = strlcat(((void *)0), b, max);
	fts_cat = ft_strlcat(((void *)0), b, max);

	printf("strlcat: \tlen: '%d'\n", s_cat);
	printf("ft_strlcat: \tlen: '%d'\n", fts_cat);
	return (0);
}
*/
/* ft_calloc.c test
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int	main(void)
{
	void	*str1;
	void	*str2;

	str1 = calloc(SSIZE_MAX, 0);
	str2 = ft_calloc(SSIZE_MAX, 0);
	printf("str1 @ '%p'\n", str1);
	printf("str2 @ '%p'\n", str2);
	printf("str1 '%s'\n", (char *)str1);
	printf("str2 '%s'\n", (char *)str2);
	free(str1);
	free(str2);
	return (0);
}
*/