from setuptools import setup, Extension

setup(
    name="my_module",
    ext_modules=[
        Extension(
            "my_module",
            ["my_module.cpp"],
            language="c++"
        )
    ]
)