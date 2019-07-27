#ifndef SPELL_H
#define SPELL_H
#include <iostream>
#include <vector>
#include "card.h"
#include "activated.h"

class Minion;
class Player;

class Spell final : public Card, public Activated {
        public:
        Spell(std::string name, std::string description, int cost);
    	virtual bool usedOn(Player &player) override;
    	virtual bool usedOn(Player &player, int pos) override;
    	bool usedOn(Player &player1, Player &player2, int pos);
};


#endif
