#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;

	if (!s)//null kontrolü.
		return ;//herhangi bir değer döndürmeden fonksiyondan çıkar.
			//return (0) yazamazsın çünki void fonksiyon.
	while (s[i])
	{
		ft_putchar_fd(s[i],fd);
		i++;
	}
}
