
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);//s[i] yazamazsın çünki bu char verisi fakat fonksiyon char 
			    //işaretçisi bekliyor.
			    //burada f fonksiyonu s dizisinin adreslerinde dolaşıyor
			    //değerlerinde değil ,s[i] olsa değerlerine ulaşabilirdik.
		i++;
	}
}
/* bunun amacı stringin her bir karakterine başka bir fonksiyon ile ulaşarak işlem yapmak
 * strmapi deki gibi.*/
