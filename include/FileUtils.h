/*
 * FileUtils.h
 *
 *  Created on: 2013.11.09.
 *      Author: thamm
 */

#ifndef FILEUTILS_H_
#define FILEUTILS_H_

#include <string>
#include "IFileUtils.h"

class FileUtils : public IFileUtils {
	public:
		virtual void writeTextInFile(const std::string& text, const std::string& file);
		virtual bool isFileExist(const std::string& file);
		static std::string getExtensionWithDot(const std::string& file);
		void createFileIfNeeded(const std::string& file);
};

#endif /* FILEUTILS_H_ */
