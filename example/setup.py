#!/usr/bin/env python3

from setuptools import setup, Extension

setup (
	name = "example",
	version = "0.1.0",
	ext_modules = [Extension("example", ["wrapper.c", "main.c"])])