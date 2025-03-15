#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string idea)
{
	std::cout << "Brain idea constructor called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = brain;
}

Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "Brain '=' operator called" << std::endl;
	if (this != &brain)
	{
		for(int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	}
	return (*this);
}

std::string* Brain::getIdeas(void)
{
	return (this->ideas);
}

void	Brain::setIdea(std::string idea)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}