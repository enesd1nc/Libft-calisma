#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int	i;
	char	*d;

	d = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
