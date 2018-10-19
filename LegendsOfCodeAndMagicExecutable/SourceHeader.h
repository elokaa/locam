#pragma once

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;



//---------------------------------------------------------------------------------------------------------------------
struct Card {
	int cardNumber{ -1 };
	int instanceId{ -1 };
	int location{ 0 };
	int cardType{ 0 };
	int manaCost{ 0 };
	int attackPoints{ 0 };

};


//----------------------------------------------------------------------------------------------------------------------
enum class GameAction {
	SUMMON = 0,
	ATTACK,
	PASS
};

string toString(const GameAction &gameAction) {
	switch (gameAction) {
	case GameAction::ATTACK:
		return "ATTACK";
	case GameAction::SUMMON:
		return "SUMMON";
	case GameAction::PASS:
		return "PASS";
	default:
		return "";
	}
}

GameAction toGameAction(const string &gameActionString) {

	if (gameActionString == "ATTACK") {
		return GameAction::ATTACK;
	}
	else if (gameActionString == "SUMMON") {
		return GameAction::SUMMON;
	}

	return GameAction::PASS;
}
//----------------------------------------------------------------------------------------------------------------------

struct PlayerAction {
	string cardNumber{ "" };
	GameAction action{ GameAction::PASS };
};
//----------------------------------------------------------------------------------------------------------------------

struct Player {
	//-----------------------------------------------
	int id{ 0 };
	//-----------------------------------------------
	int hp{ 0 };
	int maxMana{ 0 };
	int noOfCardsInDeck{ 0 };
	int rune{ 0 };
	int draw{ 0 };
	//-----------------------------------------------
	int noOfCardsInHand{ 0 };
	int lastActionCount{ 0 };


	Player(int id, int playerHealth, int playerMana, int playerDeck, int playerRune, int playerDraw)
		: id(id),
		hp(playerHealth),
		maxMana(playerMana),
		noOfCardsInDeck(playerDeck),
		rune(playerRune),
		draw(playerDraw) {}
};

struct Game
{
	int noOfCards{ 0 };
};