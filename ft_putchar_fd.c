#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*fd burda dosya tanımlayıcısı (file descriptor)
 * verinin nereye yazılacagını belirler 
 * örneğin 1 standart çıkış terminal.*/
