#!/bin/bash
. variables.sh
DATE=`eval date +%Y%m%d-%H%M`

# site install
cd $DEST && sudo -u $WWWUSER drush $VERBOSE -y si --db-url=mysqli://$DBUSER:$DBPASS@$DBHOST/$DBNAME \
$PROFILE --account-name=$ACCOUNTNAME --account-pass=$ACCOUNTPASS --account-mail=$ACCOUNTEMAIL \
\--site-mail=$ACCOUNTEMAIL --site-name="$SITENAME";