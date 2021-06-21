#ifndef RESIDENT_H_
#define RESIDENT_H_
#include <string>

class Resident{

private:

	int houseNo;
	char blockNo;
	int streetNo;
	int floor;
	int memberId;

public:

	// Constructor Declaration
	Resident();

	// Getter and Setter Functions Declaration
	char getBlockNo() const;
	void setBlockNo(char blockNo);
	int getFloor() const;
	void setFloor(int floor);
	int getHouseNo() const;
	void setHouseNo(int houseNo);
	int getMemberId() const;
	void setMemberId(int memberId);
	int getStreetNo() const;
	void setStreetNo(int streetNo);

	// Function to show the output
	std::string out();

};

#endif /* RESIDENT_H_ */
