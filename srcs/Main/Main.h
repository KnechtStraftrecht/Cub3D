/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: KnechtStrafrecht <KnechtStrafrecht@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 21:10:57 by hkullert          #+#    #+#             */
/*   Updated: 2026/02/21 14:36:20 by KnechtStraf      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
	#define MAIN_H

#define WIDTH 1920
#define HEIGHT 1080
#define MOVESPEED 0,02
#define ROTATIONSPEED 0,01
#define FOV 66
#define ESC 0xff1b
#define W 0x0057
#define w 0x0077
#define A 0x0041
#define a 0x0061
#define S 0x0053
#define s 0x0073
#define D 0x0044
#define d 0x0064
#define ArUP 0xff52
#define ArDOWN 0xff54
#define ArLEFT 0xff51
#define ArRIGHT 0xff53

#include "Parsing.h"
#include "TestFunctions.h"
#include "GameData.h"

#endif
