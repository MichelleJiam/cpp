/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   heritage.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/10 18:54:45 by mjiam         #+#    #+#                 */
/*   Updated: 2020/08/10 21:14:36 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Animal {
private:
	int	_numberoflegs;

public:
	Animal();
	Animal(Animal const &);
	Animal &operator=(Animal const &);
	~Animal();

	void	run(int distance);
};

class	Cat : public Animal {
public:
	Cat();
	Cat(Cat const &);
	Cat &operator=(Cat const &);
	~Cat();

	void	scorn(std::string const &target);
};

class	Pony : public Animal {
public:
	Pony();
	Pony(Pony const &);
	Pony &operator=(Pony const &);
	~Pony();

	void	trot(std::string const &location);
};

// protected attribute example

class 	Quadruped { // can access name, run() and legs
private:
	std::string	name; // only accessible from a Quadruped object

protected:
	Leg			legs[4]; // accessible from a Quadruped or derived object

public:
	void		run(); // accessible from wherever
};

class	Dog : public Quadruped { // can access run() and legs
};

int		main(void) { // can only access run()
	
}