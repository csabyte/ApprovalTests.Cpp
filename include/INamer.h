/*
 * INamer.h
 *
 *  Created on: 2013.10.27.
 *      Author: thamm
 */

#ifndef INAMER_H_
#define INAMER_H_

#include <string>

class INamer {
	public:
		virtual ~INamer() {}
		virtual std::string getApprovalName() = 0;
};


#endif /* INAMER_H_ */
