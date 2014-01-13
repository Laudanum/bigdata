#!/bin/bash
MY_PATH="`dirname \"$0\"`"
. $MY_PATH/variables.sh

git push
ssh wahapu "cd /srv/www/$TLD/versions/production/profiles/$PROFILE && git pull"; # && drush cc css-js"
