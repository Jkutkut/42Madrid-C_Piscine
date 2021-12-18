/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:36:37 by jre-gonz          #+#    #+#             */
/*   Updated: 2021/12/16 18:52:57 by jre-gonz         ###   ########.fr       */
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

char	*p(char *str)
{
	int		i;
	int 	l;
	char	swap;

	i = 0;
	l = ft_strlen(str) - 1;
	while (i < l)
	{
		swap = str[i];
		str[i] = str[l];
		str[l] = swap;
		i++;
		l--;
	}
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
	return (str);
}


#include <stdio.h>

int	main(void)
{
	char str[100] = "holaquetal";

	p(str);

	printf("%s\n", str);
}
