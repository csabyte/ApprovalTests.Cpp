/*
 * FileUtils.cpp
 *
 *  Created on: 2013.11.09.
 *      Author: thamm
 */

#include <fstream>
#include <assert.h>
#include <sys/stat.h>
#include "FileUtils.h"

using namespace std;

void FileUtils::writeTextInFile(const std::string& text, const std::string& file) {
	assert(file.length() > 0);
	ofstream out(file.c_str());
	out << text;
	out.close();
}

bool FileUtils::isFileExist(const std::string& file) {
	 struct stat buffer;
	 return (stat(file.c_str(), &buffer) == 0);
}


