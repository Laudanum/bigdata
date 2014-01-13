#!/bin/bash

# VERBOSE="-v --debug"
VERBOSE=""

PROFILE=bigdata
DEST=local
SITENAME="Big Data ($DEST)"
TLD=bigdata.example.com
DOMAIN=$DEST.$TLD
SITESUBDIR=$DOMAIN

MAKE="https://raw.github.com/Laudanum/bigdata/master/build-bigdata.make"

WWWUSER=rossetti

DBUSER=vagrant
DBPASS=$DBUSER
DBHOST=127.0.0.1
DBNAME=bigdata_example_com_local

ACCOUNTNAME=admin
ACCOUNTPASS=$ACCOUNTNAME
ACCOUNTEMAIL=admin@example.com

