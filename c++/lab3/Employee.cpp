#include"Employee.h"

Employee::Employee()
{
	lastName_ = "unnamed";
	gender_ = "neuter";
	yearBirth_ = "00.00.00";
	yearActivity_ = "00.00.00";
	rating_ = 0.0;
}

Employee::Employee(const std::string& name,
	const std::string& lastName,
	const std::string& gender,
	const std::string& yearBirth,
	const std::string& yearActivity,
	const double& rating, const int countImages) : name_(name),
	lastName_(lastName), gender_(gender),
	yearBirth_(yearBirth),
	yearActivity_(yearActivity),
	rating_(rating),countImages_(countImages)
{

}

void Employee::print() {
	cout << name_ << " " << lastName_ << " " << gender_ << "  rating: " << rating_ << "  totalPhotos: " << countImages_ << endl;

}

Employee::Employee(std::string name) : name_(name) {

	lastName_ = "unnamed";
	gender_ = "neuter";
	yearBirth_ = "00.00.00";
	yearActivity_ = "00.00.00";
	rating_ = 0.0;
	countImages_ = 0;
}
Employee::~Employee() {

}

void Employee::photosession()
{
	int numberOfVoters = 1 + rand() % 25;
    countImages_ = 1 + rand() % 5;
	if (numberOfVoters > 10)
	{
		rating_ += round((double)rand() / RAND_MAX * 100) / 100;
	}

}

void Employee::setName(const std::string& name) {
	name_ = name;
}
void Employee::setLastName(const std::string& lastName) {
	lastName_ = lastName;
}
void Employee::setGender(const std::string& gender) {
	gender_ = gender;
}
void Employee::setYearBirth(const std::string& yearBirth) {
	yearBirth_ = yearBirth;
}
void Employee::setYearActivity(const std::string& yearActivity) {
	yearActivity_ = yearActivity;
}
void Employee::setRating(const double& rating) {
	rating_ = rating;
}
void Employee::setCountImages(const int& countImages) {
	countImages_ = countImages;
}


std::string Employee::getName() const {
	return name_;
}
std::string Employee::getLastName() const {
	return lastName_;
}
std::string Employee::getGender() const {
	return gender_;
}
std::string Employee::getYearBirth() const {
	return yearBirth_;
}
std::string Employee::getYearActivity() const {
	return yearActivity_;
}
double Employee::getRating() const {
	return rating_;
}
int Employee::getCountImages() const {
	return countImages_;
}
//
//void Employee::selectionOfPhotographers(Employee ph1, Employee ph2, Employee ph3)
//{
//	Employee rating[3] = { ph1, ph2, ph3 };
//	int length = sizeof(rating) / sizeof(rating[0]);
//	for (size_t i = 0; i < length; i++)
//	{
//		for (size_t i = 0; i < length - 1; i++)
//		{
//			if (rating[i].rating_ < rating[i + 1].rating_)
//			{
//				Employee temp = rating[i];
//				rating[i] = rating[i + 1];
//				rating[i + 1] = temp;
//			}
//		}
//
//	}
//
//
//	for (size_t i = 0; i < length; i++)
//	{
//		std::cout << rating[i].getName() << "c рейтингом: " << rating[i].rating_ << std::endl;
//	}
//
//
//}
