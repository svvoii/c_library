#include <stdio.h>
#include "libft.h"

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
	char	str[] = "Wake up NEO, ... follow the white, Rabbit..";
	char	sep = '.';
	char	**sub_strings;
	char	**sub;
	int		i = 0;
	printf("str: '%s'\n", str);
	sub_strings = ft_split(str, sep);
	printf("Back to main\n");
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
	while (*sub)
	{
		free(*sub);
		printf("free @ '%p'\n", *sub);
		sub++;
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
