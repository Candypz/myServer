import sys
import os, os.path

def file_name(file_dir):
    for root, dirs, files in os.walk(file_dir):
        for filename in files:
            if filename != 'build.py':
                os.system('protoc ' + filename + ' --cpp_out=../../src/proto')
                print(filename + " build ok!")

file_name(".")
