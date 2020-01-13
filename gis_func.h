//
// Created by zc on 20-1-10.
//

#ifndef CYTHON_ARROW_GIS_FUNC_H
#define CYTHON_ARROW_GIS_FUNC_H
using namespace std;

namespace gis {

shared_ptr<arrow::Array>
gis_func(shared_ptr<arrow::Array> arr_ptr1, shared_ptr<arrow::Array> arr_ptr2);

}
#endif //CYTHON_ARROW_GIS_FUNC_H
