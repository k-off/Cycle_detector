/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/17 11:21:00 by pacovali      #+#    #+#                 */
/*   Updated: 2019/04/17 11:21:00 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>

int		main(void)
{
	t_list t_1;
	t_list t_2;
	t_list t_3;
	t_list t_4;
	t_list t_5;

	t_1.next = &t_2;
	t_2.next = &t_3;
	t_3.next = &t_4;
	t_4.next = &t_5;
	t_5.next = NULL;
	if (cycle_detector(&t_1) == 1)
		printf("Cycle FOUND.\n");
	else
		printf("Cycle NOT FOUND.\n");
	return (0);
}
