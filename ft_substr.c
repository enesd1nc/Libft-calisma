#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = len;
	if (!s)
		return(NULL);
	if (start >= ft_strlen(s) || len == 0)
		return (ft_strdup(""));//bellekde var olan boş bir string. NULL ise geçerli bir bellek adresini işaret etmeyen pointer
	if (len > ft_strlen(s + start))
		i = ft_strlen(s + start);
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s + start, i + 1);
	return (result);
}
//bu kod bir stringin alt dizisini döndürmek için kullanılır(alt string ana stringin bir parçası demek "enes" "nes" nes alt stringlerden biri)