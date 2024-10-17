#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			//s[i] yerine s + i de aynı anlama gelir
			return((void *)s + i);
		//index char da kaldıgı için bu returnde olması gereken void e çevirdik.
		//paremetre nasıl başladıysa en son o türde çıkmalı.
		i++;
	}
	return (NULL);
}

