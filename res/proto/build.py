import sys
import os, os.path

def build_file(file_dir):
    for root, dirs, files in os.walk(file_dir):
        for filename in files:
            if filename != 'build.py':
                os.system('protoc ' + filename + ' --cpp_out=../../src/proto')
                print(filename + " build ok!")

build_file(".")
