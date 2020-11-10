#pragma once
#include <string>
#include<iostream>
using namespace std;

class Employee
{
public:
	Employee();
	virtual ~Employee() = 0;

	Employee(const std::string& name, const std::string& lastName, const std::string& gender, const std::string& yearBirth, const std::string& yearActivity, const double& rating, const int countImages);

	Employee(std::string name);
	void print();

	virtual void photosession();

	void setName(const std::string& name);
	void setLastName(const std::string& lastName);
	void setGender(const std::string& gender);
	void setYearBirth(const std::string& yearBirth);
	void setYearActivity(const std::string& yearActivity);
	void setRating(const double& rating);
	void setCountImages(const int& countImages);

	std::string getName() const;
	std::string getLastName() const;
	std::string getGender() const;
	std::string getYearBirth() const;
	std::string getYearActivity() const;
	double getRating() const;
	int getCountImages() const;

protected:
	std::string name_;
	std::string lastName_;
	std::string gender_;
	std::string yearBirth_;
	std::string yearActivity_;
	double rating_;
	int countImages_;
};
