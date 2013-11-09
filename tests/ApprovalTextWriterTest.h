/*
 * ApprovalTextWriterTest.h
 *
 *  Created on: 2013.11.09.
 *      Author: thamm
 */

#ifndef APPROVALTEXTWRITERTEST_H_
#define APPROVALTEXTWRITERTEST_H_

#include "gtest/gtest.h"
#include "ApprovalTextWriter.h"

class FakeFileUtils : public IFileUtils {
	public:
		FakeFileUtils() : mFile(""), mFileContent("") {}
		virtual void writeTextInFile(const std::string& text
									, const std::string& file) {
			mFileContent = text;
			mFile = file;
		}
		virtual bool isFileExist(const std::string& file) {
			return (file == mFile);
		}
	private:
		std::string mFile;
		std::string mFileContent;
};

TEST(ApprovalTextWriter, testReceivedFilename) {
	ApprovalTextWriter writer("This is a text");
	EXPECT_EQ("MyReceivedFilename.received.txt"
				, writer.getReceivedFilename("MyReceivedFilename"));
}

TEST(ApprovalTextWriter, testApprovedFilename) {
	ApprovalTextWriter writer("This is a text");
	EXPECT_EQ("MyApprovalFilename.approved.txt"
				, writer.getApprovalFilename("MyApprovalFilename"));
}

TEST(ApprovalTextWriter, testWriteReceivedFile) {
	ApprovalTextWriter writer("This is a text");
	FakeFileUtils fileUtils;
	writer.writeReceivedFile(&fileUtils, "approved.txt");
	EXPECT_EQ(true, fileUtils.isFileExist("approved.txt"));
}

#endif /* APPROVALTEXTWRITERTEST_H_ */
