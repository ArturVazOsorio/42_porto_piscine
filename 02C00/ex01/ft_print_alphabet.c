/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikhain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 05:56:18 by nikhain           #+#    #+#             */
/*   Updated: 2025/07/29 04:21:34 by nikhain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 97;
	while (letter <= 122)
	{
		write (1, &letter, 1);
		letter++;
	}
}
/*	write(1, "\n", 2);
int	main(void)
{
	ft_print_alphabet();
}*/
