from pyarrow.lib cimport *


cdef extern from "make_point.cpp":
    pass

cdef extern from "make_point.h":
    cdef shared_ptr[CArray] make_point(shared_ptr[CArray], shared_ptr[CArray])
    cdef shared_ptr[CArray] make_point(shared_ptr[CArray])


cdef extern from "gis_func.cpp":
    pass

cdef extern from "gis_func.h" namespace "gis":
    cdef shared_ptr[CArray] gis_func(shared_ptr[CArray], shared_ptr[CArray])
