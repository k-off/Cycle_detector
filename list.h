/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/17 11:21:00 by pacovali      #+#    #+#                 */
/*   Updated: 2019/04/17 11:21:00 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct		s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

int					cycle_detector(const t_list *list);

#endif
