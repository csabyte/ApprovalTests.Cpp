/*
 * ApprovalTextWriter.cpp
 *
 *  Created on: 2013.11.09.
 *      Author: thamm
 */

#include <iostream>
#include <sstream>
#include "ApprovalTextWriter.h"

using namespace std;
const std::string extension("txt");

ApprovalTextWriter::ApprovalTextWriter(const std::string& text)
: mText(text)
{}

ApprovalTextWriter::~ApprovalTextWriter() {
}

void ApprovalTextWriter::writeReceivedFile(IFileUtils* fileUtils
                                            , const std::string& received) {
	fileUtils->writeTextInFile(mText, received);
}

std::string ApprovalTextWriter::getReceivedFilename(const std::string& base) {
	ostringstream ostr;
	ostr << base << received << "." << extension;
	return ostr.str();
}

std::string ApprovalTextWriter::getApprovalFilename(const std::string& base) {
	ostringstream ostr;
	ostr << base << approved << "." << extension;
	return ostr.str();
}
