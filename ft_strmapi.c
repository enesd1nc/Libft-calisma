#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	/*char const ile const char aynı anlama gelmektedir.
	 * *f burada fonksyon işaretçisidir.
	 * fonksiyon işaretçileri kullanarak bir fonksiyona başka bir fonksiyonu
	 * argüman olarak kullanmamızı sağlar.
	 * burada f char döndüren ve 1 int bir char paametresi alan fonksiyonu işaret edebilir.*/

	char	*new;
	int		i;

	if(!s)
		return (NULL);
	i = ft_strlen(s);
	new = malloc(i + 1);
	if (!new)
		return (0);
	i = 0;
	while (s[i])
	{
		new[i] = f(i, s[i]);/*burda i fonksiyonu özelleştirmemize olanak tanır örneğin
				      çift indexleri büyük harf yapmada*/
		i++;
	}
	new[i] = 0;
	return (new);
}
/* char	to_upper(unsigned int i, char c)
 * {
 * 	karakteri buyutme fonksiyonunu yaz
 * }
 * int main()
 * {
 * 	char	*result = ft_strmapi("hello", to_upper);
 *
 * 	printf("%s", result); HELLO çıktısı verir.*/
