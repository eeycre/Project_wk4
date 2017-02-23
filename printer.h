#ifndef PRINTER_ADDER_H
#define PRINTER_ADDER_H

#ifdef WIN32
  #ifdef printer_STATIC
    #define PRINTER_API
  #else
    #ifdef printer_EXPORTS
      #define PRINTER_API __declspec(dllexport)
    #else
      #define PRINTER_API __declspec(dllimport)
    #endif
  #endif
#else
  #define PRINTER_API
#endif

PRINTER_API void print(task a_task, float result)

#endif
