# distutils: language = c++

from pyarrow.lib cimport *

cimport test_arrow

def make_point(object arr_x, object arr_y):
    return pyarrow_wrap_array(test_arrow.make_point(pyarrow_unwrap_array(arr_x), pyarrow_unwrap_array(arr_y)))

def make_point2(object arr_x):
    return pyarrow_wrap_array(test_arrow.make_point(pyarrow_unwrap_array(arr_x)))

def gis_func(object arr_x, object arr_y):
    return pyarrow_wrap_array(test_arrow.gis_func(pyarrow_unwrap_array(arr_x), pyarrow_unwrap_array(arr_y)))

