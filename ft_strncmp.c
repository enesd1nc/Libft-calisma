#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i]) && (i < n - 1) && (s1[i] && s2[i]))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	/*c dilinde matematiksel işlemler yapılırken unsigned char veye char
	 * veri tipi önce int türüne dönüştürülür ardından işlem yapılır.
	 * negatif değerlerden kaçınmak için bu tür dönüşümünü yaptık
	 * yapmadanda kod çalısır. */
}
