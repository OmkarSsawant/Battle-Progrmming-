#!/bin/bash

$COMMIT_MSG=$2

$BRANCH="main"

if [ ! -z $3 ]then;
	$BRANCH=$3

cd ..

exec "git add ."

exec "git commit -m $COMMIT_MSG"

exec "git push -u origin $BRANCH"





