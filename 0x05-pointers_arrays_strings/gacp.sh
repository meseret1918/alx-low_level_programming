#!/bin/bash
git add .
echo "enter your commit"
read commit
git commit -m "$commit"
git push
