/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 15:52:05 by seantoni          #+#    #+#             */
/*   Updated: 2023/10/23 00:16:54 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fm_write_comb2(char w1, char w2, char w3, char w4)
{
	write(1, &w1, 1);
	write(1, &w2, 1);
	write(1, " ", 1);
	write(1, &w3, 1);
	write(1, &w4, 1);
	if (!(w1 == '9' && w2 == '8' && w3 == '9' && w4 == '9'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	fm_log_comb2(int i, int i0, int i1)
{
	int	ia[3];

	if (i < 10)
	{
		ia[0] = 0;
		ia[1] = i;
	}
	if (i >= 10)
	{
		ia[0] = (i / 10);
		ia[1] = (i % 10);
	}
	while (ia[0] < 10)
	{
		fm_write_comb2(i0 + '0', i1 + '0', ia[0] + '0', ia[1] + '0');
		ia[1]++;
		if (ia[1] == 10)
		{
			ia[1] = 0;
			ia[0]++;
		}
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	ia[3];

	i = 0;
	ia[0] = 0;
	ia[1] = 0;
	while (ia[0] < 10)
	{
		fm_log_comb2(i + 1, ia[0], ia[1]);
		ia[1]++;
		if (ia[1] == 10)
		{
			ia[1] = 0;
			ia[0]++;
		}
		i++;
	}
}
