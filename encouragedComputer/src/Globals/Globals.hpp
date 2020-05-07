//
//  Globals.hpp
//  encouragedComputer
//
//  Created by kota on 2020/05/05.
//
#pragma once

#include "ofMain.h"

namespace Globals {
enum struct Mode{
    depression,
    superCry,
    cry,
    normal,
    smile
};

static void dump_mode(const string _class_name, shared_ptr<Mode> _mode){
    if (*_mode == Mode::depression)
        ofLogNotice(_class_name) << "depression";
    else if (*_mode == Mode::superCry)
        ofLogNotice(_class_name) << "superCry";
    else if (*_mode == Mode::cry)
        ofLogNotice(_class_name) << "cry";
    else if (*_mode == Mode::normal)
        ofLogNotice(_class_name) << "normal";
    else if (*_mode == Mode::smile)
        ofLogNotice(_class_name) << "smile";
}

};
