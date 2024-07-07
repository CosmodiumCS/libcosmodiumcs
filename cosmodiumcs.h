#ifndef COSMODIUMCS_H
#define COSMODIUMCS_H
#include <stdio.h>

// debugging & logging messages
#define ccs_confirm(message) printf("[+] %s\n", message)
#define ccs_deny(message) printf("[-] %s\n", message)
#define ccs_error(message) printf("[!] ERROR : %s\n", message)
#define ccs_info(message) printf("[$] %s\n", message)
#define ccs_input(message) printf("[~] %s : \n", message)
#define ccs_pending(message) printf("[*] %s...\n", message)
#define ccs_warning(message) printf("[!] %s\n", message)

#endif // COSMODIUMCS_H
