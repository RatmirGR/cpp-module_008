#include "Weapon.hpp"

Weapon::Weapon():_type(""){}

Weapon::Weapon(std::string type){
	this->_type = type;
}

Weapon::~Weapon(){}

void Weapon::setType(std::string type){
	this->_type = type;
}

const std::string &Weapon::getType( void ){
	const std::string& ref = this ->_type;
	return (ref);
}