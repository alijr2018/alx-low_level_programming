!#/bin/bash

git add .

git status

echo "your message"

read commit

git commit -m "$commit"

git push
