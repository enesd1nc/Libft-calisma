/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:49:24 by mdinc             #+#    #+#             */
/*   Updated: 2024/10/09 17:16:47 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isaplha(int c)
{
    if ((c >= 65 && c<= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}