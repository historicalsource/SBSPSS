/*=========================================================================

	npcdata.cpp

	Author:		CRB
	Created:
	Project:	Spongebob
	Purpose:

	Copyright (c) 2000 Climax Development Ltd

===========================================================================*/

#ifndef __ENEMY_NPC_H__
#include "enemy\npc.h"
#endif

#ifndef __ENEMY_NPLATFRM_H__
#include "enemy\nplatfrm.h"
#endif

#ifndef	__PLAYER_PLAYER_H__
#include "player\player.h"
#endif

#ifndef	__ANIM_CLAM_HEADER__
#include <ACTOR_CLAM_ANIM.h>
#endif

#ifndef	__ANIM_SHARKSUB_HEADER__
#include <ACTOR_SHARKSUB_ANIM.h>
#endif


CNpcFriend::NPC_FRIEND_DATA CNpcFriend::m_data[NPC_FRIEND_UNIT_TYPE_MAX] =
{
	{	// NPC_SANDY_CHEEKS
		//NPC_FRIEND_INIT_DEFAULT,
		//NPC_FRIEND_SENSOR_NONE,
		NPC_FRIEND_MOVEMENT_STATIC,
		//NPC_FRIEND_MOVEMENT_MODIFIER_NONE,
		//NPC_FRIEND_CLOSE_NONE,
		//NPC_FRIEND_TIMER_NONE,
		true,
		3,
		128,
		false,
		DAMAGE__HIT_ENEMY,
	},

	{	// NPC_GARY
		//NPC_FRIEND_INIT_DEFAULT,
		//NPC_FRIEND_SENSOR_NONE,
		NPC_FRIEND_MOVEMENT_GARY,
		//NPC_FRIEND_MOVEMENT_MODIFIER_NONE,
		//NPC_FRIEND_CLOSE_NONE,
		//NPC_FRIEND_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__HIT_ENEMY,
	},
};

CNpcPlatform::NPC_PLATFORM_DATA CNpcPlatform::m_data[NPC_PLATFORM_TYPE_MAX] =
{
	{	// NPC_LINEAR_PLATFORM
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_PLATFORM_MOVEMENT_FIXED_PATH,
		3,
		//512,
		2048,
		true,
		DAMAGE__NONE,
		0,
		NPC_PLATFORM_INFINITE_LIFE,
	},

	{	// NPC_CIRCULAR_PLATFORM
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_PLATFORM_MOVEMENT_FIXED_CIRCULAR,
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		NPC_PLATFORM_INFINITE_LIFE,
	},

	{	// NPC_BUBBLE_PLATFORM
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_PLATFORM_MOVEMENT_BUBBLE,
		3,
		128,
		true,
		DAMAGE__NONE,
		0,
		NPC_PLATFORM_FINITE_LIFE,
	},
};

CNpcEnemy::NPC_DATA CNpcEnemy::m_data[NPC_UNIT_TYPE_MAX] =
{
	{	// NPC_FALLING_ITEM
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_FALLING_ITEM_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_FALLING_ITEM_FALL,
		NPC_TIMER_NONE,
		false,
		8,
		128,
		false,
		DAMAGE__SQUASH_ENEMY,
		0,
	},

	{	// NPC_FISH_HOOK
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_FISH_HOOK,
		NPC_SENSOR_FISH_HOOK_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_FISH_HOOK_RISE,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		false,
		DAMAGE__NONE,
		0,
	},

	{	// NPC_DUST_DEVIL
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_RETURNING_HAZARD,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_RETURNING_HAZARD,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__NONE,
		0,
	},

	{	// NPC_PENDULUM
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_PENDULUM,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_PENDULUM,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__HIT_ENEMY,
		0,
	},

	{	// NPC_FIREBALL
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_FIREBALL,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIREBALL,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		40,
		2048,
		false,
		DAMAGE__BURN_ENEMY,
		0,
	},

	{	// NPC_SAW_BLADE
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_RETURNING_HAZARD,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_RETURNING_HAZARD,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__HIT_ENEMY,
		0,
	},

	{	// NPC_SMALL_JELLYFISH_1
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_JELLYFISH_USER_CLOSE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_JELLYFISH,
		NPC_CLOSE_JELLYFISH_EVADE,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		false,
		DAMAGE__SHOCK_ENEMY,
		16,
	},

	{	// NPC_SMALL_JELLYFISH_2
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_JELLYFISH_USER_CLOSE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_JELLYFISH,
		NPC_CLOSE_JELLYFISH_EVADE,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		false,
		DAMAGE__SHOCK_ENEMY,
		32,
	},

	{	// NPC_ANEMONE_1
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_ANEMONE_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_ANEMONE_1_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		false,
		DAMAGE__NONE,
		16,
	},

	{	// NPC_ANEMONE_2
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_ANEMONE_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_ANEMONE_2_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		false,
		DAMAGE__NONE,
		32,
	},

	{	// NPC_ANEMONE_3
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_ANEMONE_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_ANEMONE_3_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		false,
		DAMAGE__NONE,
		48,
	},

	{	// NPC_SKELETAL_FISH
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_GENERIC_USER_VISIBLE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_SKELETAL_FISH_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__BITE_ENEMY,
		0,
	},

	{	// NPC_CLAM_JUMP
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSNAPUP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_CLAM_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_CLAM_JUMP_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		false,
		DAMAGE__HIT_ENEMY,
		0,
	},

	{	// NPC_CLAM_STATIC
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSIDESNAP,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_CLAM_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_CLAM_SNAP_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		false,
		DAMAGE__HIT_ENEMY,
		0,
	},

	{	// NPC_SQUID_DART
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		5,
		256,
		false,
		DAMAGE__HIT_ENEMY,
		16,
	},

	{	// NPC_FISH_FOLK
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_FISH_FOLK,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_FISH_FOLK,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		2,
		2048,
		false,
		DAMAGE__NONE,
		0,
	},

	{	// NPC_PRICKLY_BUG
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		1,
		128,
		false,
		DAMAGE__POISON_ENEMY,
		48,
	},

	{	// NPC_SEA_SNAKE
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		256,
		false,
		DAMAGE__SHOCK_ENEMY,
		56,
	},

	{	// NPC_PUFFA_FISH
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		2,
		128,
		false,
		DAMAGE__HIT_ENEMY,
		64,
	},

	{	// NPC_ANGLER_FISH
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		1,
		128,
		false,
		DAMAGE__NONE,
		0,
	},

	{	// NPC_HERMIT_CRAB
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		2,
		128,
		false,
		DAMAGE__HIT_ENEMY,
		0,
	},

	{	// NPC_MINE
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		false,
		DAMAGE__HIT_ENEMY,
		0,
	},

	{	// NPC_BOOGER_MONSTER
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_BOOGER_MONSTER_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_BOOGER_MONSTER_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		false,
		DAMAGE__BITE_ENEMY,
		0,
	},

	{	// NPC_SPIDER_CRAB
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_SPIDER_CRAB_USER_CLOSE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_SPIDER_CRAB_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__PINCH_ENEMY,
		0,
	},

	{	// NPC_EYEBALL
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_EYEBALL_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_EYEBALL_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		false,
		DAMAGE__HIT_ENEMY,
		32,
	},

	{	// NPC_BABY_OCTOPUS
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_OCTOPUS,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		2,
		512,
		false,
		DAMAGE__HIT_ENEMY,
		0,
	},

	{	// NPC_ZOMBIE_FISH_FOLK
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_FISH_FOLK,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_FISH_FOLK,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		2,
		2048,
		false,
		DAMAGE__HIT_ENEMY,
		16,
	},

	{	// NPC_NINJA_STARFISH
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NINJA_STARFISH_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_GENERIC_USER_SEEK,
		NPC_TIMER_NONE,
		false,
		3,
		64,
		false,
		DAMAGE__HIT_ENEMY,
		16,
	},

	{	// NPC_GHOST
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FIXED_PATH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		2,
		128,
		false,
		DAMAGE__HIT_ENEMY,
		0,
	},

	{	// NPC_GHOST_PIRATE
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_GHOST_PIRATE,
		NPC_SENSOR_GHOST_PIRATE_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_GHOST_PIRATE_ATTACK,
		NPC_TIMER_NONE,
		false,
		0,
		128,
		false,
		DAMAGE__HIT_ENEMY,
		160,
	},

	{	// NPC_FLAMING_SKULL
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_FLAMING_SKULL,
		NPC_SENSOR_FLAMING_SKULL_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_FLAMING_SKULL_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		false,
		DAMAGE__BURN_ENEMY,
		16,
	},

	{	// NPC_SHARK_MAN
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_GENERIC_USER_VISIBLE,
		NPC_MOVEMENT_FIXED_PATH_WALK,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_SHARK_MAN_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__BITE_ENEMY,
		16,
	},

	{	// NPC_OIL_BLOB
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_DEFAULT,
		NPC_SENSOR_OIL_BLOB_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_GENERIC_USER_SEEK,
		NPC_TIMER_NONE,
		false,
		3,
		64,
		false,
		DAMAGE__HIT_ENEMY,
		0,
	},

	{	// NPC_SKULL_STOMPER
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_SKULL_STOMPER,
		NPC_SENSOR_SKULL_STOMPER_USER_CLOSE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_SKULL_STOMPER_ATTACK,
		NPC_TIMER_NONE,
		false,
		5,
		2048,
		false,
		DAMAGE__SQUASH_ENEMY,
		0,
	},

	{	// NPC_MOTHER_JELLYFISH
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_MOTHER_JELLYFISH,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_MOTHER_JELLYFISH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_MOTHER_JELLYFISH_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		256,
		false,
		DAMAGE__SHOCK_ENEMY,
		256,
	},

	{	// NPC_SUB_SHARK
		ACTORS_SHARKSUB_A3D,
		ANIM_SHARKSUB_SHARKSUBSWIM,
		NPC_INIT_SUB_SHARK,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_SUB_SHARK,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_SUB_SHARK_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__HIT_ENEMY,
		256,
	},

	{	// NPC_PARASITIC_WORM
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_PARASITIC_WORM,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_PARASITIC_WORM,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		128,
		false,
		DAMAGE__HIT_ENEMY,
		256,
	},

	{	// NPC_FLYING_DUTCHMAN
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_FLYING_DUTCHMAN,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_FLYING_DUTCHMAN,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_FLYING_DUTCHMAN_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__HIT_ENEMY,
		256,
	},

	{	// NPC_IRON_DOGFISH
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_IRON_DOGFISH,
		NPC_SENSOR_IRON_DOGFISH_USER_CLOSE,
		NPC_MOVEMENT_IRON_DOGFISH,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_IRON_DOGFISH_ATTACK,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__HIT_ENEMY,
		256,
	},

	{	// NPC_PARASITIC_WORM_SEGMENT
		ACTORS_CLAM_A3D,
		ANIM_CLAM_CLAMSHUT,
		NPC_INIT_PARASITIC_WORM_SEGMENT,
		NPC_SENSOR_NONE,
		NPC_MOVEMENT_STATIC,
		NPC_MOVEMENT_MODIFIER_NONE,
		NPC_CLOSE_NONE,
		NPC_TIMER_NONE,
		false,
		3,
		2048,
		false,
		DAMAGE__HIT_ENEMY,
		256,
	},
};