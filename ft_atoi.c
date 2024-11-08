/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:12:43 by mdinc             #+#    #+#             */
/*   Updated: 2024/11/08 16:33:58 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//burada kütüphane eklemeye gerek yok çünki yabancı bir fonksiyon tanımlamadık.*/
//const kullanmamızın sebebi değişkenin içeriğinde bir değişiklik olmayacagını belirtmek için(okunurlugu arttırır)
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}
/*#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("123"));
}*/
