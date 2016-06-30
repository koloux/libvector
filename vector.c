/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhuber <nhuber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/30 18:41:16 by nhuber            #+#    #+#             */
/*   Updated: 2016/06/30 18:59:31 by nhuber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

static void	vector_resize(t_vector *this)
{
	void	**elem;

	if (this->size >= this->capacity)
	{
		if ((elem = (void **)malloc(sizeof(void *) *
						this->capacity * 2)) != NULL)
		{
			//memcpy = items_cpy;
			items_cpy(elem, this->items, (this->capacity * sizeof(void *)));
			free(this->items);
			this->capacity *= 2;
			this->items = elem;
		}
	}
}

t_vector	*vector_construct(int init_capacity)
{
	t_vector	*v;
	int			c;

	c = init_capacity ? init_capacity : VECTOR_CAPACITY_INIT;
	if (!(v = (t_vector *)malloc(sizeof(t_vector))))
		return (NULL);
	if (!(v->items = (void **)malloc(sizeof(void *) * c)))
		return(NULL);
	v->capacity = c;
	v->size = 0;
	v->resize = &vector_resize;
	return (v);
}
