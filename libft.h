/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhlungwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:30:48 by hhlungwa          #+#    #+#             */
/*   Updated: 2019/06/06 15:20:08 by hhlungwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);

int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(const char *s);
int		ft_strncmp(char *s1, char *s2, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

char	*ft_strcat(char *restrict s1, char *restrict s2);
char	*ft_strchr(char *s, int c);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s1);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
char	*ft_strncpy(char *dest, const char *src, size_t len);
char	*ft_strnstr(char *str, char *needle, size_t len);
char	*ft_strrchr(char *s, int c);
char	*ft_strstr(char *str, char *needle);

size_t	ft_strlcat(char *s1, const char *s2, size_t size);
size_t	ft_strlen(const char *s);

#endif




