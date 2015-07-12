// this should be a single file which controls the serial number

// a global variable that cannot be directly accessed outside this file
static int serial = 0;

int next_serial();
void startup_serial(int seed);

int next_serial(){
    serial += 1;
    return serial;
}

void startup_serial(int seed){
    serial = seed;
}

