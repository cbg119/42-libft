/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 21:26:22 by cbagdon           #+#    #+#             */
/*   Updated: 2019/02/12 21:44:44 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len;
	char			*string;

	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(string = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	ft_strcpy(string, s1);
	ft_strlcat(string, s2, len + 1);
	return (string);
}
