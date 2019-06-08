/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cycle_detector.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/17 11:21:00 by pacovali      #+#    #+#                 */
/*   Updated: 2019/04/17 11:21:00 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

int			cycle_detector(const t_list *list)
{
	t_list		*t_1;
	t_list		*t_2;

	if (list->next == NULL)
		return (0);
	t_2 = list->next;
	if (t_2 == list || t_2->next == list || t_2->next == t_2)
		return (1);
	while (t_2->next)
	{
		t_1 = (t_list*)list;
		if (t_1->next == list || t_1->next == t_1)
			return (1);
		while (t_1->next != t_2)
		{
			if (t_1 == t_2 || t_1->next == t_1 || t_2->next == t_1)
				return (1);
			t_1 = t_1->next;
		}
		t_2 = t_2->next;
		if (t_1 == t_2 || t_2->next == t_2 || t_2->next == t_1)
			return (1);
	}
	return (0);
}
