#include "Card.h"

Card::Card(Suit suite, Rank rank, bool flipUp) : m_Suit(suite), m_Rank(rank), m_faceUp(flipUp)
{
}

void Card::Flip()
{
	m_faceUp = !m_faceUp;
}

int Card::getValue() const
{
    int value = 0;
    if (m_faceUp)
    {

        value = m_Rank;

        if (value > 10)
        {
            value = 10;
        }
    }
    return value;
}

ostream& operator<<(ostream& os, const Card& aCard)
{
    const string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
    const string SUITS[] = { "C", "D", "H", "S" };
    
    if (aCard.m_faceUp)
    {
        os << RANKS[aCard.m_Rank] << SUITS[aCard.m_Suit];
    }
    else
    {
        os << "XX";
    }
    
    return os;
}
