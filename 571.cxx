/*
 * 571.cxx
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
#include<math.h>
#include <algorithm> 
using namespace std;
#define T long long

bool pandigital(T N,int b){
	//std::vector<T> vb;
	std::vector<int> K(b);
	for(int i=0;i<b;i++)
	   K[i]=1;
	while (N>0){
		int tmp = N%b;
		//vb.push_back(tmp);
		N=(N-tmp)/b;
		K[tmp]=0;
	}
	for(int i=0;i<b;i++){
	   if (K[i]!=0)
	      return false;
    }
	return true;
}

bool nextNumber(vector<int>& v)
{
	int ls,rs=v.size()-1;
	while(v[rs]<v[rs-1])
	   rs--;
	ls = rs-1;
	int max = v[rs];
	int ms = rs;
	for (int i=rs;i<v.size();i++)
	{
		if (v[i]>v[ls] && v[i]<max)
		{
			max = v[i];
			ms = i;
		}
	}
	int tmp=v[ls];
	v[ls] = v[ms];
	v[ms] = tmp;
	//std::cout<<ls<<std::endl;
	//std::cout<<rs<<std::endl;
	sort(v.begin()+ls+1,v.end());
	return true;
}

T convert(vector<int>& v)
{
	T sum=0;
	for(int i=0;i<v.size();i++)
	   sum+=v[i]*pow(v.size(),v.size()-1-i);
	return sum;
}

bool ispanK(T N, int K)
{
	for(int i=2;i<K+1;i++)
	{
		if (pandigital(N,i)==false)
		   return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	int digits = 12;
	std::vector<int> v;
	v.push_back(1);
	v.push_back(0);
	for(int j=2;j<digits;j++)
	   v.push_back(j);
	/*int num=0;
	while(num<3*3*2*1){
		nextNumber(v);
		for(int i=0;i<v.size();i++)
		   std::cout<<v[i]<<"";
		std::cout<<endl;
		num++;
	}*/
	   
	int i=0;
	T sum = 0;
	while(1){
		T N=convert(v);
		if (ispanK(N,digits)==true)
		{
			std::cout<<N<<std::endl;
			i++;
			sum+=N;
		}
		if(i==10)
		   break;
		nextNumber(v);
	}
	std::cout<<sum<<std::endl;
	return 0;
}

