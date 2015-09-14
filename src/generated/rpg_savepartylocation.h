/* !!!! GENERATED FILE - DO NOT EDIT !!!! */

/*
 * Copyright (c) 2015 liblcf authors
 * This file is released under the MIT License
 * http://opensource.org/licenses/MIT
 */

#ifndef LCF_RPG_SAVEPARTYLOCATION_H
#define LCF_RPG_SAVEPARTYLOCATION_H

// Headers
#include <string>
#include "rpg_moveroute.h"

/**
 * RPG::SavePartyLocation class.
 */
namespace RPG {
	class SavePartyLocation {
	public:
		enum VehicleType {
			VehicleType_none = 0,
			VehicleType_skiff = 1,
			VehicleType_ship = 2,
			VehicleType_airship = 3
		};

		SavePartyLocation();

		bool active;
		int map_id;
		int position_x;
		int position_y;
		int direction;
		int sprite_direction;
		int anim_frame;
		int transparency;
		int remaining_step;
		int move_frequency;
		int layer;
		bool overlap_forbidden;
		int animation_type;
		bool lock_facing;
		int move_speed;
		MoveRoute move_route;
		bool move_route_overwrite;
		int move_route_index;
		bool move_route_repeated;
		bool sprite_transparent;
		int unknown_2f_overlap;
		int anim_paused;
		bool through;
		int stop_count;
		int anim_count;
		int max_stop_count;
		bool jumping;
		int begin_jump_x;
		int begin_jump_y;
		int unknown_47_pause;
		bool flying;
		std::string sprite_name;
		int sprite_id;
		int unknown_4b_sprite_move;
		int flash_red;
		int flash_green;
		int flash_blue;
		double flash_current_level;
		int flash_time_left;
		bool boarding;
		bool aboard;
		int vehicle;
		bool unboarding;
		int preboard_move_speed;
		int unknown_6c_menu_calling;
		int pan_state;
		int pan_current_x;
		int pan_current_y;
		int pan_finish_x;
		int pan_finish_y;
		int pan_speed;
		int encounter_steps;
		bool unknown_7d_encounter_calling;
		int map_save_count;
		int database_save_count;
	};
}

#endif
