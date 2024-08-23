/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:55:54 by bepoisso          #+#    #+#             */
/*   Updated: 2024/08/23 14:39:32 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	total_size;

	dest = NULL;
	total_size = (ft_strlen(s1) + ft_strlen(s2) + 1);
	dest = malloc(sizeof(char) * total_size);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s1, total_size);
	ft_strlcat(dest, s2, total_size);
	return (dest);
}
