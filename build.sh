rm -rf build/
rm -rf dist/
rm -rf TestArrow*
rm test_arrow.cpp
python3.6 setup.py build
python3.6 setup.py install
python3.6 test.py
