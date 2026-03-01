/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:44:43 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/23 18:18:35 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Main.h"

void	Render(GameData *Data)
{
	
}

int	HandleKeypress(int Keycode, GameData *Data)
{
	if (Keycode == W)
		MovementStart(Data->Player, 'W');
	else if (Keycode == A)
		MovementStart(Data->Player, 'A');
	else if (Keycode == S)
		MovementStart(Data->Player, 'S');
	else if(Keycode == D)
		MovementStart(Data->Player, 'D');
	else if (Keycode == ArLEFT)
		MovementStart(Data->Player, 'L');
	else if (Keycode == ArRIGHT)
		MovementStart(Data->Player, 'R');
	else if (Keycode == ESC)
		FreeGameData(Data);
	Render(Data);
}

int	HandleKeyrelease(int Keycode, GameData *Data)
{
	if (Keycode == W)
		MovementStop(Data->Player, 'W');
	else if (Keycode == A)
		MovementStop(Data->Player, 'A');
	else if (Keycode == S)
		MovementStop(Data->Player, 'S');
	else if(Keycode == D)
		MovementStop(Data->Player, 'D');
	else if (Keycode == ArLEFT)
		MovementStop(Data->Player, 'L');
	else if (Keycode == ArRIGHT)
		MovementStop(Data->Player, 'R');
	Render(Data);
}

int	ExitCub3D(GameData *Data)
{
	FreeGameData(Data);
}

int	main(int argc, char **argv)
{
	Map			GameMap;
	Textures	GameTextures;
	MlxVars		MlxVars;
	GameData	Data;
	Player		Player;

	if (argc > 2 || argc < 2)
		E_ArgumentCount();
	InitializeMap(&GameMap);
	InitializeTextures(&GameTextures);
	InitializeMlx(&MlxVars);
	InputFileParser(argv[1], &GameMap, &GameTextures, &MlxVars);
	InitializePlayer(&Player, &Map);
	Data = InitializeData(&MlxVars, &GameMap, &GameTextures, &Player);
	PrintTextures(&GameTextures);
	PrintMap(&GameMap);
	mlx_hook(Data.MlxVars->Window, 2, 1L<<0, &HandleKeypress, &Data);
	mlx_hook(Data.MlxVars->Window, 3, 1L<<1, &HandleKeyrelease, &Data);
	mlx_hook(Data.MlxVars->Window, 17, 0, &ExitCub3D, &Data);
	mlx_loop(Data.MlxVars->Connection);
	return (SUCCESS);
}
