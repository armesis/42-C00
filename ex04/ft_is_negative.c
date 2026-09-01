/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosman-m@student.42kocaeli.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:23:25 by aosman-m          #+#    #+#             */
/*   Updated: 2026/09/01 16:07:13 by aosman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	_p;
	char	_n;

	_p = 'P';
	_n = 'N';
	if (n < 0)
	{
		write(1, &_n, 1);
	}
	else
	{
		write(1, &_p, 1);
	}
}
