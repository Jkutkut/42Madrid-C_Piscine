/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jre-gonz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:26:39 by jre-gonz          #+#    #+#             */
/*   Updated: 2021/12/16 17:37:54 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


char	*delreves(char	*str)
{
	int	i;
	int	l;
	char *str_rev;

	l = ft_strlen(str);
	str_rev = malloc ((l + 1) * sizeof(char));
	i = 0;
	while (i < l)
	{
		str_rev[i] = str[l - 1 - i];
		i++;
	}
	str_rev[i] = '\0';
	return (str_rev);
}

#include <stdio.h>

int main(void)
{
	printf("%s\n", delreves("hola caracola que tal estas"));
	printf("'%s'\n", delreves(""));
	printf("%s\n", delreves("que no que si te lo hace con "));
}

