#! /bin/bash

while read txt_line
do
    re="^(\([0-9]{3}\) \S?|[0-9]{3}-?)[0-9]{3}-[0-9]{4}$"
  	if [[ $(echo $txt_line | tr -d '[[:space:]]') = "123456789" ]]; then
		continue
    elif [[ $txt_line =~ $re ]]; then
        echo $txt_line
    fi
done < file.txt
