/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   constcast.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 14:24:06 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/07 14:46:14 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// const_cast is used to cast away the constness of a variable.
// use example 1: change non-const class members inside const member function.
// use example 2: pass const data to function that doesn't take const
// use example 3: cast away volatile attribute

// Safer than simple type casting as casting fails if cast type is not same
// as original object

int main(void) {
	int         a = 42;
	int const   *b = &a;                    // implicit promotion -> OK
	int         *c = b;                     // implicit demotion -> Nope!

	int         *d = const_cast<int *>(b);  // implicit demotion -> OK
	return 0;
}