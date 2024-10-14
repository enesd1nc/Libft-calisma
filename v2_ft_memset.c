#include <string.h>
#include <stdio.h>
void	*ft_memset(void *b,int c, size_t len)
{
	size_t	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
int main()
{
	char	str[5];

	ft_memset(str,65,5);
	str[4] = '\0';
	printf("%s",str);
}
