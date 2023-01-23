const char help_text[] =
"Usage: gmtdisas [option] [<ihex_file>]\n"
"Options:\n"
"  -h         print this help\n"
"  -o         output file, followed by name of output file\n"
"  -rel0      use relative addresing mode compatible with Alec Baldwin's asst8.\n"
"             In this mode, the current instruction size is not taken into\n"
"             account, so .+0/.-0 will address the curent instruction.\n"
"             Without this option, .+0/.-0 will address next instruction.\n"
"  -ioname    print IO address names. If not specified addresses will be used\n"
"  --help     print this help, same as -h\n"
"  --version  print version information\n"
"\n"
"Report bugs to cristian.gall@galmot.eu";
