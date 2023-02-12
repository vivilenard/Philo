/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karllenard <karllenard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:42:19 by karllenard        #+#    #+#             */
/*   Updated: 2023/02/12 22:42:37 by karllenard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "existentialism.h"

void *philothread()
{
    printf("hi\n");
    return (NULL);
}

int cometothetable(t_struct *s)
{
    int i;

    i = -1;
    while (++i != s->number)
    {
        if (pthread_create(&s->thread_id, NULL, philothread, NULL) != 0)
            return (-1);
    }
    return (0);
}

int agreement(t_struct *s)
{
    int i;

    i = -1;
    while (++i != s->number)
    {
        if (pthread_join(s->thread_id, NULL) != 0)
            return (-1);
    }
    return (0);
}