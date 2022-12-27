#!/bin/bash

protoc -I=./ --c_out=../faultplugin/ ./fault.proto
protoc -I=./ --python_out=../ --pyi_out=../ ./fault.proto

