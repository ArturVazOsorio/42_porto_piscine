/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 05:32:37 by nikhain           #+#    #+#             */
/*   Updated: 2025/07/30 04:48:21 by nikhain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	pos1;
	char	pos2;
	char	pos3;

	pos1 = '0';
	while (pos1 <= '7')
	{
		pos2 = pos1 + 1;
		while (pos2 <= '8')
		{
			pos3 = pos2 + 1;
			while (pos3 <= '9')
			{
				write(1, &pos1, 1);
				write(1, &pos2, 1);
				write(1, &pos3, 1);
				if (!(pos1 == '7' && pos2 == '8' && pos3 == '9'))
					write(1, ", ", 2);
				pos3++;
			}
			pos2++;
		}
		pos1++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
