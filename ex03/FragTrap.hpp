#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
protected:
	FragTrap( void );

public:
	FragTrap( const FragTrap& original );
	FragTrap( const std::string& name );
	~FragTrap();

	FragTrap&	operator=(const FragTrap &original);

	void	highFivesGuys( void );
};

#endif