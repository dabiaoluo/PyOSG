// Copyright (C) 2016 Gideon May (gideon@borges.xyz)
//
// Permission to copy, use, sell and distribute this software is granted
// provided this copyright notice appears in all copies.
// Permission to modify the code and to distribute modified code is granted
// provided this copyright notice appears in all copies, and a notice
// that the code was modified is included with the copyright notice.
//
// This software is provided "as is" without express or implied warranty,
// and with no claim as to its suitability for any purpose.

#include "TemplateCompArray.hpp"

namespace PyOSG {
void init_ArrayVec2()
{
    TemplateCompArray<osg::Vec2Array, osg::Vec2> Vec2Array("Vec2Array");
}
}
