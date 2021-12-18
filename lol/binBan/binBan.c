/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binBan.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:57:35 by jre-gonz          #+#    #+#             */
/*   Updated: 2021/12/16 19:17:48 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BIN "fis"
#define BAN "fush"

void	print_nbr(int nb)
{
	if (nb >= 10)
		print_nbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}


void	binBan(int	min, int max)
{
	while (min <= max)
	{
		if (min % 3 == 0)
			write(1, BIN, 3);
		if (min % 5 == 0)
			write(1, BAN, 4);
		if (min % 3 != 0 && min % 5 != 0)
			print_nbr(min);
		min++;
		write(1, "\n", 1);
	}
}


int	main(void)
{
	binBan(1, 100);
}
