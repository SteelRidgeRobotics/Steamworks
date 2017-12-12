// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class Drivetrain: public Subsystem {
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<CANTalon> fl;
	std::shared_ptr<CANTalon> rl;
	std::shared_ptr<CANTalon> fr;
	std::shared_ptr<CANTalon> rr;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	double l_pos;
	double r_pos;
public:
	Drivetrain();

	void InitDefaultCommand() override;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	void userDrive(std::shared_ptr<Joystick>xbox);

	//void User_drive(double leftax, double rightjax);

	void userDrivebackward(std::shared_ptr<Joystick>xbox);

	void userDriveslow(std::shared_ptr<Joystick>xbox);

	void encoderPosition(double left, double right);

	void encoderSpeed(double leftspeed, double rightspeed);

	void encoderDone();

	void encoderReset();

	bool isMove();




};

#endif
