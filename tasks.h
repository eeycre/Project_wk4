#ifndef TASKS_ADDER_H
#define TASKS_ADDER_H

#ifdef WIN32
    #ifdef tasks_STATIC
	  #define TASK_API

	#else
	  #ifdef tasks_EXPORTS
	  #define TASK_API__declspec(dllexport)

	#else 
	  #define TASK_API__declspec(dllimport)
        #endif
#endif

#else
 #define TASK_API
#endif#

class TASKS_API Task{
public:
	Task(float a, float b);
	~Task();
	Task& operator=(const Task &T);
	float a;
	float b;	
};

#endif

