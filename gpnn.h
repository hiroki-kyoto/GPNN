#include "base.h"

class GPNN
{
private:
	unsigned long perceptron_size;
	unsigned long connection_size;
	connection network[_MAX_];
	bool machine_state;

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
