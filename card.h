#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <string>

class Card{
	std::string name;
	int cost;

     public:
	int atk;
	int def;
	Card(std::string name, int cost);
	virtual ~Card() = default;
	std::string getName() const;
	void setName(std::string name);
	int getCost() const;
	void setCost(int cost);
	int getAtk();
	void setAtk(int atk);
	int getDef();
	void setDef(int def);
};

#endif
