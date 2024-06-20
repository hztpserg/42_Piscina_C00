/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:29:28 by seantoni          #+#    #+#             */
/*   Updated: 2023/10/23 00:16:02 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fm_write_comb(char w1, char w2, char w3)
{
	write(1, &w1, 1);
	write(1, &w2, 1);
	write(1, &w3, 1);
}

void	fm_log_comb(int l1, int l2, int l3)
{
	fm_write_comb(l1 + '0', l2 + '0', l3 + '0');
	if (!(l1 == 7 && l2 == 8 && l3 == 9))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	c1;
	int	c2;
	int	c3;

	c1 = 0;
	while (c1 <= 7)
	{
		c2 = c1 + 1;
		while (c2 <= 8)
		{
			c3 = c2 + 1;
			while (c3 <= 9)
			{
				fm_log_comb(c1, c2, c3);
				c3++;
			}
			c2++;
		}
		c1++;
	}
}
