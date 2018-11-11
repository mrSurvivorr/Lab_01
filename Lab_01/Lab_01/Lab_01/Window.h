#pragma once
class Window
{
public:
	Window();
	Window(int w, int h);
	~Window();
	int getWidht();
	void setWidth(int new_width);
	int getHeight();
	void setHeight(int new_height);
private:
	int width;
	int height;
};

