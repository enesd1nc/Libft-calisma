char	*ft_strchr(const char *s, int c)
{
	while ((char)c != *s)
	{
		if (!*s)//nulla gelince
			return (0);
		s++;
	}
	return ((char *)s);//tür uyuşmazlıgını engelledik
}
/*burada bir dizide karekter arıyoruz.int aranan karakterin ascii değeri.*/
