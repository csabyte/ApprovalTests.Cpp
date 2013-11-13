/*
 * GenericDiffReporter.h
 *
 *  Created on: 2013.11.10.
 *      Author: thamm
 */

#ifndef GENERICDIFFREPORTER_H_
#define GENERICDIFFREPORTER_H_

#include <string>
#include <vector>
#include <iostream>
#include "gtest/gtest.h"
#include "IEnvironmentAwareReporter.h"

class GenericDiffReporter : public IEnvironmentAwareReporter {
public:
    GenericDiffReporter(const std::string& diffProgram
                        , const std::string& diffProgramNotFound);
    virtual ~GenericDiffReporter();

    virtual void report(const std::string& received
                                , const std::string& approved);
    virtual bool isWorkingInThisEnvironment(const std::string& forFile);
    virtual bool approvedWhenReported();
private:
    FRIEND_TEST(GenericDiffReporterTest, testCtor);
    FRIEND_TEST(GenericDiffReporterTest, testIsExtensionValidForTxt);
    FRIEND_TEST(GenericDiffReporterTest, testIsExtensionValidForTxtWithPath);
    FRIEND_TEST(GenericDiffReporterTest, testIsExtensionValidForGzip);
    FRIEND_TEST(GenericDiffReporterTest, testIsDirCommandExist);
    FRIEND_TEST(GenericDiffReporterTest, testIsQwertyCommandExist);
    FRIEND_TEST(GenericDiffReporter, testCommandLine);

    void launchDiffProgram(const std::string& cmdLine);
    std::string getCommandLine(const std::string& received
                                    , const std::string& approved);
    bool isExtensionValid(const std::string& ext) const;
    bool isCommandExist(const std::string& cmd);

    // Variables
    std::string mDiffProgram;
    std::string mDiffProgramNotFoundMsg;
    std::vector<std::string> mValidExtensions;
};

#endif /* GENERICDIFFREPORTER_H_ */
