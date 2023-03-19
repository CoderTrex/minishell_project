/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjinki <minjinki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:25:20 by minjinki          #+#    #+#             */
/*   Updated: 2023/03/19 13:50:24 by minjinki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_H
# define PARSE_H

/*
** tokenize.c
*/
void	parse(char *cmd);

/*
** quotes.c
*/
void	deal_quotes(char *cmd);

/*
** spaces.c
*/
void	deal_spaces(void);

#endif