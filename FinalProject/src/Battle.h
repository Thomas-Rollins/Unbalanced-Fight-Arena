#pragma once

#include <vector>

#include "Character.h"
#include "BalancingDefinitions.h"

#ifndef NULL_INDEX
#define NULL_INDEX -1
#endif

class Battle
{
public:

	Battle(const std::vector<Character*> team_1, const std::vector<Character*> team_2);

	~Battle();

	//Accessors
	const std::vector<Character*> get_turn_order() const { return m_turn_order; }

	// Primary Control
	bool main_control();

	//Misc functions
	void print_turn_order();
	template <typename T>
	void move_item_to_back(std::vector<T> &vector, size_t itemIndex);
	template <typename T>
	int find_vector_index(std::vector<T> &vector, T element);

private:
	
	void update_turn_order();
	void apply_buffs_debuffs(Character* target, const Ability* ability, bool friendly);
	void execute_action(const Ability* ability, Character* target);
	bool check_battle_over();

	float get_modifiers(const Ability* ability);
	float get_elemental_dmg_modifer(const Ability* ability, Character* target);
	bool isCritAttack();
	Character* get_target();
	Character* get_target(const Ability* ability);
	Character* get_target(std::vector<Character*> team, std::vector<Character*> original_targets, bool isNPC);
	
	void print_messages();
	void remove_dead(std::vector<Character*> &team, bool broadcast);
	bool team_dead(std::vector<Character*> &team);
	
	std::vector<Character*> m_team_1, m_team_2;
	std::vector<Character*> m_turn_order;
	std::vector<Character*> targets;
	std::vector<std::string> m_message_queue;
};

