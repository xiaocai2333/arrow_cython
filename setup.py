# from distutils.core import setup, Extension
from Cython.Build import cythonize
from setuptools import setup, Extension

import os
import numpy as np
import pyarrow as pa

gis_modules = cythonize(Extension(name="TestArrow", sources=["test_arrow.pyx"],
                                  compiler_directives={"language_level": 3}))


for ext in gis_modules:
    # The Numpy C headers are currently required
    ext.include_dirs.append(np.get_include())
    ext.include_dirs.append(pa.get_include())
    ext.libraries.extend(pa.get_libraries())
    ext.library_dirs.extend(pa.get_library_dirs())

    if os.name == 'posix':
        ext.extra_compile_args.append('-std=c++11')

    # Try uncommenting the following line on Linux
    # if you get weird linker errors or runtime crashes
    ext.define_macros.append(("_GLIBCXX_USE_CXX11_ABI", "0"))

setup(
    name="TestArrow",
    ext_modules=gis_modules)
