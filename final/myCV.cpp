#pragma once
#include "myCV.h"

myCV::myCV(){

}

myCV::~myCV() {

}

void myCV::loadFile(string path) {
	image = imread(path, 1);
	if (image.empty()) {
		cout << "load image does not success." << endl;
	}
}

bool myCV::saveFile(string path,int i) {
	bool isSuccess = false;
	switch (i) {
		case 0:
			if (isEmpty())
				cout << "save error, because no image." << endl;
			else {
				if (imwrite(path, image))
					isSuccess = true;
			}
			break;
		case 1:
			if(smallIsEmpty())
				cout << "save error, because no image." << endl;
			else {
				if (imwrite(path, imageSmall))
					isSuccess = true;
			}
			break;
	}
	return isSuccess;
}

void myCV::show(int i) {
	switch(i){
		case 0:
			if (this->isEmpty())
				cout << "error,no image." << endl;
			else
				imshow("Image", image);
			break;
		case 1:
			if (this->smallIsEmpty())
				cout << "error,no image." << endl;
			else
				imshow("Lab_Image", imageSmall);
			break;
	};
}

bool myCV::isEmpty() {
	return image.empty();
}

bool myCV::smallIsEmpty() {
	return imageSmall.empty();
}

void myCV::myresize() {
	resize(image, imageSmall, cv::Size(), 0.5, 0.5);
	imshow("test", imageSmall);
	resize(imageSmall, imageSmall, cv::Size(), 2, 2);
	imshow("test2", imageSmall);
	Mat temp = image - imageSmall;
	temp *= 20;
	imshow("minasu", temp);
	Mat temp2 = imageSmall - image;
	temp2 *= 20;
	imshow("minasu2", temp2);
}

void myCV::mySSIM() {
	
}