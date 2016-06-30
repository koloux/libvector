/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/30 18:06:48 by nhuber            #+#    #+#             */
/*   Updated: 2016/06/30 19:01:31 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
#define VECTOR_H
#include <stdio.h>

#define VECTOR_CAPACITY_INIT 4

typedef struct	s_vector
{
	void		**items;
	int			capacity;
	int			size;

	void		(*resize)(struct s_vector *);
}				t_vector;

t_vector		*vector_construct(int init_capacity);
void			*items_cpy(void *dst, const void *src, int size);

#endif
