/*
 * IApprovalReporter.h
 *
 *  Created on: 2013.10.27.
 *      Author: thamm
 */

#ifndef IAPPROVALREPORTER_H_
#define IAPPROVALREPORTER_H_

#include <string>

class IApprovalReporter {
	public:
		virtual ~IApprovalReporter() {}
		virtual void report(const std::string& received
		                    , const std::string& approved) = 0;
};

#endif /* IAPPROVALREPORTER_H_ */
