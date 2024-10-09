/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:52:20 by mdinc             #+#    #+#             */
/*   Updated: 2024/10/09 15:15:22 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
void	*ft_memset(void *b, int c, size_t len) // size_t dizi elemanlarının sayısını saklar
{
    size_t  i;
    unsigned char   value = (unsigned char) c; // parantez kullanımının sebebi tür değişikliği yaptıgımızı belirtir
// c yi char a çevirmemizin nedeni ascii deger olarak 0 ile 255 arasındakiler ile ilgilendiğimiz için 
// memsete girilen bir byte lık yer kaplamalı
    i = 0;
    while (i < len)
    {
        *((unsigned char *)b + i) = value;
        i++;
    }
    return (b);
}
#include <stdio.h>
int main()
{
    char    str[5];
  
    ft_memset(str, 65, 5);
    str[4] = '\0';
    printf("%s",str); //printf ifadesi dizinin sonuna otamatik olarak gider write gibi değil
}
// burada bir dizinin içini istediğimiz karakterle doldurmak için yapıyoruz.

