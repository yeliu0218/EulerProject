/*
 * 3.cxx
 * 
 * Copyright 2017 leo <leo@leo-Lenovo-Yoga-2-Pro>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include<vector>
using namespace std;

//template <class T>
#define T long long

bool isPrime(vector<T>& v,T n){
	for(std::vector<T>::iterator it = v.begin(); it != v.end() && (*it)*(*it)<=n; ++it)
    {   
		if(n%(*it)==0)
		{    
			return false;
		}
	}
	return true;
}

void nextPrime(vector<T>& v){
	T tmp = v.back()+1;
	while(1){
		if (isPrime(v,tmp)==true)
		{
			v.push_back(tmp);
			return;
		}
		tmp++;
	}
}

int main(int argc, char **argv)
{
	long long N = 600851475143;
	//long long N =200;
	
	vector<long long> primelist;
	//std::cout<<primelist.back()<<std::endl;
	primelist.push_back(2);
	while(primelist.back()<=N)
	{
		while (N%primelist.back()==0)
		{
			N=N/primelist.back();
			std::cout<<"divided by "<<primelist.back()<<std::endl;
		}
		if (N==1)
		{
			std::cout<<"Answer "<<primelist.back()<<std::endl;
			return 0;
		}
		nextPrime(primelist);
	}
	std::cout<<"This is a prime "<<std::endl;
	return 0;
}

