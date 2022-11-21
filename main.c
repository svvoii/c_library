#include <stdio.h>
#include "libft.h"

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