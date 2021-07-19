#include "GenericPlayer.h"

GenericPlayer::GenericPlayer(const string& n) : m_name(n)
{
}

GenericPlayer::~GenericPlayer()
{
}

bool GenericPlayer::IsBoosted() const
{
	return (GetTotal() > 21);
}

void GenericPlayer::Bust() const
{
	if (IsBoosted())
		cout << m_name << " busts." << endl;
}

ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
    os << aGenericPlayer.m_name << ":\t";

    vector<Card*>::const_iterator pCard;
    if (!aGenericPlayer.m_Cards.empty())
    {
        for (pCard = aGenericPlayer.m_Cards.begin();
            pCard != aGenericPlayer.m_Cards.end();
            ++pCard)
        {
            os << *(*pCard) << "\t";
        }


        if (aGenericPlayer.GetTotal() != 0)
        {
            cout << "(" << aGenericPlayer.GetTotal() << ")";
        }
    }
    else
    {
        os << "<empty>";
    }

    return os;

}
