#include <stdio.h>
#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <fstream>

//implementation of this program should follow the topic under this sentence:
//First:   Implementation of this program should output contents in file what user want to open, insert values user inputed.
//Second:  The array should be used for string values wanted to output, and vector shoud be used for string values that 
//         is read by implementation of this program.
//Third:   Display of implementation of this program must have three components
//               First, display field that shows following contents:the file name and the GUI-like system that indicate components 
//               usually used in textpad such as "show" and "save". It is desireable that users can access this field with allow-key.
//               Second, main field that contain of abillity to showing contents users opened. filename extension user want to open
//               must be csv ONLY. When csv file (splited values with comma) is inputed, main field has to display its content 
//               aligned with comma positions.
//               Third, Command line that show useful command user inputed and result of its operation.
//Forth:   Implementation of this program have to be for LINUX or UNIXlike systems. (I thought that there are no demand in windows
//         user that require commandline tool.)
//Fifth:   composition of this program must be ONE FILE. So, there are no requirement about headding file.


std::vector getSplitedArray(std::string material){
	char l;
	std::string str;
	std::vector<std::string> r_vec;
	size_t long start_index = 0;
	size_t long end_index = 0;
	len = material.length();
	for(size_t long i=0;i<len;i++){
		l = material[i];
		if(l == ","){
			end_index = i;
			str = material.substr(start_index, end_index - start_index);
			r_vec.push_back(str);
			start_index = end_index + 1;
		}
	}
	r_vec.push_back(r_vec.size())
	return r_vec;
}


std::array getFileContentsAsTwoDimArray(std::string file_adress){
	std::array<std::array<std::string>> main_field;
	std::string l;
	std::ifstream ifs;
	ifs.open(file_adress);
	if(!ifs){
		return main_field;
	}
	while(getline(ifs, l)){
		break;
	}
}
