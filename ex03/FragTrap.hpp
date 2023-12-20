#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
	static unsigned int	_hit_points_max;
	static unsigned int	_attack_damage_max;
public:
	FragTrap( void );
	FragTrap( const FragTrap& original );
	FragTrap( const std::string& name );
	~FragTrap();

	FragTrap&		operator=(const FragTrap &original);
	unsigned int	getAttackDamageMax(void);
	unsigned int	getHitPointsMax(void);
	void	highFivesGuys( void );
};

#endif