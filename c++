#!/bin/bash

if [ -z "$1" ]; then
  echo "Использование: $0 <исходный_файл.cpp>"
  exit 1

fi
input_file=$1

output_name="${input_file%.*}"
g++ "$input_file" -o "$output_name"
if [ $? -ne 0 ]; then
  echo "Ошибка компиляции!"
  exit 1
fi

echo
"./$output_name"
echo
rm "$output_name"
