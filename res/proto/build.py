import sys
import os, os.path

os.system('protoc MessageBase.proto --cpp_out=../../src/proto')
os.system('protoc SMsgBaseS.proto --cpp_out=../../src/proto')
