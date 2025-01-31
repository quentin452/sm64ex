#ifndef _CLIOPTS_H
#define _CLIOPTS_H

#include <!sm64/src/pc/platform.h>

struct PCCLIOptions {
    unsigned int SkipIntro;
    unsigned int FullScreen;
    unsigned int PoolSize;
    char ConfigFile[SYS_MAX_PATH];
    char SavePath[SYS_MAX_PATH];
    char GameDir[SYS_MAX_PATH];
};

extern struct PCCLIOptions gCLIOpts;

void parse_cli_opts(int argc, char *argv[]);

#endif // _CLIOPTS_H
