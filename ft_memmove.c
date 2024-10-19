#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst == src || !len)//adresleri aynımı diye bakıyor
		return (dst);
	i = 0;
	if (dst < src)/*hedef belleğin adresi kaynaktan daha düşükse
			*(adresler numaralara göre sıralanır)*/
	{
		while (i < len)
		{
			*((char *)dst + i) = *((char *)src + i);
			i++;
		}
	}
		else
		{
			while (len > 0)
			{
				*((char *)dst + len - 1) = *((char *)src + len - 1);
				len--;
			}
		}
		return (dst);
}
/* bu fonksiyonun amacı adres çakısmasını önleyerek kopyalama yapmaktır
 * eğer hedef bellek kaynaktan dusuk sıradaysa adres olarak baştan kopyalama yap.
 * eğer hedef belleğin adresi kaynaktan büyükse tersden başlayarak kopyalama yapılır
 * tersden değilde baştan baslasaydık src nin aktaracağı verinin adresi ile dst nin
 * ilk adresine denk gelebilir buda adres çakısmasına yol açar.
 * strcpy bu durumu kontrol etmez veri kaybına neden olabilir.*/
