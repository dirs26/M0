/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diegrod2 <diegrod2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:14:45 by diegrod2          #+#    #+#             */
/*   Updated: 2024/10/15 17:34:44 by diegrod2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	if (!str)
		return (NULL);
	len = (ft_strlen(s)+1);
	str = (char *)malloc(len);
	ft_strlcpy(str, s);
	return (str);
}

