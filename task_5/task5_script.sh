#!/bin/bash
sudo useradd yourname
cat /etc/passwd | grep "yourname"
usermod -aG FamilyName yourname
cat /etc/group | grep "FamilyName"


