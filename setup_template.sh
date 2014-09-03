#!/bin/sh

TEMPLATE_2dx_Scene="2dx Scene Class.xctemplate"
TEMPLATE_PATH="/Applications/Xcode.app/Contents/Developer/Library/Xcode/Templates/File Templates/C and C++/"

echo $TEMPLATE_2dx_Scene
echo "copy to"
echo $TEMPLATE_PATH
echo 

cp -fr "$TEMPLATE_2dx_Scene" "$TEMPLATE_PATH"
