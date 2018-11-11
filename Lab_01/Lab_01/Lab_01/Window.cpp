#include "stdafx.h"
#include "Window.h"
#include <string>
#include <iostream>


Window::Window()
{
	width = rand() % 1 + 3;
	height = 1;
}

Window::Window(int w, int h)
{
	width = w;
	height = h;
}

Window::~Window()
{
}

int Window::getWidht()
{
	return width;
}

void Window::setWidth(int new_width)
{
	width = new_width;
}

int Window::getHeight()
{
	return height;
}

void Window::setHeight(int new_height)
{
	height = new_height;
}