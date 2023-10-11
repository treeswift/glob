project('glob', 'c',
      version : '1.0.3',
      default_options : ['warning_level=3'])

add_global_arguments('-Du_char=unsigned char', language: 'c')
add_global_arguments('-Du_short=unsigned short', language: 'c')
add_global_arguments('-Du_int=unsigned int', language: 'c')
add_global_arguments('-Dlstat=stat', language: 'c')
add_global_arguments('-DS_ISLNK(m)=0', language: 'c')
add_global_arguments('-DHAS_PWD_H', language: 'c')
add_global_arguments('-Dstrlcpy=strncpy', language: 'c')
add_global_arguments('-isystem', '.', language: 'c')

shared_library('glob',
  files(
    'fnmatch.c',
    'glob.c'
  ), install : true)

install_headers(
  files(
    'charclass.h',
    'glob.h',
    'fnmatch.h'
  ))
