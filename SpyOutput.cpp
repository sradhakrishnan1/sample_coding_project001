/* 
 * File:   SpyOutput.cpp
 * Author: srihari
 * 
 * Created on October 15, 2013, 9:01 AM
 */

#include "SpyOutput.h"

using namespace std;

SpyOutput::SpyOutput(ostream* os){
    
    m_ostream = os;
    count = 0;
    checkSum = 0.0;
}

SpyOutput& SpyOutput::operator <<(char c_value){
    computeCountChecksum(c_value);
	return *this;
  
}

SpyOutput& SpyOutput::operator <<(double d_value){
	computeCountChecksum(d_value);
	return *this;
  
}

SpyOutput& SpyOutput::operator <<(int i_value){
	computeCountChecksum(i_value);
	return *this;
  
}

SpyOutput& SpyOutput::operator <<(ostream& m_os){
    
	return *this;
}

SpyOutput& SpyOutput::operator <<(string s_value){
	computeCountChecksum(s_value);
	return *this;
}

SpyOutput& SpyOutput::operator <<(const char* c_value){
	computeCountChecksum(c_value);
	return *this;
  
}

template <class T>
void SpyOutput::computeCountChecksum(T t_value){
	stringstream oss;
	oss << t_value << ends;
	
	string s = oss.str();
	for(int i = 0; s[i]!='\0';i++)
		{ 	count++;
			checkSum+=s[i];
		}
		
	*m_ostream << s;
}

double SpyOutput::getCount(){
    return count;
}

double SpyOutput::getCheckSum(){
   	return checkSum;
}

SpyOutput::~SpyOutput(){}




