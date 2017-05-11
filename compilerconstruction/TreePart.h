#ifndef TREEPART_H
#define TREEPART_H

#include "Symbol.h"
#include <String>
#include <cstdlib>
#include "Symbol.h"
#include "Types.h"
#include "lexxer.h"


class TreePart {
public:
    TreePart( Symbol* );
    TreePart();
protected:
    Symbol* symbol;
};

#endif /* LEXXER_H */

