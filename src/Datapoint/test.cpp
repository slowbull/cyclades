#include<sstream>
#include<vector>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include "MyDatapoint.h"

int main(){
	//std::string file("a2a");
	std::ifstream fp("a2a");
	//char s[] = "1 1:2.0 4:4.0";

	//char* endptr;
	//std::cout << s << std::endl;
	std::vector<Datapoint *> datapoints;
	std::string sub;
	int datapoint_count = 0;
  	while(std::getline(fp,sub)){
		MyDatapoint * point = new  MyDatapoint(sub, datapoint_count++);
		datapoints.push_back(point);
		std::cout << point->GetLabel() << std::endl;

		/*
		char* idx, *val, *label;
		char s[1024];
		std::cout << sub << std::endl;
		strcpy(s,sub.c_str());
		label = strtok(s," \t");
		//double mylabel = strtod(label, &endptr);
		int mylabel = strtol(label,NULL,10);
		//std::cout <<  mylabel << std::endl;
		while(1){
			idx = strtok(NULL,":");
			val = strtok(NULL," \t");
			if(val==NULL) 
				break;
			int myidx = (int)strtol(idx, NULL,10);
			//int myidx = strtol(idx, &endptr,10);
			double myval = strtod(val,NULL);
			//double myval = strtod(val, &endptr);
			//std::cout <<   idx << " " << val << std::endl;
			//std::cout <<   myidx << " " << myval << std::endl;
		}
		*/
  	}
	return 0;
}
