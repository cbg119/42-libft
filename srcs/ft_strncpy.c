/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christian <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 20:48:38 by christian         #+#    #+#             */
/*   Updated: 2018/11/20 20:55:54 by christian        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/libft.h"

char    *ft_strncpy(char *dest, const char *src, size_t n)
{
    unsigned int     i;

    i = 0;
    while (i < n)
    {
        if (src[i])
            dest[i] = src[i];
        else
            dest[i] = '\0';
        i++;
    }
    return (dest);
}
