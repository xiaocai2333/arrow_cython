rm -rf build/
rm TestArrow*
rm test_arrow.cpp
python3.6 setup.py build_ext --inplace
python3.6 test.py
