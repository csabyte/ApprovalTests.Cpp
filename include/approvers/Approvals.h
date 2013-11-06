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

class Approvals {
	public:
		Approvals();
		virtual ~Approvals();
		static int verify(const std::string& sContent);
};

#endif /* APPROVALS_H_ */
