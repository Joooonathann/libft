/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbiser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:44:18 by jalbiser          #+#    #+#             */
/*   Updated: 2023/10/26 10:09:27 by jalbiser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int i);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *p, int v, size_t count);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *source, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *str, int s);
char	*ft_strrchr(const char *str, int s);
int		ft_strncmp(const char *str1, const char *str2, size_t size);
void	*ft_memchr(const void *a, int s, size_t n);
int		ft_memcmp(const void *p1, const void *p2, size_t n);
char	*ft_strnstr(const char *a, const char *b, size_t n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *str, char const *set);
char	*ft_itoa(int n);

#endif
