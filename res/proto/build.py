import sys
import os, os.path

os.system('protoc msgBase.proto --cpp_out=../../src/proto')
