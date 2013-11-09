/*
 * ApprovalTextWriter.h
 *
 *  Created on: 2013.11.09.
 *      Author: thamm
 */

#ifndef APPROVALTEXTWRITER_H_
#define APPROVALTEXTWRITER_H_

#include "IApprovalWriter.h"

class ApprovalTextWriter: public IApprovalWriter {
	public:
		ApprovalTextWriter(const std::string& text);
		virtual ~ApprovalTextWriter();

		virtual void writeReceivedFile(IFileUtils* fileUtils
		                                , const std::string& received);
		virtual std::string getReceivedFilename(const std::string& base);
		virtual std::string getApprovalFilename(const std::string& base);
	private:
		std::string mText;
};

#endif /* APPROVALTEXTWRITER_H_ */
