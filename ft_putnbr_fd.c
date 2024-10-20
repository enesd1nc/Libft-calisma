#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = (long)n;//cast ettikden sonra atamaya gerek yok okunabilirlik için yaptık.
	if (number < 0)
	{
		write(fd, "-", 1);
		number *= -1;
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
	ft_putchar_fd(number + '0', fd);//rakam ile 0 karektrinin ascii karsılıgını (48)
					//ile toplar çıkan sayının ascii karsılıgına denk gelen
					//rakamı yazdırır.
}
/*recursive fonsiyon mantıgını 42 sayısını örnek vererek gösterelim
 * 42 > 10 olduğu için 42 / 10 dan 4 gelir ft_putnbr_fd(4, fd)
 * ve 42 % 10 dan 2 gelir ft_putnbr_fd(2, fd) sırayla çağırılır.
 * ve sırayla ekrana yazdırılır ilk 4 olan fonksiyon çalısır ardından 2 olan 
 * böylece 42 yazılır.*/
