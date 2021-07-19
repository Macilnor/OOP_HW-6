#pragma once
#include "Hand.h"

using namespace std;

class GenericPlayer :
    public Hand
{
private:
    friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);
public:
    GenericPlayer(const string& n);
    virtual ~GenericPlayer();
    virtual bool IsHitting() const = 0;
    bool IsBoosted() const;
    void Bust() const;
protected:
    string m_name;
};

