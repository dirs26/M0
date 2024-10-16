/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:20:19 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/10 16:57:06 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void	*ft_memset(void *b, int c, unsigned int len)
// void *b es un puntero que tiene que ser rellenado con el valor de c
{
	unsigned char *st;
	unsigned int i;

	st = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		st[i] = (unsigned char)c;
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str[50];

	str[50] = "Hello World!";
	ft_memset(str, '-', 3);
	write(1, str, strlen(str));
	return (0);
}
*/