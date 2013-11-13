/*
 * XtermReporter.cpp
 *
 *  Created on: 2013.10.27.
 *      Author: thamm
 */
#include <stdlib.h>
#include "Kdiff3Reporter.h"

const std::string cKdiff3Program("/usr/bin/kdiff3");
const std::string cNotFoundMsg("kdiff3 not found.");

Kdiff3Reporter::Kdiff3Reporter()
: GenericDiffReporter(cKdiff3Program, cNotFoundMsg) {

}

bool Kdiff3Reporter::approvedWhenReported() {
    return true;
}
