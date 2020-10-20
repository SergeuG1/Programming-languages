#pragma once
#include <string>
#include<iostream>

class Photographer {
public:
	Photographer();

	Photographer(const std::string& name,
		const std::string& lastName,
		const std::string& gender,
		const std::string& yearBirth,
		const std::string& yearActivity,
		const double& rating);

	Photographer(std::string name);

	~Photographer();
	void photosession();

	void setName(const std::string& name);
	void setLastName(const std::string& lastName);
	void setGender(const std::string& gender);
	void setYearBirth(const std::string& yearBirth);
	void setYearActivity(const std::string& yearActivity);
	void setRating(const double& rating);

	std::string getName() const;
	std::string getLastName() const;
	std::string getGender() const;
	std::string getYearBirth() const;
	std::string getYearActivity() const;
	double getRating() const;

	//void serialize();
	//void deserialize();

	//void serialize(const std::string& filename);
	//void deserialize(const std::string& filename);


	void selectionOfPhotographers(Photographer ph1, Photographer ph2, Photographer ph3);

private:
	std::string name_;
	std::string lastName_;
	std::string gender_;
	std::string yearBirth_;
	std::string yearActivity_;
	double rating_;

};

