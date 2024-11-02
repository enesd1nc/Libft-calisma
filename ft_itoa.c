#include "libft.h"

int	d_count(int nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr <= 0)
		nbr_len++;
	while (nbr) //nbr 0 olana kadar devam eder
	{
		nbr /= 10;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		digit;
	long	new;

	digit = d_count(n);
	new = n;
	str = (char *) ft_calloc(digit + 1, sizeof(char));//burda calloc adres olarak duyor cast ettiğimiz * işaretine bakarak değer oldugunu dusunme
	                                                  //değer olması için (*(char *)ft_calloc) şeklinde yazılmalı.
	if (!str)
		return (NULL);
	if (n == 0)
		*str = '0';
	else if (new < 0)
	{
		new = n;
		new *= -1;
		str[0] = '-';
	} 
	while (new != 0)
	{
		digit--;
		str[digit] = (new % 10) + '0';
		new = new / 10;
	}
	return (str);
}