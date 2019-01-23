/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:40:51 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/08 16:26:41 by ccharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int str)
{
	if (str < 'a' || str > 'z')
	{
		if (str < 'A' || str > 'Z')
			return (0);
	}
	return (1);
}
