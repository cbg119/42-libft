/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/12 11:31:04 by cbagdon           #+#    #+#             */
/*   Updated: 2019/02/12 13:57:58 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while (*c1 && *c2 && i < n)
	{
		if (*c1 != *c2)
			return ((*c1 - *c2));
		c1++;
		c2++;
		i++;
	}
	if ((!*c2 && *c1) || (*c2 && !*c1))
		return ((*c1 - *c2));
	return (0);
}
