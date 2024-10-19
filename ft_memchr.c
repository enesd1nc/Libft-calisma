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
	*çünki fonksiyon void olarak tanımlanmış
	((*(void *)s +i)) olarak yapsaydık return ü s nin i kadar ötedeki adresine 
	gidip ordaki değeri okur ve onu döndürürdü yani char buda tür uyuşmazlıgına 
	neden olurdu .bizim yazdıgımız return ise s nin i bayt sonraki adresini döndürür
	bu da aradıgımız karekterin yerin adresidir.*/
		i++;
	}
	return (NULL);
}
/*burda sadece adres döndüğü için mainde o değere ulaşmak için dereferans yapmak gerekir
 * (pointerın işaret ettiği bellek adresini okumak).
 * dereferans almayı araştır! */

