#!/bin/bash

protoc --c_out=../faultplugin/protobuf ./control.proto
protoc --python_out=./ --pyi_out=./ ./control.proto

protoc --c_out=../faultplugin/protobuf ./fault.proto
protoc --python_out=./ --pyi_out=./ ./fault.proto

protoc --c_out=../faultplugin/protobuf ./data.proto
protoc --python_out=./ --pyi_out=./ ./data.proto

