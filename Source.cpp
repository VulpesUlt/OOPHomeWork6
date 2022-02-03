#include <sstream>
#include <iostream>

// Task 1

void getInt (int32_t* var)
{
	int32_t data;
	do
	{
		std::cout << "Enter integer number: ";
		std::cin >> data;
		if(std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input1" << std::endl;
			continue;
		}
		
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if(std::cin.gcount() > 1)
		{
			std::cin.clear();
			std::cout << "Invalid input2" << std::endl;
			continue;
		}

		break;
	} while (true);

	*var = data;
}

// Task 2

std::ostream &endll (std::ostream &stream)
{
	stream.put(stream.widen('\n'));
	stream.put(stream.widen('\n'));
	stream.flush();
	return stream;
}

// Task 3

bool confirm()
{
	char ch = 'a';
	std::cout << "(y / n): ";
	while (true)
	{
		std::cin.get(ch);

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (std::cin.gcount() > 1)
		{
			std::cin.clear();
			continue;
		}

		if (ch == 'y')
			return true;
		else if (ch == 'n')
			return false;
		else
			continue;
	}
}

/*
class Player : public GenericPlayer
{
public:
	Player(std::string name) : GenericPlayer(name) { }

	virtual bool IsHitting() override
	{
		std::cout << GenericPlayer::GetName() << ", do you need one more card? : ";
		return confirm();
	}

	void Win() const
	{
		std::cout << "Player " << GenericPlayer::GetName() << "won!" << std::endl;
	}

	void Lose() const
	{
		std::cout << "Player " << GenericPlayer::GetName() << "lost" << std::endl;
	}

	void Push() const
	{
		std::cout << "Player " << GenericPlayer::GetName() << "gets push" << std::endl;
	}
};
 
 */

// Task 4

/*
class House : GenericPlayer
{
public:
	House() : GenericPlayer("House") { }

	virtual bool IsHitting() const
	{
		if (Hand::GetValue() <= 16)
			return true;
		else
			return false;
	}

	void FlipFirstCard()
	{
		GenericPlayer::Hand::Flip(0); // key 0 means vector[0] of std::vector m_collection[]
	}
};
*/

// Task 5
/*
std::ostream& operator << (std::ostream& stream, Card& card)
{
	std::string suit;
	switch (card.m_suit)
	{
	case Card::suit::SPADES:
		suit = "Spades";
		break;
	case Card::suit::CLUBS:
		suit = "Clubs";
		break;
	case Card::suit::HEARTS:
		suit = "Hearts";
		break;
	case Card::suit::DIAMONDS:
		suit = "Diamonds";
		break;
	}

	std::string rank;
	switch (card.m_rank)
	{
	case Card::rank::TWO:
		rank = "2";
		break;
	case Card::rank::THREE:
		rank = "3";
		break;
	case Card::rank::FOUR:
		rank = "4";
		break;
	case Card::rank::FIVE:
		rank = "5";
		break;
	case Card::rank::SIX:
		rank = "6";
		break;
	case Card::rank::SEVEN:
		rank = "7";
		break;
	case Card::rank::EIGHT:
		rank = "8";
		break;
	case Card::rank::NINE:
		rank = "9";
		break;
	case Card::rank::TEN:
		rank = "10";
		break;
	case Card::rank::JACK:
		rank = "Jack";
		break;
	case Card::rank::QUEEN:
		rank = "Queen";
		break;
	case Card::rank::KING:
		rank = "King";
		break;
	case Card::rank::ACE:
		rank = "Ace";
		break;
	default:
		rank = "None";
	}

	if (card.m_faceUp)
		stream << rank << " " << suit << " |";
	else
		stream << "XX";

	return stream;
}

std::ostream& operator << (std::ostream& stream, Hand& hand)
{
	std::vector<Card*>::iterator it = hand.m_collection.begin();
	while (it != hand.m_collection.end())
	{
		stream << **it << " ";
		it++;
	}
	return stream;
}

std::ostream& operator<< (std::ostream& stream, GenericPlayer &gPlayer)
{
	Hand hand = gPlayer; // The only way i managed to use stream << Hand overload
	stream << "Player: " << gPlayer.name << "(" << gPlayer.GetValue() << " points) | Cards: " << hand;
	return stream;
}

*/

int main ()
{
	
	// Task 1
	int32_t task1 = 0;
	getInt(&task1);
	std::cout << "Task 1 number: " << task1 << std::endl;

	// Task 2 
	std::cout << "text 1" << endll << "text 2" << std::endl;

	return 0;
}