/*
 *  FirstWorkingReporter.h
 *
 *  Created on: 2013.11.25.
 *      Author: thamm
 */

#ifndef _FirstWorkingReporter_h
#define _FirstWorkingReporter_h

#include <vector>
#include "IEnvironmentAwareReporter.h"

class FirstWorkingReporter : public IEnvironmentAwareReporter {
    public:
        void addReporter(IEnvironmentAwareReporter* reporter);
        virtual void report(const std::string& received
                            , const std::string& approved);
        virtual bool isWorkingInThisEnvironment(const std::string& forFile);
        virtual bool approvedWhenReported();
    private:
        std::vector<IEnvironmentAwareReporter*> mReporters;
};

#endif
