#!/bin/bash

awk -F ' ' '{print $4 $5}' ./app.log | sort | uniq -c | sort -nr




