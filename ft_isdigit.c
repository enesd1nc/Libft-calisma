/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:25:21 by mdinc             #+#    #+#             */
/*   Updated: 2024/10/09 16:35:25 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*int main()
{
	printf("%d",ft_isdigit(49));
}*/
