#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*d;

	d = (void *) malloc(size * count);
	/*burda mallocu cast ettik yani tür dönüşümü
	ama tür dönüşümü yapmasakta olur çünki malloc zaten
	void yani türsüzdür.bu da her türden pointerın 
	mallocun adresini tutabilmesini sağlar.*/
	if (!d)
		return (NULL);
	ft_bzero(d, count * size);
	return (d);
}
/*calloc aynı malloc gibi bellek tahsis eder 2 paremetresi vardır birine girilen adet diğerine
 * ise girilen türün adet başına kapladıgı byte yazılır.
 * mallocdan farkı şudur tahsis ettiği belleğin içini sıfırlar.*/
