/*
 * FileApprover.cpp
 *
 *  Created on: 2013.11.10.
 *      Author: thamm
 */
#include <stdio.h>
#include <iostream>
//#include <gtest/gtest.h>
#include "FileUtils.h"
#include "FileApprover.h"

using namespace std;

FileApprover::FileApprover(IApprovalWriter* writer, INamer* namer)
: mWriter(writer), mNamer(namer) {
    const string base = mNamer->getApprovalName();
    mReceived = mWriter->getReceivedFilename(base);
    mApproved = mWriter->getApprovalFilename(base);
}

FileApprover::~FileApprover() {
}

bool FileApprover::approve(IApprovalReporter* reporter) {
    FileUtils utils;
    mWriter->writeReceivedFile(&utils, mReceived);
    return approveTextFile(mReceived, mApproved);
}

void FileApprover::cleanUpAfterSuccess(IApprovalReporter* reporter) {
    remove(mReceived.c_str());
}

void FileApprover::reportFailure(IApprovalReporter* reporter) {
    reporter->report(mReceived, mApproved);
}

void FileApprover::fail() {
    //EXPECT_TRUE(false);
}

bool FileApprover::approveTextFile(const std::string& received, const std::string& approved) {
    FileUtils utils;
    if (!utils.isFileExist(received) || !utils.isFileExist(approved)) {
        return false;
    }

    const std::string receivedContent = utils.readFile(received);
    const std::string approvedContent = utils.readFile(approved);
    
    int lastCrLf = approvedContent.find_last_of("\n");
    if (lastCrLf != approvedContent.length()-1) {
        lastCrLf = string::npos;
    }
    return (receivedContent.compare(approvedContent.substr(0, lastCrLf)) == 0);
}

