/*
 * IEnvironmentAwareReporter.h
 *
 *  Created on: 2013.11.10.
 *      Author: thamm
 */

#ifndef IENVIRONMENTAWAREREPORTER_H_
#define IENVIRONMENTAWAREREPORTER_H_

#include "IApprovalReporter.h"

class IEnvironmentAwareReporter : public IApprovalReporter {
    public:
        virtual ~IEnvironmentAwareReporter() {}
        virtual bool isWorkingInThisEnvironment(const std::string& forFile) = 0;
};

#endif /* IENVIRONMENTAWAREREPORTER_H_ */
