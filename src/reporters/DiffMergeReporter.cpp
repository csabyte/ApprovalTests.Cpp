/*
 * DiffMergeReporter.cpp
 *
 *  Created on: 2013.11.25.
 *      Author: thamm
 */

#include "DiffMergeReporter.h"

const std::string cMergeDiffProgram("/Applications/DiffMerge.app/Contents/MacOS/DiffMerge");
const std::string cNotFoundMsg("DiffMerge not found.");

DiffMergeReporter::DiffMergeReporter()
: GenericDiffReporter(cMergeDiffProgram, cNotFoundMsg) {
    
}

bool DiffMergeReporter::approvedWhenReported() {
    return true;
}
