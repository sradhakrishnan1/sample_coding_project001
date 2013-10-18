/* 
 * File:   SpyOutput.h
 * Author: srihari
 *
 * Created on October 15, 2013, 9:01 AM
 */

#ifndef SPYOUTPUT_H
#define	SPYOUTPUT_H

#include<iostream>
#include<sstream>
#include<string>
using namespace std;


class SpyOutput : public std::ostream {
    
    double checkSum;
    double count;
    SpyOutput();
    template <class T> 
	void computeCountChecksum(T);
    std::ostream* m_ostream;
	
 public:
	SpyOutput(std::ostream*);
    SpyOutput& operator <<(char);
    SpyOutput& operator <<(double);
    SpyOutput& operator <<(int);
    SpyOutput& operator <<(std::string);
	SpyOutput& operator <<(const char*);
    SpyOutput& operator <<(std::ostream&);
    ~SpyOutput();
    double getCheckSum();
    double getCount();
    


};

#endif	/* SPYOUTPUT_H */

