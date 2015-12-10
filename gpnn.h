#include "base.h"

class GPNN
{
private:
	unsigned long cp; // count of perceptron
	unsigned long cc; // count of connection
	perceptron perceptrons[MAX_COUNT_OF_PERCEPTRON]
	connection connections[MAX_COUNT_OF_CONNECTION];
	bool machine_state; // machine state to identify working status

public:
	GPNN();
	~GPNN();
	void grow();
	void prune();
	void clock_tick();
	void turn_on();
	void turn_off();
	// each time for a sample
	void feed_data(double* input, double *output);
	void do_request(double* input, double *output);
}
