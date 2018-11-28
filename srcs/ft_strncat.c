/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christian <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 18:50:56 by christian         #+#    #+#             */
/*   Updated: 2018/11/27 19:04:15 by christian        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char    *ft_strncat(char *dest, const char *src, size_t n)
{
    unsigned int     i;
    unsigned int    dest_size;

    i = 0;
    dest_size = 0;
    while (dest[dest_size])
        dest_size++;
    while(i < n && src[i])
    {
        dest[dest_size] = src[i];
        dest_size++;
        i++;
    }
    dest[dest_size] = '\0';
    return (dest);
}
