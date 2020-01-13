import pyarrow
import TestArrow

print(TestArrow.make_point(pyarrow.array([1,2,3,4]), pyarrow.array([2,3,4,5])))
print(TestArrow.make_point2(pyarrow.array([1,2,3,4])))
print(TestArrow.gis_func(pyarrow.array([1,2,3,4]), pyarrow.array([2,3,4,5])))
