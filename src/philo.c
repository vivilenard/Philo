/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:42:19 by karllenard        #+#    #+#             */
/*   Updated: 2023/02/13 16:31:42 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "existentialism.h"

void eat()
{}
void think()
{}
void sleeep()
{}

void *philothread(void *ptr)
{
	t_struct	*s;
	
	s = (struct s_struct *)ptr;
	pthread_mutex_lock(&s->lock);
	s->count++;
	pthread_mutex_unlock(&s->lock);
	while (1)
	{
		eat();
		sleeep();
		think();
		break;
	}
	
	return (NULL);
}

int cometothetable(t_struct *s)
{
	int	i;

	//printf("hallo\n");
	printf("COUNTER %d\n", s->count);
	i = -1;
	while (++i != s->number)
	{
		if (pthread_create(&s->philo[i].tid, NULL, philothread, s) != 0)
			return (-1);
	}
	usleep (100000);
	printf("COUNTER %d\n", s->count);
	return (0);
}

int agreement(t_struct *s)
{
	int	i;

	i = -1;
	while (++i != s->number)
	{
		if (pthread_join(s->philo[i].tid, NULL) != 0)
			return (-1);
	}
	return (0);
}