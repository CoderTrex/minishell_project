/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <minjinki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:11:08 by minjinki          #+#    #+#             */
/*   Updated: 2023/03/20 17:04:46 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

/*
** init_env.c
*/
t_bool	init_env(char ***env);
t_bool	copy_env(char ***env);

/*
** parse_env.c
*/
t_bool	parse_env(void);

#endif