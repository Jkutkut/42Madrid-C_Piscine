/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   void_puntero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:57:09 by jre-gonz          #+#    #+#             */
/*   Updated: 2021/12/15 18:57:27 by jre-gonz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>


char * k;

int suma (int a , int b)
{



	return a + b;
}

typedef struct s_list
{
	void  *content;
	struct s_list * next;
	int(*f)(int, int);

} t_list;


int main ()
{
	int b = 42;
	int d = 21;

	t_list a;
	t_list c;

	char *str = malloc(12 * sizeof(char));

	str[0] = '\0';


	a.f = &suma;
	a.content = &b;
	c.content = &d;
	a.next = & c;

	printf("%d\n", a.f(  *((int *)a.content), *((int *)a.next->content)) );

	while (1);
}
