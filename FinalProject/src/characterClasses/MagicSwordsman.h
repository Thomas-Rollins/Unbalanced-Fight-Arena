#pragma once
#include "CharacterClass.h"

class MagicSwordsman :
	public CharacterClass
{
public:
	MagicSwordsman(const int &level);

	~MagicSwordsman();

	const std::string get_class_name() const { return m_class_name; }
	const Class_id get_class_id() const { return m_class_id; }

private:
	static const std::string m_class_name;
	static const std::string m_class_description;
	static const Class_id m_class_id;
};

