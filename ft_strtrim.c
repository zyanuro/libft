/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 17:38:31 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 19:49:49 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	i = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[i]) && i != 0)
		i--;
	return (ft_substr((char *)s1, 0, i + 1));
}
