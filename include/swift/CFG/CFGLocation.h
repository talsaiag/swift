//===--- CFGLocation.h - Location information for CFG nodes ------*- C++ -*-==//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2015 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See http://swift.org/LICENSE.txt for license information
// See http://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//

#ifndef SWIFT_CFG_LOCATION_H
#define SWIFT_CFG_LOCATION_H

#include "llvm/ADT/PointerUnion.h"

namespace swift {
  class Expr;
  class Stmt;

/// CFGLocation - This is a pointer to the AST node that a CFG instruction was
/// derived from.
///
/// FIXME: This should eventually include inlining history, when we get it.
///
typedef PointerUnion<Stmt*,Expr*> CFGLocation;

} // end swift namespace


#endif
