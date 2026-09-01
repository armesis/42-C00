/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosman-m@student.42kocaeli.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 15:15:11 by aosman-m          #+#    #+#             */
/*   Updated: 2026/09/01 15:21:13 by aosman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(void);

void	ft_print_number(void)
{
	int	d;

	d = 0;
	while (d >= 9)
	{
		write(1, &d, 1);
	}
}
