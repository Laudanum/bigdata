api = 2
core = 7.x

; Include Drupal core and any core patches.
includes[] = "https://raw2.github.com/Laudanum/bigdata/master/drupal-org-core.make"

; Download the Big Data install profile
projects[bigdata][type] = profile
projects[bigdata][download][type] = git
projects[bigdata][download][url] = "git@github.com:Laudanum/bigdata.git"
