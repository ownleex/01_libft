/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:02:17 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/02 18:24:14 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int
	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
int	main(void)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	i = 0;
	printf("Before ft_tolower: %s\n", lower);
	while (lower[i])
	{
		lower[i] = ft_tolower(lower[i]);
		i++;
	}
	printf("After ft_tolower: %s\n", lower);

	i = 0;
	printf("Before ft_tolower: %s\n", upper);
	while (upper[i])
	{
		upper[i] = ft_tolower(upper[i]);
		i++;
	}
	printf("After ft_tolower: %s\n", upper);

	char symbols[] = "12345!@#$%";
	i = 0;
	printf("Before ft_tolower: %s\n", symbols);
	while (symbols[i])
	{
		symbols[i] = ft_tolower(symbols[i]);
		i++;
	}
	printf("After ft_tolower: %s\n", symbols);
	return (0);
}
*/