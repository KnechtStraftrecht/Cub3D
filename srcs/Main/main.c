/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkullert <hkullert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:44:43 by hkullert          #+#    #+#             */
/*   Updated: 2026/01/20 15:03:04 by hkullert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.h"
#include "Textures.h"
#include "Parsing.h"
#include "TestFunctions.h"

int	main(int argc, char **argv)
{
	Map			GameMap;
	Textures	GameTextures;

	InputFileParser(argv[1], &GameMap, &GameTextures);
	PrintTextures(&GameTextures);
	PrintMap(&GameMap);
	return (0);
}
