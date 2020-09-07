/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cast_table.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mjiam <mjiam@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/07 15:48:56 by mjiam         #+#    #+#                 */
/*   Updated: 2020/09/07 16:24:44 by mjiam         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//----------------------*----------*----------*----------*----------*----------*
//          Cast        |Conversion|Reinterpr.|  Upcast  | Downcast |Type qual.|
//----------------------*----------*----------*----------*----------*----------*
// Implicit             |   Yes    |          |   Yes    |          |          |
// static_cast          |   Yes    |          |   Yes    |   Yes    |          | // can be used for up/downcast when we have full understanding of inheritance tree (and not horizontal relations)
// dynamic_cast         |          |          |   Yes    |   Yes    |          | // happens at runtime, adds performance overheads by taking advantage of RTTI, class must have at least 1 method
// const_cast           |          |          |          |          |    Yes   | // only c++ cast allowing type qualifier reinterpretation; only used for design flaws
// reinterpret_cast     |          |   Yes    |   Yes    |   Yes    |          | // most open cast, allows up/downcasts without semantic checks; used for changing type of raw data or make data usable by your program
//----------------------*----------*----------*----------*----------*----------*
// legacy C cast        |   Yes    |   Yes    |   Yes    |   Yes    |    Yes   | // too permissive
//----------------------*----------*----------*----------*----------*----------*

//----------------------*-----------------*-----------------*------------------*
//          Cast        | Semantic check  | Reliable at run |   Tested at run  |
//----------------------*-----------------*-----------------*------------------*
// Implicit             |       Yes       |       Yes       |                  |
// static_cast          |       Yes       |                 |                  |
// dynamic_cast         |       Yes       |       Yes       |       Yes        |
// const_cast           |                 |                 |                  |
// reinterpret_cast     |                 |                 |                  |
//----------------------*-----------------*-----------------*------------------*
// legacy C cast        |                 |                 |                  |
//----------------------*-----------------*-----------------*------------------*