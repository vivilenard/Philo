/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karllenard <karllenard@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:40:49 by karllenard        #+#    #+#             */
/*   Updated: 2023/02/12 23:08:56 by karllenard       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "existentialism.h"

t_struct *initstruct(char **argv, int number)
{
    pthread_t thread_id;
    t_struct *s;
    
    s = malloc(sizeof(t_struct));
    thread_id = NULL;
    s->number = number;
    s->t_die = ft_atoi(argv[2]);
    s->t_eat = ft_atoi(argv[3]);
    s->t_sleep = ft_atoi(argv[4]);
    s->thread_id = thread_id;
    return (s);
}
