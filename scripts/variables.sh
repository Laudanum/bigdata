#!/bin/bash

# VERBOSE="-v --debug"
VERBOSE=""

PROFILE=openarchive
DEST=local
SITENAME="Open Archive ($DEST)"
TLD=openarchive.example.com
DOMAIN=$DEST.$TLD
SITESUBDIR=$DOMAIN

MAKE="https://raw.github.com/Laudanum/openarchive/master/build-openarchive.make"

WWWUSER=rossetti

DBUSER=vagrant
DBPASS=$DBUSER
DBHOST=127.0.0.1
DBNAME=openarchive_example_com_local

ACCOUNTNAME=admin
ACCOUNTPASS=$ACCOUNTNAME
ACCOUNTEMAIL=admin@example.com

