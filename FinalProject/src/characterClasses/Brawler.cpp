#include "Brawler.h"

const std::string Brawler::m_class_name = "Brawler";
const std::string Brawler::m_class_description = "Brawler Description Here";
const Class_id Brawler::m_class_id = brawler_id;

Brawler::Brawler(const int &level)
	: CharacterClass(level) { }

Brawler::~Brawler() { }
