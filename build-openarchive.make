api = 2
core = 7.x

; Include Drupal core and any core patches.
includes[] = "https://raw2.github.com/Laudanum/openarchive/master/drupal-org-core.make"

; Download the Big Data install profile
projects[openarchive][type] = profile
projects[openarchive][download][type] = git
projects[openarchive][download][url] = "git@github.com:Laudanum/openarchive.git"
