//
// Created by zc on 20-1-10.
//
#include <iostream>
#include "arrow/api.h"
#include <stdlib.h>
#include <unistd.h>


using namespace std;

namespace gis {
shared_ptr<arrow::Array> gis_func(shared_ptr<arrow::Array> arr_ptr1, shared_ptr<arrow::Array> arr_ptr2) {
    auto int_array1 = static_pointer_cast<arrow::Int64Array>(arr_ptr1);
    auto int_array2 = static_pointer_cast<arrow::Int64Array>(arr_ptr2);

    auto length = int_array1->length();
    assert(length == int_array2->length());

    arrow::StringBuilder builder;
    arrow::Status status;
    shared_ptr<arrow::Array> out_array;

    string aaa = "aaa";
    string bbb = "ccc";
    string ccc = aaa + bbb;

    char buff[1000];
    getcwd(buff, 500);
    cout << buff << endl;
    cout << ccc << endl;

    for (int i = 0; i < length; ++i) {
        status = builder.Append(to_string(int_array1->Value(i)) + to_string(int_array2->Value(i)));
    }

    status = builder.Finish(&out_array);

    return out_array;
}
}
