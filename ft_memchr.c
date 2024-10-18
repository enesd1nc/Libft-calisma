#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			//array[i] = *(array + i) aynı anlama gelir.
			//biri dizi notasyonu diğeri ise pointer aritmatiğidir.
			//*(array + i) de indexi i kadar öteler ve o adresteki değeri değişir.
			return((void *)s + i);
		/*index char da kaldıgı için bu returnde olması gereken void e çevirdik.
		*çünki fonksiyon void olarak tanımlanmış */
		i++;
	}
	return (NULL);
}

