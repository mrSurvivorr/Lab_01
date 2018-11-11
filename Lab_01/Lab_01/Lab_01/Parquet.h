#pragma once
class Parquet
{
public:
	Parquet();
	Parquet(unsigned int l, unsigned int w);
	~Parquet();
	unsigned int getWidth();
	void setWidth(unsigned int new_width);
	unsigned int getLength();
	void setLength(unsigned int new_length);
private:
	unsigned int length;
	unsigned int width;
};

