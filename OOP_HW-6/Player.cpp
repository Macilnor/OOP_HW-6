#include "Player.h"

Player::Player(const string& name): GenericPlayer(name)
{
}

Player::~Player()
{
}

bool Player::IsHitting() const
{
    cout << m_name << ", do you want a hit? (Y/N): ";
    char response;
    cin >> response;
    return (response == 'y' || response == 'Y');
}

void Player::Win() const
{
    cout << m_name << " wins." << endl;
}

void Player::Lose() const
{
    cout << m_name << " loses." << endl;
}

void Player::Push() const
{
    cout << m_name << " pushes." << endl;
}
