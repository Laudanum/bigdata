#!/bin/bash
. variables.sh
DATE=`eval date +%Y%m%d-%H%M`

sudo -u $WWWUSER drush make $VERBOSE --force-complete --prepare-install --working-copy --no-gitinfofile "$MAKE" $DEST && \
# site install
cd $DEST && sudo -u $WWWUSER drush $VERBOSE -y si --db-url=mysqli://$DBUSER:$DBPASS@$DBHOST/$DBNAME \
$PROFILE --account-name=$ACCOUNTNAME --account-pass=$ACCOUNTPASS --account-mail=$ACCOUNTEMAIL \
\--site-mail=$ACCOUNTEMAIL --site-name="$SITENAME";

# Copy aliases into place
if [ -f "$DEST/profiles/$PROFILE/scripts/*aliases.drushrc.php" ]
  then 
  sudo -u $WWWUSER cp "$DEST/profiles/$PROFILE/scripts/*aliases.drushrc.php" "$DEST/sites/default/"
fi