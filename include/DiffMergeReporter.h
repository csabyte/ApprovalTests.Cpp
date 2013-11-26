/*
 * DiffMergeReporter.h
 *
 *  Created on: 2013.11.25.
 *      Author: thamm
 */

#ifndef __DiffMergeReporter__
#define __DiffMergeReporter__

#include "GenericDiffReporter.h"

class DiffMergeReporter : public GenericDiffReporter {
public:
    DiffMergeReporter();
    virtual bool approvedWhenReported();
};


#endif /* defined(__DiffMergeReporter__) */
