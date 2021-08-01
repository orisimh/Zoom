#include <exception>
using namespace std;
#include <iostream>
#include <string>
/*
 * exception1.h
 *
 *  Created on: Jan 9, 2021
 *      Author: ise
 */

#ifndef EXCEPTION1_H_
#define EXCEPTION1_H_


class exception1:public exception{

	virtual const char* what() const throw()
			{

		return "this student don't have permission";
	}

} except1;


class exception2:public exception{

	virtual const char* what() const throw()
			{

		return "id doesn't exists";
	}

} except2;

class exception3:public exception{

	virtual const char* what() const throw()
			{

		return "This room was split before";
	}

} except3;


class exception4:public exception{

	virtual const char* what() const throw()
			{

		return "Please enter valid details";
	}

} except4;


#endif /* EXCEPTION1_H_ */
