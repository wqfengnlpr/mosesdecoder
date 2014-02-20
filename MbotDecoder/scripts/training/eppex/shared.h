/**
 * Declaration of functionality shared between counter, eppex and
 * (not yet finished) memscoring eppex.
 *
 * (C) Moses: http://www.statmt.org/moses/
 * (C) Ceslav Przywara, UFAL MFF UK, 2011
 *
 * $Id: shared.h,v 1.1.1.1 2013/01/06 16:54:12 braunefe Exp $
 */

#ifndef SHARED_H
#define	SHARED_H

#include <string>

std::string get_lossy_counting_params_format(void);

bool parse_lossy_counting_params(const std::string& param);

void read_optional_params(int argc, char* argv[], int optionalParamsStart);

#endif