/*
 *
 * Copyright 2019 Daniil Kazantsev
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


#include <math.h>
#include <stdlib.h>
#include <memory.h>
#include <stdio.h>
#include "omp.h"
#include "utils.h"

#ifdef __cplusplus
extern "C" {
#endif
float autocropper_main(float *Input, float *mask_box, float *crop_indeces, int margin_size, int statbox_size, int dimX, int dimY, int dimZ);
/************2D functions ***********/
float stat_collector2D(float *Input, float *mask_box, int statbox_size, int dimX, int dimY);
/************3D functions ***********/

#ifdef __cplusplus
}
#endif