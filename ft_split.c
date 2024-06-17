/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:00:12 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/13 20:58:21 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(const char *s, const char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i++] != c && (s[i] == c || s[i] == '\0'))
			j++;
	}
	return (j);
}

static char	**free_all(char **str, int n)
{
	while (n > 0)
		free(str[n--]);
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	size_t	n;

	str = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!str)
		return (0);
	n = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && (int)len++ > -1)
				s++;
			str[n] = ft_substr(s - len, 0, len);
			if (!str[n])
				return (free_all(str, n));
			n++;
		}
		else
			s++;
	}
	str[n] = NULL;
	return (str);
}
