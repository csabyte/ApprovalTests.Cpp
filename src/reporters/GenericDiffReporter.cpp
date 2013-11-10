/*
 * GenericDiffReporter.cpp
 *
 *  Created on: 2013.11.10.
 *      Author: thamm
 */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <cstring>
#include <algorithm>
#include <sstream>
#include "FileUtils.h"
#include "GenericDiffReporter.h"
using namespace std;

const std::string cTextFileExtensions[] = {".txt", ".csv", ".htm", ".html", ".xml"};

GenericDiffReporter::GenericDiffReporter(const std::string& diffProgram
                                        , const std::string& diffProgramNotFound)
: mDiffProgram(diffProgram)
, mDiffProgramNotFoundMsg(diffProgramNotFound)
{
    unsigned int numExtensions = sizeof(cTextFileExtensions)/sizeof(std::string);
    mValidExtensions.insert(mValidExtensions.begin()
            , cTextFileExtensions, cTextFileExtensions + numExtensions);
}

GenericDiffReporter::~GenericDiffReporter() {
}

void GenericDiffReporter::report(const std::string& received
                                , const std::string& approved) {
    if (isWorkingInThisEnvironment(received)) {
        FileUtils utils;
        utils.createFileIfNeeded(received);
        launchDiffProgram(getCommandLine(received, approved));
    }
}

void GenericDiffReporter::launchDiffProgram(const std::string& cmdLine) {

    cout << cmdLine << endl;
    system(cmdLine.c_str());

    /*char* ARGV[argv.size() + 1];
    int count = 0;

    for (std::vector<std::string>::const_iterator it=argv.begin(); it!=argv.end(); ++it) {
        char *cstr = new char [it->length() + 1];
        std::strcpy( cstr, it->c_str() );
        ARGV[count] = cstr;
        count++;
    }

    ARGV[argv.size()] = NULL;

    if ( fork() == 0 )
    {
        int i = execvp( ARGV[0], ARGV );
        if ( i < 0 )
        {
            std::cerr << ARGV[0] << ": command not found" << std::endl;
            return false;
        }
    }

    for ( unsigned int i = 0; i < argv.size(); ++i )
    {
        delete ARGV[i];
    }*/
}

std::string GenericDiffReporter::getCommandLine(const std::string& received
                                , const std::string& approved) {
    ostringstream ostr;
    ostr << mDiffProgram << " " << received << " " << approved;
    return ostr.str();
}

bool GenericDiffReporter::isWorkingInThisEnvironment(const std::string& forFile) {
    return isCommandExist(mDiffProgram) && isExtensionValid(forFile);
}

bool GenericDiffReporter::isExtensionValid(const std::string& forFile) const {
    string extensionWithDot = FileUtils::getExtensionWithDot(forFile);
    return (find(mValidExtensions.begin(), mValidExtensions.end(), extensionWithDot)
            != mValidExtensions.end());
}

bool GenericDiffReporter::isCommandExist(const std::string& cmd) {
    FileUtils utils;
    return utils.isFileExist(cmd);
}

