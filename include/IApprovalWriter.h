/*
 * IApprovalWriter.h
 *
 *  Created on: 2013.11.09.
 *      Author: thamm
 */

#ifndef IAPPROVALWRITER_H_
#define IAPPROVALWRITER_H_

#include <string>
#include "IFileUtils.h"
const std::string received = ".received";
const std::string approved = ".approved";

class IApprovalWriter {
	public:
		virtual ~IApprovalWriter() {};
		virtual void writeReceivedFile(IFileUtils* fileUtils
		                                , const std::string& received) = 0;
		virtual std::string getReceivedFilename(const std::string& base) = 0;
		virtual std::string getApprovalFilename(const std::string& base) = 0;
};

#endif /* IAPPROVALWRITER_H_ */
