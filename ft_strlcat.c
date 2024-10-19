#include "libft.h"

size_t	ft_strlcat(char *dst,const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_i;
	size_t	value;
	
	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < ft_strlen(dst))
		value = ft_strlen(src) + dstsize;
	else
		value = ft_strlen(src) + ft_strlen(dst);
	i = 0;
	while (dst[i] != '\0')
		i++;
	src_i = 0;
	while (src[src_i] != '\0' && i + 1 < dstsize)//sona eklenicek nullu hesaba katar i + 1.
	{
		dst[i] = src[src_i];
		src_i++;
		i++;
	}
	dst[i] = '\0';
	return (value);
}
