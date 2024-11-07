NAME = libft.a #tüm c dosyalarının derlenip birleştirildiği statik kütüphane dosyasıdır
CC = cc #c derleyicisini belirtir
CFLAGS = -Wall -Wextra -Werror #-Wall tüm önemli uyarı mesajlarını etkinleştirir
#-Wextra ekstra uyarı mesajlarını etkinleştirir 
#-Weror uyarıları hataya dönüştürür yani uyarı algılandıgında derleme başarısız olur.
RM = rm -f #rm komutu dosya siler 
#-f bayrağı ise dosya var olmasa bile komutun hata vermeden çalışmasını sağlar (rm -r klasör silmeye yeterli -f hatayı önlemek için )
SRC = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memset.c ft_bzero.c ft_isalpha.c\
      ft_isprint.c ft_isascii.c ft_strlen.c ft_toupper.c ft_tolower.c\
      ft_memcpy.c ft_strlcpy.c ft_strdup.c ft_calloc.c ft_strchr.c\
      ft_memchr.c ft_strrchr.c ft_strncmp.c ft_strlcat.c ft_strnstr.c ft_memmove.c\
      ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c\
      ft_striteri.c ft_strjoin.c ft_substr.c ft_strtrim.c ft_strtrim.c ft_itoa.c ft_split.c ft_memcmp.c 

OBJ = $(SRC:.c=.o) #.c ile biten kaynak dosyalarını .o uzantılı nesne dosyalarına dönüştürür
#(fiziki olarak o dosyaları dönüştürmez assagıdaki eşitlik gibi yazılmasını sağlar src deki tüm dosyaların)
#OBJ = ft_atoi.o  eğer .o uzantılı dosya bulunamazsa .c uzantılı aynı isimde olan dosyayı make kendisi otamatik derler.(fiziki olusum)
#bu nesne dosyaları daha sonra bir araya getirilip çalıştırılabilir program oluşturulur.
#":" makefilede değiştirme kalıbı
#make komutu varsayılan olarak all hedefini arar ve onu çalıştırır.
#ilk all yazıldıgı için. Farklı bir isimde verebilirdik.":" konanlara target(hedef)denir

all: $(NAME)
#burası sadece libft.a dosyası varmı varsada güncelmi diye bakar eğer yoksa oluşturulması için ne yapacagına bakar
#burda hedefin bağımlılığı NAME dir hedefin oluşturulması için gerekli olan kuraldır.makefile NAME i nasıl oluşturacagını aramaya başlar.
#makefile ilk başta hedefin bağımlılığını oluşturur(kuralını)


#ar(archive)birden fazla nesne dosyasını bir arşivde birleştirir.
#-r arşive dosyalar ekler eğer dosyalar güncel değilse onları günceller
#-c eğer arşiv dosyası mevcut değilse yeni bir arşiv dosyası oluşturur
#-s arşiv dosyasına bir dizin ekler böylece aranan fonksiyonlar daha hızlı bulunur
$(NAME):	$(OBJ)  #burda NAME in bağımlılıgını görür yani NAME  oluşmasını için OBJ nin ilk oluşması lazımdır bu seferde OBJ yi nasıl 
                    #olusturacagını aramaya başlar.  .o uzantılı target e gider 
	ar rcs $(NAME) $(OBJ) 
	
%.o : %.c# %ifadesi dosya isimlerini temsil eden bir joker karakterdir .Şablon tanımlamak için kullanılır.Bu sayede tek tek dosyalar için kural
#yazmaya gerek yoktur
	$(CC) -c $(CFLAGS) $< -o $@
#cc -c -Wall -Wextre -Weror ft_atoi.c -o ft_atoi.o ifadesi ile eşdeğer
#$< ilk bağımlılık $@ oluşturulucak hedef dosyası


clean:
	$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re  #makefilede hedefler dosya oluşturmak için kullanılır ancak bazı hedefler gerçek dosyalarla ilgili değildir belirli
#komutları çalıştırmak içindir eğer bu hedeflerle aynı isimde bir dosya varsa make bunların zaten var oluğunu düşünerek hedefi çalıştırmaz.
#NAME i buraya yazmadık çünki NAME gerçek bir dosya üretiyor(libft.a) eğer zaten libft.a adında bir dosya varsa ve güncelse make komutu
#bu yüzden çalışmaz.

