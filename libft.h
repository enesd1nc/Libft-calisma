/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdinc <mdinc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:25:21 by mdinc             #+#    #+#             */
/*   Updated: 2024/10/09 16:35:25 by mdinc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int	ft_isascii(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_atoi(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	ft_strlen(const char *s);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);


void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_srtmapi(char const *s, char (*f)(unsigned int, char));

void	ft_bzero(void *s, size_t n);

#endif
