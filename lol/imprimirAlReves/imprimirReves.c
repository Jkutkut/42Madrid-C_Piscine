/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:36:37 by jre-gonz          #+#    #+#             */
/*   Updated: 2021/12/16 18:49:13 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	p(char *str)
{
	int		l;

	l = ft_strlen(str) - 1;
	while (l >= 0)
	{
		write(1, &str[l--], 1);
	}
	write(1, "\n", 1);
}


#include <stdio.h>

int	main(void)
{
	char str[100] = "holaquetal";

	p(str);

	printf("%s\n", str);
}
