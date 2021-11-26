#pragma once

#include "arkanoid.h"

// TODO: More levels?

static int brickMap[LEVELS][LINES_OF_BRICKS][BRICKS_PER_LINE] = {

	{ 0 }, // Empty level


	// LEVEL 1
	{
		3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3,
		4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4,
		1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1,
		2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,
		1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1
	},
	// LEVEL 2
	{
		1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1,
		2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,
		1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1,
		2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,
		5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 4, 3
	},
	// LEVEL 3
	{
		3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3,
		2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,
		3, 4, 3, 5, 5, 5, 5, 5, 5, 5, 5, 5, 3, 4, 3,
		2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,
		3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3, 4, 3
	},
	// LEVEL 4
	{
		1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1,
		2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,
		5, 5, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 5, 5,
		4, 3, 4, 5, 5, 5, 4, 3, 4, 5, 5, 5, 4, 3, 4,
		3, 4, 3, 4, 3, 4, 5, 5, 5, 4, 3, 4, 3, 4, 3
	},
	// LEVEL 5
	{
		5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,
		5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 2, 1,
		2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2,
		1, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5
	}
};