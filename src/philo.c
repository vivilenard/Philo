/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karllenard <karllenard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:42:19 by karllenard        #+#    #+#             */
/*   Updated: 2023/02/12 23:10:41 by karllenard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "existentialism.h"

int initphilo(t_struct *philo)
{
    philo = malloc(sizeof(t_struct));
    if (!philo)
        return (-1);
    printf("lala\n");
    return (0);
}

void eat()
{}
void think()
{}
void sleep()
{}

//hier bin ich
void *philothread(void *ptr)
{
    t_struct *s;
    t_struct *philo;
    
    printf("hi\n");
    s = (struct s_struct *)ptr;
    philo = NULL;
    if (initphilo(philo) == -1)
        return ((void *)-1);
    while (1)
    {
        eat();
        sleep();
        think();
    }
    
    return (NULL);
}

int cometothetable(t_struct *s)
{
    int i;

    i = -1;
    while (++i != s->number)
    {
        if (pthread_create(&s->thread_id, NULL, philothread, s) != 0)
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