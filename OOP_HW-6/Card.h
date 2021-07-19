#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Card
{
public:
	enum Suit {
		CLUBS, DIAMONDS, HEARTS, SPADES
	};

	enum Rank {
		ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,	NINE, TEN, JACK, QUEEN, KING
	};

	Card(Suit suite, Rank rank, bool flipUp);
	void Flip();
	int getValue() const;

private:
	Suit m_Suit;
	Rank m_Rank;
	bool m_faceUp;
	friend ostream& operator<<(ostream& os, const Card& aCard);
};

