/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:42:05 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/10/29 00:07:46 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
//size_t	ft_strlcat(char *dest, const char *src, size_t size);
//int		ft_toupper(int c);
//int		ft_tolower(int c);
//char	*ft_strchr(const char *str, int c);
//char	*ft_strrchr(const char *str,int c);
//int		ft_strncmp(const char *str1, const char *str2, size_t n);
//void	*ft_memchr(const void *s, int c, size_t n);
//int		ft_memcmp(const void *str1, const void *str2, size_t n);
//char	*ft_strnstr(char *str1, const char *str2, size_t n);
//int		ft_atoi(const char *nptr);
//void	ft_calloc(size_t nmemb, size_t size);
//char	*ft_strdup(const char *str);

#endif