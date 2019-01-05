#include "Buffer.hpp"

int main(int argc, char** argv)
{
	Buffer<float> aBuffer(20);

	for(int i = 0; i != 20; ++i)
		aBuffer[aBuffer.bufferIndex_++] = (float)i;

	aBuffer.print();

	return 0;
}