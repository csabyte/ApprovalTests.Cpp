/*
 * FileApprover.h
 *
 *  Created on: 2013.11.10.
 *      Author: thamm
 */

#ifndef FILEAPPROVER_H_
#define FILEAPPROVER_H_

#include "IApprovalWriter.h"
#include "INamer.h"
#include "IApprovalReporter.h"

class FileApprover {
public:
    FileApprover(IApprovalWriter* writer, INamer* namer);
    virtual ~FileApprover();

    bool approve(IApprovalReporter* reporter);
    void cleanUpAfterSuccess(IApprovalReporter* reporter);
    void reportFailure(IApprovalReporter* reporter);
    void fail();
private:
    bool approveTextFile(const std::string& received, const std::string& approved);
    IApprovalWriter* mWriter;
    INamer* mNamer;
    std::string mReceived;
    std::string mApproved;
};

#endif /* FILEAPPROVER_H_ */
