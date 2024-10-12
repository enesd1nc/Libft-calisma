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

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len) // size_t dizi elemanlarının sayısını saklar
{
    unsigned char	*tmp_ptr;/*unsigned olmasının sebebi (0-255) arası ascii değer alabilmesi
boş bir işaretçi oluşturmamızın sebebi b ye tür dönüşümü yapsak bile 
b void olarak kalır ancak bir değere atarsak b yi o atadıgımız 
değer hangi dönüşümü yaptıysak ona dönüşür.
peki b ile neden dogrudan işlem yapamıyoruz? çünki void işaretçisi türsüz bir işaretçidir.
işaret ettiği bellek alanındaki veriyi değiştiremezsin*/
    tmp_ptr = (unsigned char *) b; /* parantez kullanımının sebebi tür değişikliği
yaptıgımızı belirtir
tmp de * olmamasının sebebi daha herhangi bir adresi işaret etmiyor olmasıdır yani adres tutmuyor
not! swap da eğer a = *b deseydik b nin tuttugu adresdeki değeri a ya atardı fakat burda 
tmp_ptr ı pointer yani adres tutucu olarak tanımladık koddaki yaptıgımız eşitlikde *b nin adresini
tmp_ptr a atar fakat b nin adresi değişmez.
b işaretçisinin tuttuğu başlangıç adresi tmp ye aktarılır
bu atamayı yapmamızın bir diğer nedeni ise byte byte dizide gezebilmek.
bu atamayı yapmamızın bir diğer nedeni ise byte byte dizide gezebilmek
memsete girilen bir byte lık yer kaplamalı*/
    
    while (len > 0)
    {
        *(tmp_ptr++) =(unsigned char) c;// c yi char a çevirmemizin nedeni ascii deger olarak 0 ile 255 arasındakiler ile ilgilendiğimiz için .byte byte manipülasyon yapmamızı sağlar.
        len--;
    }
    return (b);
}

/*int main()
{
    char    str[5];
  
    ft_memset(str, 65, 5);
    str[4] = '\0';
    printf("%s",str); //printf ifadesi dizinin sonuna otamatik olarak gider write gibi değil
}
 burada bir dizinin içini istediğimiz karakterle doldurmak için yapıyoruz.*/


