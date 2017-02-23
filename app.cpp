#include <iostream>
#include <fstream.h>

#include "tasks.h"
#include "adder.h"
#include "printer.h"

main(){

ifstream fin("tasks.txt")

task a;

a =reader(fin);

printer(a);


}