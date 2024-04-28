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


class Settings{
	public:
	bool isShowRowNumber = true;
};


std::vector<std::string> getSplitedArray(std::string material){
	char l;
	std::string str;
	std::vector<std::string> r_vec;
	long start_index = 0;
	long end_index = 0;
	long len = material.length();
	for(long i=0;i<len;i++){
		l = material[i];
		if(l == ','){
			end_index = i;
			str = material.substr(start_index, end_index - start_index);
			r_vec.push_back(str);
			start_index = end_index + 1;
		}
	}
	r_vec.push_back(std::to_string(r_vec.size()));
	return r_vec;
}


//Implementation Note
//I want to convert vector to array, however, it is difficult to predict size of array because user can add or remove element.
//So I decided that array displaying contents consists of Array, and array containing elements consists of Vector.


std::vector<std::vector<std::string>> getFileContents(std::string file_path){
	std::vector<std::vector<std::string>> return_vec;

	std::ifstream ifs(file_path);
	std::string l;
	if(!ifs.fail()){
		while(std::getline(ifs, l)){
			return_vec.push_back(getSplitedArray(l));
		}
	}
	return return_vec;
}


//FOLLOWING CODE IS FOR DEBUG


int showTwoDimVector(std::vector<std::vector<std::string>>){

}