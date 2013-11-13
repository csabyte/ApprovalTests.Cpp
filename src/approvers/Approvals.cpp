/*
 * Approvals.cpp
 *
 *  Created on: 2013.10.27.
 *      Author: thamm
 */

#include <stdio.h>
#include "ApprovalTextWriter.h"
#include "GoogleTestNamer.h"
#include "Kdiff3Reporter.h"
#include "Approvals.h"

Approvals::Approvals() {}

Approvals::~Approvals() {}

void Approvals::verify(const std::string& sContent) {
    ApprovalTextWriter writer(sContent);
    GoogleTestNamer namer;
    FileApprover approver(&writer, &namer);
    Kdiff3Reporter reporter;
    verify(&approver, &reporter);
}

void Approvals::verify(FileApprover* approver, IApprovalReporter* reporter) {
    if (approver->approve(reporter)) {
        approver->cleanUpAfterSuccess(reporter);
    }
    else {
        approver->reportFailure(reporter);
        if (reporter->approvedWhenReported()) {
            approver->cleanUpAfterSuccess(reporter);
        }
        approver->fail();
    }
}
