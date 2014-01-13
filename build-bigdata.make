api = 2
core = 7.x

; Include Drupal core and any core patches.
includes[] = "https://raw.github.com/Laudanum/bigdata/develop/drupal-org-core.make?token=694770__eyJzY29wZSI6IlJhd0Jsb2I6TGF1ZGFudW0vb24vZGV2ZWxvcC9kcnVwYWwtb3JnLWNvcmUubWFrZSIsImV4cGlyZXMiOjEzODk3MzAxNzJ9--8038067bac274185bf6b9772867008542ee85d88"

; Download the Big Data install profile
projects[onprofile][type] = profile
projects[onprofile][download][type] = git
projects[onprofile][download][url] = "git@github.com:Laudanum/bigdata.git"
projects[onprofile][download][branch] = develop