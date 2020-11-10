#pragma once
#include<string>
#include<iostream>

class IPictureProcessor {
public:
	virtual void process(const std::string& photo_path) = 0;
};