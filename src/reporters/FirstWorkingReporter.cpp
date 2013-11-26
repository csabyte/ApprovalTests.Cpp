/*
 *  FirstWorkingReporter.cpp
 *
 *  Created on: 2013.11.25.
 *      Author: thamm
 */

#include "FirstWorkingReporter.h"


void FirstWorkingReporter::addReporter(IEnvironmentAwareReporter* reporter) {
    mReporters.push_back(reporter);
}

void FirstWorkingReporter::report(const std::string& received
                                  , const std::string& approved) {
    for (std::vector<IEnvironmentAwareReporter*>::const_iterator it=mReporters.begin(); it!=mReporters.end(); ++it) {
        IEnvironmentAwareReporter* reporter = *it;
        if (reporter->isWorkingInThisEnvironment(received)) {
            reporter->report(received, approved);
            break;
        }
    }
}

bool FirstWorkingReporter::isWorkingInThisEnvironment(const std::string& forFile) {
    for (std::vector<IEnvironmentAwareReporter*>::const_iterator it=mReporters.begin(); it!=mReporters.end(); ++it) {
        IEnvironmentAwareReporter* reporter = *it;
        if (reporter->isWorkingInThisEnvironment(forFile)) {
            return true;
        }
    }
    return false;
}

bool FirstWorkingReporter::approvedWhenReported() {
    return true;
}
