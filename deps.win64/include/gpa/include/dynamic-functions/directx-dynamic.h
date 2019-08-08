/******************************************************************************
        Copyright 2019 Intel Corporation.
 
This software and the related documents are Intel copyrighted materials,
and your use of them is governed by the express license under which they
were provided to you ("License"). Unless the License provides otherwise,
you may not use, modify, copy, publish, distribute, disclose or transmit
this software or the related documents without Intel's prior written
permission.


 This software and the related documents are provided as is, with no express
or implied warranties, other than those that are expressly stated in the
License.

******************************************************************************/

#pragma once

#include <igpa-config.h>

namespace gpa {
namespace dynamic_directx {

//! @brief Function for loading directx functions dynamically.
//! @details Function pointers are obtained from directx libraries
//!     present on host system.
//! @return True if directx module is found and functions are loaded, false otherwise.
GPA_EXPORT bool LoadDirectXFunctions();

}  // namespace dynamic_directx
}  // namespace gpa
