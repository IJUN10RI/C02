/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 22:28:28 by msarigul          #+#    #+#             */
/*   Updated: 2022/02/16 22:41:19 by msarigul         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int		i;

	i = 0 ;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' || (str[i] <= 'Z' && str[i] >= 'a') || str[i] <= 'z')
			return (1);
		else if (str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}
