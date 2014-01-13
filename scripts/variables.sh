#!/bin/bash

VERBOSE="-v --debug"

PROFILE=bigdata
DEST=local
SITENAME="On Journal ($DEST)"
TLD=onjournal.org
DOMAIN=$DEST.$TLD
SITESUBDIR=$DOMAIN

# MAKE="https://raw.github.com/Laudanum/bigdata/develop/build-bigdata.make?token=694770__eyJzY29wZSI6IlJhd0Jsb2I6TGF1ZGFudW0vb24vZGV2ZWxvcC9idWlsZC1vbnByb2ZpbGUubWFrZSIsImV4cGlyZXMiOjEzODk3MzAxNTV9--dfbc024eda95eb00e36d0ce8187b2f8b06211e59"

WWWUSER=vagrant

DBUSER=vagrant
DBPASS=$DBUSER
DBHOST=127.0.0.1
DBNAME=onjournal_org_local

ACCOUNTNAME=laudanum
ACCOUNTPASS=$ACCOUNTNAME
ACCOUNTEMAIL=mr.snow@houseoflaudanum.com

