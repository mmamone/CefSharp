// Copyright � 2010-2014 The CefSharp Project. All rights reserved.
//
// Use of this source code is governed by a BSD-style license that can be found in the LICENSE file.

#pragma once

#include "Stdafx.h"
#include "include/cef_app.h"
#include "include/cef_base.h"

using namespace CefSharp::Internals;

namespace CefSharp
{
    [System::Runtime::Serialization::DataContractAttribute]
    public ref class JavascriptObjectWrapper : public JavascriptObject
    {
    internal:
        MCefRefPtr<CefV8Value> Value;
    public:

        void Bind()
        {
            for each (JavascriptMember^ member in Members)
            {
                member->Bind(this);
            }
        };
    };
}