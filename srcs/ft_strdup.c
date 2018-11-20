/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbagdon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 00:44:48 by cbagdon           #+#    #+#             */
/*   Updated: 2018/11/20 00:56:52 by cbagdon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strdup(char *str)
{
    int     i;
    int     str_size;
    char    *new_str;

    str_size = 0;
    while (str[str_size])
        str_size++;
    if (!(new_str = malloc(sizeof(char) * str_size + 1)))
        return (NULL);
    i = -1;
    while (++i < str_size)
        new_str[i] = str[i];
    new_str[i] = '\0';
    return (new_str);
}
