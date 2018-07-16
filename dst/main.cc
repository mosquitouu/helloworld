#include "../bin/includes.h"


#include <stdio.h>

int main(){
    std::cout<<"hello world"<<std::endl;
	std::fstream out("../dat/dat.txt");
	if(!out.is_open())
	{
		std::cout<<"Error opening file";
		std::cout<<std::endl;
		exit(1);
	}
	char buffer[256];
	while(!out.eof()){
		out.getline(buffer,100);
		std::cout<<buffer;
	}
	std::cout<<std::endl;
	return 0;

}
