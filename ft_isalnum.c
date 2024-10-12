/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:25:21 by mdinc             #+#    #+#             */
/*   Updated: 2024/10/09 16:35:25 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if ((c >= 48 && c <= 57) || ( c>= 65 && c <= 90) || (c >= 97 && c <=122))
        return (1);
    return (0);    
}
/*#include <stdio.h>
int main()
{
    printf("%d",ft_isalnum(50));
}
alfabetik veya rakam olup olmadıgını kontrol eder*/
