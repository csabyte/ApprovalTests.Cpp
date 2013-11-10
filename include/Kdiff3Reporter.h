/*
 * XtermReporter.h
 *
 *  Created on: 2013.10.27.
 *      Author: thamm
 */

#ifndef KDIFF3REPORTER_H_
#define KDIFF3REPORTER_H_

#include <IApprovalReporter.h>
#include "GenericDiffReporter.h"

class Kdiff3Reporter : public GenericDiffReporter {
	public:
        Kdiff3Reporter();
};


#endif /* KDIFF3REPORTER_H_ */
