#include <iostream>


#include "make_point.h"
#include "gis_func.h"
#include "arrow/api.h"


using namespace std;

int main() {
    shared_ptr<arrow::Array> arr_ptr1;
    shared_ptr<arrow::Array> arr_ptr2;

    arrow::Int64Builder builder1;
    shared_ptr<arrow::Array> arr_test_2;
    arrow::Status status2;
    status2 = builder1.Append(1);
    status2 = builder1.Append(2);
    status2 = builder1.Append(3);
    status2 = builder1.Append(4);
    status2 = builder1.Append(5);

    status2 = builder1.Finish(&arr_test_2);

    arrow::Int64Builder builder2;
    shared_ptr<arrow::Array> arr_test_3;
    arrow::Status status3;
    status3 = builder1.Append(1);
    status3 = builder1.Append(2);
    status3 = builder1.Append(3);
    status3 = builder1.Append(4);
    status3 = builder1.Append(5);

    status3 = builder1.Finish(&arr_test_3);

    auto test_arr = make_point(arr_ptr1, arr_ptr2);

    auto string_arr = static_pointer_cast<arrow::StringArray>(test_arr);

    auto string_test = gis::gis_func(arr_test_2, arr_test_3);

    auto string_arr2 = static_pointer_cast<arrow::StringArray>(string_test);

    for (int j = 0; j < string_arr2->length(); ++j) {
        cout << string_arr2->GetString(j) << endl;
    }

    for (int i = 0; i < string_arr->length(); ++i) {
        cout << string_arr->GetString(i) << endl;
    }

    return 0;
}