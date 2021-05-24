#!/bin/bash

$COMMIT_MSG=$3;

$BRANCH="main";



if [ ! -z $3 ]then;
	$BRANCH=$2;
	
echo "commiting to $BRANCH with message $COMMIT_MSG";


exit 
cd ..
git add .

git commit -m "$COMMIT_MSG"
git push -u origin "$BRANCH"





