/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:40:33 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/13 20:58:34 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	count_s1;
	size_t	count_copy;
	size_t	mem;
	size_t	length_s1;

	length_s1 = ft_strlen(s1);
	count_s1 = 0;
	count_copy = 0;
	mem = (length_s1 + 1) * sizeof(char);
	if (s1 == NULL)
		return (NULL);
	copy = (char *)malloc(mem);
	if (copy == NULL)
		return (NULL);
	while (s1[count_s1] != '\0')
	{
		copy[count_copy] = s1[count_s1];
		count_copy++;
		count_s1++;
	}
	copy[count_copy] = '\0';
	return (copy);
}
