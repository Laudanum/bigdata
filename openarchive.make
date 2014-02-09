core = 7.x

api = 2

; Modules

; developer
projects[devel][subdir] = "developer"

projects[entity][subdir] = "contrib"
projects[entityreference][subdir] = "contrib"
; enable entity referecne + feeds
; http://drupal.org/node/1616680
projects[entityreference][version] = "1.x-dev"


; admin
projects[views_bulk_operations][subdir] = "contrib"
projects[admin_menu][subdir] = "contrib"
projects[admin_views][subdir] = "contrib"
projects[admin][subdir] = contrib
projects[token][subdir] = "contrib"
projects[libraries][subdir] = "contrib"

projects[xmlsitemap][subdir] = "contrib"
projects[google_analytics][subdir] = "contrib"
projects[advanced_help][subdir] = "contrib"

projects[migrate][subdir] = "contrib"
projects[migrate_d2d][subdir] = "contrib"

projects[ctools][subdir] = "contrib"
projects[views][subdir] = "contrib"
projects[views_field_view][subdir] = "contrib"

projects[views_load_more][subdir] = "contrib"
projects[views_load_more][version] = 1.x-dev
projects[views_load_more][patch][1889300-5] = "http://drupal.org/files/issues/views_load_more-waypoints_destroy-1889300-5.patch"
projects[views_load_more][patch][1644036-11] = "http://drupal.org/files/views_load_more-issue-1644036.diff"
projects[views_load_more][patch][1962804-8] = "http://drupal.org/files/issues/views_load_more-multiple_pagers_with_waypoint-1962804-8.patch"
projects[views_load_more][patch][1382176-7] = "http://drupal.org/files/issues/views_load_more-reclass_views_rows-1382176-7.patch"
projects[waypoints][subdir] = "contrib"
projects[waypoints][version] = 1.x-dev
libraries[jquery-waypoints][download][type] = "git"
libraries[jquery-waypoints][download][url] = "https://github.com/imakewebthings/jquery-waypoints.git"

projects[wysiwyg][subdir] = "contrib"
projects[linkit][subdir] = "contrib"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.4.2/ckeditor_3.4.2.tar.gz"

; deployment
projects[features][subdir] = "contrib"
projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.x"
projects[module_filter][subdir] = "contrib"
projects[strongarm][subdir] = "contrib"

; fields
projects[link][subdir] = "contrib"
projects[name][subdir] = "contrib"
projects[taxonomy_manager][subdir] = "contrib"
projects[term_merge][subdir] = "contrib"
projects[date][subdir] = "contrib"

; Themes
themes[shiny][subdir] = "contrib"

; Big Data

; Schema.org
projects[schemaorg][subdir] = "contrib"

; OAI (Open Archives Initiative)
; producer
projects[views_oai_pmh][subdir] = "contrib"

; consumer
projects[feeds_oai_pmh][subdir] = "contrib"
projects[feeds_oai_pmh][version] = "1.x-dev"
projects[feeds][subdir] = "contrib"

; Crawling
projects[querypath][subdir] = "contrib"
projects[feeds_querypath_parser][subdir] = "contrib"
projects[feeds_crawler][subdir] = "contrib"

; RDF
projects[rdfx][subdir] = "contrib"
projects[sparql][subdir] = "contrib"
