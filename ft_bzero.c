/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:57:56 by mdinc             #+#    #+#             */
/*   Updated: 2024/10/09 15:57:56 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    ft_memset(s, '\0',n);
}
/*bunun amacı memset ile aynı sadece içini null ile dolduruyor  dizi içini temizlemek için kullanılır
int main()
{
	char	e[10];
	ft_bzero(e, sizeof(e));
	size_t i ;
	i = 0;
	int a = sizeof(e);
	while (i < a)
	{
		printf("%d",e[i]);
		i++;
	}
}
*/
