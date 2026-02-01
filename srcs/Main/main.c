/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:44:43 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/01 22:05:22 by KnechtStraf      ###   ########.fr       */
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
	MlxVars		MlxVars;

	if (argc > 2 || argc < 2)
		E_ArgumentCount();
	InitializeMap(&GameMap);
	InitializeTextures(&GameTextures);
	InitializeMlx(&MlxVars);
	InputFileParser(argv[1], &GameMap, &GameTextures, &MlxVars);
	PrintTextures(&GameTextures);
	PrintMap(&GameMap);
	FreeMap(&GameMap);
	FreeTextures(&GameTextures);
	return (SUCCESS);
}
