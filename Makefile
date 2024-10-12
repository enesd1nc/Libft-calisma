NAME = libft.a #tüm c dosyalarının derlenip birleştirildiği statik kütüphane dosyasıdır
CC = gcc #c derleyicisini belirtir
CFLAGS = -Wall -Wextra -Werror #-Wall tüm önemli uyarı mesajlarını etkinleştirir
#-Wextra ekstra uyarı mesajlarını etkinleştirir 
#-Weror uyarıları hataya dönüştürür yani uyarı algılandıgında derleme başarısız olur.
RM = rm -f #rm komutu dosya siler 
#-f bayrağı ise dosya var olmasa bile komutun hata vermeden çalışmasını sağlar
SRC = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memset.c ft_bzero.c ft_isalpha.c ft_isprint.c

OBJ = $(SRC:.c=.o) #.c ile biten kaynak dosyalarını .o uzantılı nesne dosyalarına dönüştürür
#bu nesne dosyaları daha sonra bir araya getirilip çalıştırılabilir program oluşturulur.
#make komutu varsayılan olarak all hedefini arar ve onu çalıştırır.
#ilk all yazıldıgı için. Farklı bir isimde verebilirdik.":" konanlara target(hedef)denir

all: $(NAME)


#ar komutu statik kütüphane oluşturma
#r: dosyaları arşive ekler c:arşiv dosyasını oluşturur s: arşive bir dizin ekler
$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)


clean:
	$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
