/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:40:18 by mdinc             #+#    #+#             */
/*   Updated: 2024/11/09 20:25:59 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void	test_isalpha(void)
{
	printf("%d\n", ft_isalpha(65));
}

void	test_atoi(void)
{
	printf("%d\n", ft_atoi("123"));
}

void	test_bzero(void)
{
	char	s[] = "enes"; //*s olarak tanımlasaydık sabit bellek alanında tutulurdu(read only) yani üzerinde değişiklik yapamayız.
	ft_bzero(s,3);
	printf("%s\n", s);//nulla gelince otamatik durdugu için enes deki ilk 3 üni nullasak bile s harfini çıktıda göremeyiz ama orda vardır.
}

void	test_calloc(void)
{
	char	*arr; //bir dizi gibi tanımlayamazsın çünki dizilerin adresi değiştirilemez.
	arr = (char *)ft_calloc(1, 5);//arr artık callocun oluşturdugu belliğin başlagıç adresini tutuyor.
	ft_strlcpy(arr, "enes", 5);//arr ="enes" bellek sızıntısına neden olur kopyalama daha güvenli.
	printf("%s",arr);
	free(arr);
}

void	test_isalnum(void)
{
	printf("%d\n", ft_isalnum(49));
}

void	test_isascii(void)
{
	printf("%d\n", ft_isascii(999));
}

void	test_isdigit(void)
{
	printf("%d\n", ft_isdigit(48));
}
void	test_isprint(void)
{
	printf("%d\n", ft_isprint(32));
	
}

void	test_memchr(void)//bu fonksiyon bulunan değerin adresin döndürür kendisine ulaşmak için deferans yaptık
{
	char	*s;//burada s adres tutucu
	s = (char *)ft_memchr("Ali", 65, 3);//bulunan harfin adresini artık s de tutuyor
	printf("%c\n", *s);//pointer koyarak adresdeki değeri okuyoruz,%s yazsaydık A nın bulundugu yerden itibaren null gorene kadar yazdırırdı.
}

void	test_memcpy(void)
{
	char	*s;
	char	*e = "enes";
	char	*a;
	s = (char *)malloc(5);
	a = (char *)ft_memcpy(e+2, e, 4);
	s[4] = '\0';
	printf("%s\n",a);
	/*memcpy fonksiyonunda a, bir karakter dizisinin başlangıç adresini tutuyor. Yani aslında bir string'in başlangıcına işaret ediyor.
	 String'lerde C dilinde, dizinin başına işaret eden bir işaretçiyi doğrudan yazdırabilirsiniz,
	 çünkü printf'in %s formatı zaten işaretçinin gösterdiği tüm karakter dizisini (null terminatörüne kadar) otomatik olarak okur.*/
}

void	test_memmove(void)
{
	char	*s;
	char	*e = "enes";
	char	*a;
	s = (char *)malloc(5);
	a = (char *)ft_memmove(s, e, 4);
	s[4] = '\0';
	printf("%s\n", a);
}

void	test_memset(void)
{
	char	s[] = "enes";
	char	*a;
	a = (char *)ft_memset(s, 65, 3);
	printf("%s\n", a);
	/*int	s[] = {2,3,4};
	int	*a;
	int i = 0;
	a = (int *)ft_memset(s,12,3*sizeof(int));
	while (i < 3)
	{
		printf("%d\n", a[i]);
		i++;
	}*/
}

void	test_putchar(void)
{
	//ft_putchar_fd('e', 1);
	int fd = open("output.txt", O_WRONLY | O_CREAT , 0644);
	ft_putchar_fd('a', fd);
	close(fd);
}

void	test_putendl(void)
{
	//ft_putendl_fd("enes", 1);
	int fd = open ("enes.txt", O_WRONLY | O_CREAT, 0644);//open("dosya adı",dosya açma flagleri,dosya izinleri)
	                                                     //W_ORNLY sadece yazma 0_CREAT dosya yoksa oluştur
	ft_putendl_fd("evo", fd);
	close(fd);
}

void	test_putnbr(void)
{
	int fd = open("evo.txt", O_WRONLY | O_CREAT, 644);
	ft_putnbr_fd(123, fd);
	//ft_putnbr_fd(-123, 1);
}

void	test_putstr(void)
{
	char	s[25] = "tamam";
	int fd = open("hasta.txt", O_WRONLY | O_CREAT, 644);
	ft_putstr_fd(s, fd);
	//ft_putstr_fd("enes\n", 1);
}

void	test_strchr(void)
{
	printf("%c\n", *ft_strchr("lAi", 65));
	//%s kullansaydık fonksiyonun başına pointer koymazdık cunki %s adresin değerini okuyabilir %c dogrudan okuyamaz bundan pointer koyduk
	                                       
}

void	test_strdup(void)
{
	printf("%s\n", ft_strdup("enes"));
}

void	test_strlcat(void)
{
	char	s[8] = "ali";//s[] şeklinde yazarsan ali kadar kapasitesi olur yani 4 byte bu yüzden 8 bytelık alan açtık.
	
	printf("%ld\n", ft_strlcat(s ,"enes", 7));
}

void	test_strlcpy(void)
{
	char	s[10];
	printf("%ld\n", ft_strlcpy(s, "enes", 10));
}

void	test_strlen(void)
{
	printf("%ld\n", ft_strlen("eness"));
}

void	test_strncmp(void)
{
	printf("%d\n", ft_strncmp("enes", "bnes", 3));
}

void	test_strnstr(void)
{
	printf("%s\n", ft_strnstr("enes", "n", 3));
}

void	test_strrchr(void)
{
	printf("%s\n", ft_strrchr("lAi",65));
}

void	test_tolower(void)
{
	printf("%d\n", ft_tolower(65));
}

void	test_toupper(void)
{
	printf("%d\n", ft_toupper(65));
}

void	test_strjoin(void)
{
	printf("%s\n", ft_strjoin("enes", "tolga"));
}

void	test_substr(void)
{
	printf("%s\n", ft_substr("enes", 1, 2));
}

void	test_strtrim(void)
{
	printf("%s\n", ft_strtrim("aaenesaa","a"));
}

void	test_itoa(void)
{
	printf("%s\n1", ft_itoa(123));
}

void	test_split(void)
{
	char	**result;
	char	str[] = "Hello world this is 42 school";
	int	i = 0;
	result = ft_split(str, ' ');
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}

void	test_memcmp(void)
{
	printf("%d\n", ft_memcmp("a", "b", 1));
}

char	upper(unsigned int i, char e)
{
	(void)i;
	if (e >= 97 && e <=122 )
		e -= 32;
	return (e);
}

void	test_strmapi(void)
{
	printf("%s\n", ft_strmapi("enes", upper));
}

void upper2(unsigned int i, char *s)
{
	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= 32;
}

void	test_striteri(void)
{
	char	e[] = "enes";
	ft_striteri(e, upper2);
	printf("%s\n", e);
	
}

int	main(void)
{
	//test_isalpha();
	//test_atoi();
	//test_bzero();
	//test_calloc();
	//test_isalnum();
	//test_isascii();
	//test_isdigit();
	//test_isprint();
	//test_memchr();
	//test_memcpy();
	//test_memmove();
	//test_memset();
	//test_putchar();
	//test_putendl();
	//test_putnbr();
	//test_putstr();
	//test_strchr();
	//test_strdup();
	//test_strlcat();
	//test_strlcpy();
	//test_strlen();
	//test_strncmp();
	//test_strnstr();
	//test_strrchr();
	//test_tolower();
	//test_toupper();
	//test_strjoin();
	//test_substr();
	//test_strtrim();
	//test_itoa();
	//test_split();
	//test_memcmp();
	//test_strmapi();
	test_striteri();
}
