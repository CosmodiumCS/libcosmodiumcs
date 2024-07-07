# libcosmodiumcs

## Debugging Style Guide
Input:
```c
// debugging & logging example
ccs_confirm("Access granted");
ccs_deny("Permission denied");
ccs_error("Wrong password, try again");
ccs_info("Created by : bluecosmo");
ccs_input("Enter your name");
ccs_pending("Connecting");
ccs_warning("User activity is being logged");
```
Output:
```
[+] Access granted
[-] Permission denied
[!] ERROR : Wrong password, try again
[$] Created by : bluecosmo
[~] Enter your name :
[*] Connecting...
[!] User activity is being logged
```
