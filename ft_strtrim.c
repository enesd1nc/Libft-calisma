#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return(NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')//strchr farkettiyesen 2.paremetre olarak int alır 
	//fakat charlar otamatik olarak inte dönüştürülebiir bu yüzden char da girebiliriz.
		s1++;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && i != 0)
		i--;
	return (ft_substr((char *)s1, 0, i+1));
}