#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap : public FragTrap {
public:
	ScavTrap();
	ScavTrap(const ScavTrap &scap);
	~ScavTrap();
	void operator=(const ScavTrap & obj);

};

#endif

ScavTrap::ScavTrap(void)
	: Energy_points (50), Max_energy_points (50),
	Melee_attack_damage (20), Ranged_attack_damage (15),
	Armor_damage_reduction (3){
	std::cout << "FragTrap, constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << "FragTrap, destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &sca)
	: Name (sca.Name) {
	std::cout << "FragTrap, copy constructor called" << std::endl;
	Hit_points = sca.Hit_points;
	Max_hit_points = sca.Max_hit_points;
	Energy_points = sca.Energy_points;
	Max_energy_points = sca.Max_energy_points;
	Level = sca.Level;
	Melee_attack_damage = sca.Melee_attack_damage;
	Ranged_attack_damage = sca.Ranged_attack_damage;
	Armor_damage_reduction = sca.Armor_damage_reduction;
}

void ScavTrap::ScavTrap=(const ScavTrap & obj){
	Hit_points = obj.Hit_points;
	Max_hit_points = obj.Max_hit_points;
	Energy_points = obj.Energy_points;
	Max_energy_points = obj.Max_energy_points;
	Level = obj.Level;
	Melee_attack_damage = obj.Melee_attack_damage;
	Ranged_attack_damage = obj.Ranged_attack_damage;
	Armor_damage_reduction = obj.Armor_damage_reduction;
	// Name = obj.Name;
}