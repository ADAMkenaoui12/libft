/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kadam <kadam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 21:06:35 by kadam             #+#    #+#             */
/*   Updated: 2024/01/01 17:13:24 by kadam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
	{
		dest = ft_strdup("");
		return (dest);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[len] = '\0';
	return (dest);
}
