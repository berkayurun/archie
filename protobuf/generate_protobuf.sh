#!/bin/bash

protoc -I=./ --c_out=../faultplugin/ ./control.proto
protoc -I=./ --python_out=../ --pyi_out=../ ./control.proto

protoc -I=./ --c_out=../faultplugin/ ./fault.proto
protoc -I=./ --python_out=../ --pyi_out=../ ./fault.proto

protoc -I=./ --c_out=../faultplugin/ ./data.proto
protoc -I=./ --python_out=../ --pyi_out=../ ./data.proto

