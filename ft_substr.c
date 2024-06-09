/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:56:12 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 20:08:50 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	count_subs;
	size_t	mem;
	size_t	dif;

	count_subs = 0;
	dif = ft_strlen(s) - start;
	if (dif < len)
		len = dif;
	mem = (len + 1) * sizeof(char);
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	subs = malloc(mem);
	if (subs == NULL)
		return (NULL);
	while (count_subs < len)
	{
		subs[count_subs] = s[start + count_subs];
		count_subs++;
	}
	subs[len] = '\0';
	return (subs);
}
