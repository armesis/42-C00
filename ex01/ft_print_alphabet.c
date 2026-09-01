/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aosman-m@student.42kocaeli.com.tr          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 13:37:47 by aosman-m          #+#    #+#             */
/*   Updated: 2026/09/01 14:27:36 by aosman-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 122)
	{
		write (1, &c, 1);
		c++;
	}
}
