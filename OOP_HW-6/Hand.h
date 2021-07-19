#pragma once
#include "Card.h"

using namespace std;

class Hand
{
protected:
	vector<Card*> m_Cards;
public:
	Hand();

	void Add(Card* pCard);
	void Clear();
	int GetTotal() const;
	
	virtual ~Hand();
};

