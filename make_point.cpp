//
// Created by zc on 20-1-9.
//


#include <string>
#include <iostream>
#include <stdint.h>

#include "arrow/api.h"
#include "make_point.h"

std::shared_ptr<arrow::Array>
make_point(std::shared_ptr<arrow::Array> arr_x
           ) {
    return arr_x;
}

std::shared_ptr<arrow::Array>
make_point(std::shared_ptr<arrow::Array> arr_x,
           std::shared_ptr<arrow::Array> arr_y) {

    auto d_arr_x = std::static_pointer_cast<arrow::DoubleArray>(arr_x);
    auto d_arr_y = std::static_pointer_cast<arrow::DoubleArray>(arr_y);

    std::shared_ptr<arrow::Array> point_arr;
    //此处可以自己定义自己的Array
    arrow::StringBuilder builder;
    arrow::Status status;

    float a = 1.001;
    float b = 2.0102;

//    status = builder.Append(std::to_string(a));
    status = builder.Append(std::to_string(b) + std::to_string(a));

//    status = builder.Append("aaa");
//    status = builder.Append("bbb");

    status = builder.Finish(&point_arr);

    return point_arr;
}