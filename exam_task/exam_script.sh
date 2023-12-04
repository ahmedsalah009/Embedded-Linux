#!/bin/bash

find . -iname app.log

log_file="app.log"

error_messages=$(grep -o '^\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2} \K.*(?=error)' "$log_file" | sort | uniq -c)

echo "$error_messages"


while read -r $error_message  error




