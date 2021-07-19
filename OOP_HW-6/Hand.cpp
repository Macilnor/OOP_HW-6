#include "Hand.h"

Hand::Hand()
{
}

void Hand::Add(Card* pCard)
{
	m_Cards.push_back(pCard);
}

void Hand::Clear()
{
	vector<Card*>::iterator iter = m_Cards.begin();
	for (iter = m_Cards.begin(); iter != m_Cards.end(); ++iter)
	{
		delete* iter;
		*iter = nullptr;
	}
	m_Cards.clear();
}

int Hand::GetTotal() const
{
	int total = 0;
	int ace_c = 0;
	for (auto it = m_Cards.begin(); it != m_Cards.end(); it++)
	{
		Card* pCard = *it;
		if (pCard->getValue() == 1)
			ace_c++;
		else
			total += pCard->getValue();
	}
	while (ace_c > 0)
	{
		if (total < 11)
		{
			total += 11;
			ace_c--;
		}
		else
		{
			total += 1;
			ace_c--;
		}
	}
	return total;
}

Hand::~Hand()
{
	Clear();
}
