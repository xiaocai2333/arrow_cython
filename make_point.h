//
// Created by zc on 20-1-9.
//

#ifndef CYTHON_ARROW_MAKE_POINT_H
#define CYTHON_ARROW_MAKE_POINT_H


#include <string>
#include <iostream>
#include <stdint.h>

#include "arrow/api.h"

std::shared_ptr<arrow::Array>
make_point(std::shared_ptr<arrow::Array> arr_x,
           std::shared_ptr<arrow::Array> arr_y);


std::shared_ptr<arrow::Array>
make_point(std::shared_ptr<arrow::Array> arr_x
           );
#endif //CYTHON_ARROW_MAKE_POINT_H
