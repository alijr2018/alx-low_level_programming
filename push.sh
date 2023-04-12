!#/bin/bash

echo "your message"

read commit

git add .

git commit -m " $commit "

git push
