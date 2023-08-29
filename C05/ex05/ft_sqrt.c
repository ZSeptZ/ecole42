/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzeggai <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:37:42 by zzeggai           #+#    #+#             */
/*   Updated: 2023/08/28 13:37:46 by zzeggai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		i;
	long	n;

	n = nb;
	i = 1;
	if (n < 0)
	{
		return (0);
	}
	while (i <= n / i)
	{
		if (i * i == n)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
