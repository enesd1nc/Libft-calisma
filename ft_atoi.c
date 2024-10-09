/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:12:43 by mdinc             #+#    #+#             */
/*   Updated: 2024/10/08 10:55:23 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include "libft.h" // <libft.h> sistem dosyalarında kütüphaneyi arar(gcc ile gelenler) ,ddiğeri ise bulundugu dizinde arar(kendi projelerin)

	int	ft_atoi(const char *str) //const kullanmamızın sebebi değişkenin içeriğinde bir değişiklik olmayacagını belirtmek için(okunurlugu arttırır)
{
	int	res;
	int	s;
	int	i;

	s = 1;
	i = 0;
	res = 0;
	while ((str[i] == 32) || (str[i] > 9 && str[i] < 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s = -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (str[i] - 48) + (res * 10);
		i++;
	}
	return (res * s);
}
#include <stdio.h>
int main()
{
	printf("%d",ft_atoi("123"));
}
