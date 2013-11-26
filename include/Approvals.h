/*
 * Approvals.h
 *
 *  Created on: 2013.10.27.
 *      Author: thamm
 */

#ifndef APPROVALS_H_
#define APPROVALS_H_

#include <string>
#include <vector>
#include "FileApprover.h"
#include "IApprovalReporter.h"
#include "IApprovable.h"

class Approvals {
	public:
		Approvals();
		virtual ~Approvals();
		static void verify(const std::string& sContent);
		static void verify(IApprovable* object);
		static void verify(FileApprover* approver, IApprovalReporter* reporter);
};

#endif /* APPROVALS_H_ */
