#include "gpnn.h"

void GPNN::grow()
{
	// randomly generate new perceptron


	// randomly adding new connections between existed neurons
	
}

void GPNN::prune()
{
	// if perceptron has no connection with any other
	// then remove it

	// if connection has a weight of smaller than minimum
	// then remove it

}

void GPNN::turn_on()
{
	machine_state = true;
	// turn on the network and run it in a clock driven system
	while(machine_state)
	{
		grow(); // in a random probability 
		clock_tick(); // stream moves a step
		prune(); // prune unncessary connections and perceptrons
	}
}

void GPNN::clock_tick()
{
	// stream moves
	
}

void GPNN::feed_data(double *input, double *output)
{
	// input a sample to the front of network
}

void GPNN::do_request(double *input, double *output)
{
	// input a vector of stimulation to guess the reflect
	
	// return with output
}

void GPNN::turn_off()
{
	machine_state = false;
}

// constructor
GPNN::GPNN()
{
	// initialize the GPNN network
	
}

GPNN::~GPNN()
{
	// finalizing job

}
