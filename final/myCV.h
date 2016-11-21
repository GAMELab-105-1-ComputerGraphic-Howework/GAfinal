#pragma once
#include <iostream>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\opencv.hpp>
#include <opencv2\imgproc\imgproc.hpp>

using namespace std;
using namespace cv;

class myCV
{
public:
	myCV();
	~myCV();
	void loadFile(string path);
	bool saveFile(string path,int i = 0);
	bool isEmpty();
	bool smallIsEmpty();
	void show(int i = 0); 
	void myresize();
	void mySSIM();

private:
	Mat image;
	Mat imageSmall;
};

