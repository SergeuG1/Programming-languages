#include "Photographer.h"
#include <iostream>
#include <string>
#include <cmath>

Photographer::Photographer()
{
	lastName_ = "unnamed";
	gender_ = "neuter";
	yearBirth_ = "00.00.00";
	yearActivity_ = "00.00.00";
	rating_ = 0.0;
}

Photographer::Photographer(const std::string& name,
	const std::string& lastName,
	const std::string& gender, 
	const std::string& yearBirth,
	const std::string& yearActivity,
	const double& rating) : name_(name),
	lastName_(lastName), gender_(gender),
	yearBirth_(yearBirth),
	yearActivity_(yearActivity),
	rating_(rating) { }



Photographer::Photographer(std::string name) : name_(name) {

	lastName_ = "unnamed";
	gender_ = "neuter";
	yearBirth_ = "00.00.00";
	yearActivity_ = "00.00.00";
	rating_ = 0.0;
}
Photographer::~Photographer() {

}

void Photographer::photosession()
{
	int numberOfVoters = 1 + rand() % 25;
	if (numberOfVoters > 10)
	{
		rating_ += round((double)rand() / RAND_MAX * 100) / 100;
	}

}

void Photographer::setName(const std::string& name) {
	name_ = name;
}
void Photographer::setLastName(const std::string& lastName) {
	lastName_ = lastName;
}
void Photographer::setGender(const std::string& gender) {
	gender_ = gender;
}
void Photographer::setYearBirth(const std::string& yearBirth) {
	yearBirth_ = yearBirth;
}
void Photographer::setYearActivity(const std::string& yearActivity) {
	yearActivity_ = yearActivity;
}
void Photographer::setRating(const double& rating) {
	rating_ = rating;
}


std::string Photographer::getName() const {
	return name_;
}
std::string Photographer::getLastName() const {
	return lastName_;
}
std::string Photographer::getGender() const {
	return gender_;
}
std::string Photographer::getYearBirth() const {
	return yearBirth_;
}
std::string Photographer::getYearActivity() const {
	return yearActivity_;
}
double Photographer::getRating() const{
	return rating_;
}

void Photographer::selectionOfPhotographers(Photographer ph1, Photographer ph2, Photographer ph3)
{
	Photographer rating[3] = {ph1, ph2, ph3};
	int length = sizeof(rating) / sizeof(rating[0]);
	for (size_t i = 0; i < length; i++)
	{
		for (size_t i = 0; i < length-1; i++)
		{
			if (rating[i].rating_ < rating[i + 1].rating_)
			{
				Photographer temp = rating[i];
				rating[i] = rating[i + 1];
				rating[i + 1] = temp;
			}
		}
		
	}


	for (size_t i = 0; i < length; i++)
	{
		std::cout << rating[i].getName() << "c рейтингом: " << rating[i].rating_ << std::endl;
	}


}
