// cosmodiumcs.h test file
// created by : bluecosmo

// imports
#include <stdio.h>
#include <stdlib.h>
#include "cosmodiumcs.h"

// main code
int main(int argc, char* argv[]) {

    // debugging & logging example
    ccs_confirm("Access granted");
    ccs_deny("Permission denied");
    ccs_error("Wrong password, try again");
    ccs_info("Created by : bluecosmo");
    ccs_input("Enter your name");
    ccs_pending("Connecting");
    ccs_warning("User activity is being logged");

    return EXIT_SUCCESS;
}
