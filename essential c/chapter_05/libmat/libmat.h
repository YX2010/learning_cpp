#ifndef _LIBMAT_H
#define _LIBMAT_H

#include<iostream>

class LibMat{
	
	public:
	  LibMat() { std::cout << "LibMat::LibMat() default constructor!\n";}
		
		virtual ~LibMat() { std::cout << "Libmat::~LibMat() destructor!\n";}
		virtual void print() const{
			std::cout << "LibMat::print() -- I am a LibMat object!\n";
		}
};

#endif