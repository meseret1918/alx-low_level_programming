#!/bin/bash
git add .
echo "enter your commit message"
read commit message
git commit -m "$commit message"
git push
