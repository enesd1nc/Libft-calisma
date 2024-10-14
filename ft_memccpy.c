#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (0);
	while (n--)
		((char *)dst)[n] = ((char *)src)[n];
	/*ilk başta chara çevirdik değişkene müdahale edebilmek için.
	en dıştaki parantez ise char a dönüşümün hangi bölüme uygulandıgını
	belirtmek için kullandık */
	return (dst);
}
