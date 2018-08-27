#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sys/types.h>
#include <string.h>

using namespace std;

int main()
{
system("echo -e 'password\npassword' | adduser username");
system("adduser username sudo");

return 0;
}
