/*
 * IFileUtils.h
 *
 *  Created on: 2013.11.09.
 *      Author: thamm
 */

#ifndef IFILEUTILS_H_
#define IFILEUTILS_H_

class IFileUtils {
	public:
		virtual ~IFileUtils() {}
		virtual void writeTextInFile(const std::string& text, const std::string& file) = 0;
		virtual bool isFileExist(const std::string& file) = 0;
};



#endif /* IFILEUTILS_H_ */
