
#ifndef TRIGGERED_H_
#define TRIGGERED_H_
#include "ability.h"

enum class Condition{EndOfTurn, StartOfTurn, MinionEnterPlay, MinionExitPlay};

class Triggered : public Ability {
	Condition condition;
public:
	Triggered(std::string description, Condition condition);
	~Triggered() = default;
	Condition getCondition() const;
	void setCondition(Condition condition);
	bool usedOn(Player &player1, Player &player2, int owner, int boardPos, int enterOrExit, Condition condition);
};


#endif /* TRIGGERED_H_ */
