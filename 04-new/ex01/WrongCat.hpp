#pragma once
		
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat( const WrongCat& wrAni );
		WrongCat&	operator=( const WrongCat& src );
		~WrongCat();
};
