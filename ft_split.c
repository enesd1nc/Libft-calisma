#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;
	
	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**free_all(char **result)//** çift boyutlu dizi olarak dusunebilirsin kullanısı aynı ama bi farkı var oda dizilerin boyutu sabittir burda esnek boyutta
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);//result[i] elemanlarının her biri serbest bırakıldıktan sonra
                //hala result isimli işaretçiler dizisi bellekte duruyor.bundan bida freeledik	
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ret_val;
	unsigned int	j;
	unsigned int	a;

	ret_val = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));//sizeof olan kısım işaretçinin boyutunu verir
	if (!ret_val)
		return (NULL);
	a = -1;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			//++a a yı önce 0 yapar eğer a++ yapsaydık -1 den başlardı
			ret_val[++a] = (char *)malloc((word_len(s, c) + 1) * sizeof(char));
			if (!ret_val[a])
				return (free_all(ret_val));//bellek sızıntısını önlemek için yapılır. biri bile başarısız olursa ondan öncekiler başarıyla 
				                           //bellekde yer ayrılsa bile hepsi freelenir
			j = 0;
			while (*s && *s != c)
				ret_val[a][j++] = *s++;
			ret_val[a][j] = '\0';
		}
	}
	ret_val[++a] = NULL;//işaretçi dizilerinin sonunada null konur ama bu şekilde
	return (ret_val);
}
