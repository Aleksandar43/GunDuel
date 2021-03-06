// Player.hpp
// Base player that is almost able to properly handle a gun in a duel.

#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <vector>
#include <limits>
#include <string>
#include <random>
#include <chrono>

class Player
{
public:
	// Load ammo, shoot bullet / plasma, metal shield / thermal deflector
	enum Action { LOAD, BULLET, PLASMA, METAL, THERMAL };

	// The character versions of the actions above.
	static const char ACTION[5];

	// Did the player win?
	enum Result { DRAW, WIN, LOSS };

public:
	// [Must Customize] Fight others!
	virtual Action fight() = 0;

	// [Optionally Customize] Notified of opponent action in after turn.
	virtual void perceive(Action action)
	{
		mHistoryOpponent.push_back(action);
		switch (action)
		{
		case LOAD:
			mAmmoOpponent += 1;
			break;
		case BULLET:
			mAmmoOpponent -= 1;
			break;
		case PLASMA:
			mAmmoOpponent -= 2;
			break;
		}
	}

	// [Optionally Customize] Notified of win / loss / draw status.
	virtual void declared(Result result) {};

public:
	// Custructor which accepts identifier of opponent.
	explicit Player(size_t opponent = -1) : mOpponent(opponent) {}

	// Get ammo count.
	int getAmmo() const { return mAmmo; }

	// Get current turn count (0-based).
	int getTurn() const { return mTurn; }

	// Get History of player.
	std::vector<Action> const &getHistory() const { return mHistory; }

	// Get History of opponent.
	std::vector<Action> const &getHistoryOpponent() const { return mHistoryOpponent; }

public:
	// Get a random nonnegative int.
	static int GetRandomInteger(int max = std::numeric_limits<int>::max()) {
		static auto seed = std::chrono::system_clock::now().time_since_epoch().count();
		static std::default_random_engine generator((unsigned)seed);
		std::uniform_int_distribution<int> distribution(0, max);
		return distribution(generator);
	}

protected:
	// Action '0': load ammo
	Action load() { return LOAD; }

	// Action '1': fire bullet
	Action bullet() { return BULLET; }

	// Action '2': fire plasma
	Action plasma() { return PLASMA; }

	// Action '-': shoot bullet
	Action metal() { return METAL; }

	// Action '=': shoot bullet
	Action thermal() { return THERMAL; }

	// Get the unique identifier of opponent.
	size_t getOpponent() const { return mOpponent; }

	// Get ammo count of opponent.
	int getAmmoOpponent() const { return mAmmoOpponent; }

private:
	// Allow GunDuel to perform a fight.
	friend class GunDuel;

	// Trigger actual fight; "inverted" NVI
	Action performFight()
	{
		Action rv = action(fight());
		switch (rv) 
		{
		case LOAD:   ++mAmmo; break;
		case PLASMA: --mAmmo;
		case BULLET: --mAmmo; break;
		}
		return rv;
	}

	// Unique identifier of opponent.
	size_t mOpponent = 0;

	// Amount of loaded ammo.
	int mAmmo = 0;

	// Number of completed turns.
	int mTurn = 0;

	// Records history of player.
	std::vector<Action> mHistory;

	// Records history of opponent.
	std::vector<Action> mHistoryOpponent;

	// Records ammo count of opponent;
	int mAmmoOpponent = 0;

private:
	// Records player action and increments turn counter.
	Action action(Action action)
	{
		++mTurn;
		mHistory.push_back(action);
		return action;
	}
};

// Out of class initialization of static const variable.
const char Player::ACTION[5] = { '0', '1', '2', '-', '=' };

// Converts a vector of Player::Action to a single string.
std::string toActionString(std::vector<Player::Action> const &actions)
{
	std::string output;
	for (Player::Action const &action : actions)
	{
		output.append(1, Player::ACTION[(size_t)action]);
	}
	return output;
}

#endif // !__PLAYER_HPP__