/* This works has been developed at Diamond Light Source Ltd.
 *
 * Copyright 2020 Daniil Kazantsev
  *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef DLSDEFINES_H
#define DLSDEFINES_H

#if defined(_WIN32) || defined(__WIN32__)
  #if defined(DLSCore_EXPORTS) || defined(DLSNexusWidget_EXPORTS) || defined(ContourTreeSegmentation_EXPORTS) || defined(ContourTree_EXPORTS)// add by CMake 
    #define  DLS_EXPORT __declspec(dllexport)
    #define EXPIMP_TEMPLATE
  #else
    #define  DLS_EXPORT __declspec(dllimport)
    #define EXPIMP_TEMPLATE extern
  #endif /* DLS_EXPORTS */
#elif defined(linux) || defined(__linux) || defined(__APPLE__)
 #define DLS_EXPORT
#endif

#endif
