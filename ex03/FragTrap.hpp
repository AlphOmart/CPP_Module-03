#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const FragTrap& original );
	FragTrap( const std::string& name );
	~FragTrap();

	void	highFivesGuys( void );
};

#endif