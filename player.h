
#ifndef PLAYER_H_
#define PLAYER_H_
/*
#include "board.h"
#include "hand.h"
#include "graveyard.h"
#include "deck.h"
#include "ritual.h"
*/
#include <string>
#include <memory>
#include <vector>



class Player {
	std::string name;
	std::vector<std::string> deck;
	/*
	int hp;
	int magic;
	std::string name;
	std::shared_ptr<Ritual> ritual;
	std::shared_ptr<Board> board;
	std::shared_ptr<Hand> hand;
	std::shared_ptr<Graveyard> gy;
	std::shared_ptr<Deck> deck;
	*/
public:
	Player(std::string name, std::vector<std::string> deck);
	std::string getName();
	std::vector<std::string> getDeck();
	/*
	Player(int hp, int magic, std::string name, std::shared_ptr<Ritual> ritual,
			std::shared_ptr<Board> board, std::shared_ptr<Hand> hand,
			std::shared_ptr<Graveyard> gy, std::shared_ptr<Deck> deck);
	~Player() = default;
	void castedBy(Ability& ability);
	void attackedBy(Minion& minion);
	*/
};




#endif /* PLAYER_H_ */
