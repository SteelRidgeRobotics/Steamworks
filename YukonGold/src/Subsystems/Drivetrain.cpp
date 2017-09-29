// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "ctrlib/CANTalon.h"


#include "Drivetrain.h"
#include "../RobotMap.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "../Commands/drivewithjoysticks.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

Drivetrain::Drivetrain() : Subsystem("Drivetrain") {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    frontleft = RobotMap::drivetrainfrontleft;
    rearleft = RobotMap::drivetrainrearleft;
    frontright = RobotMap::drivetrainfrontright;
    rearright = RobotMap::drivetrainrearright;
    robotDrive41 = RobotMap::drivetrainRobotDrive41;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Drivetrain::InitDefaultCommand() {
    // Set the default command for a subsystem here.
    // SetDefaultCommand(new MySpecialCommand());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new drivewithjoysticks());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void Drivetrain::TankDrive(std::shared_ptr<Joystick>xbox){
	if(xbox->GetRawButton(6)==1){
		robotDrive41->TankDrive(0.4*xbox->GetRawAxis(5), 0.4*xbox->GetRawAxis(1));
	}
	else{
		robotDrive41->TankDrive(-xbox->GetRawAxis(1), -xbox->GetRawAxis(5));
	}
}

void Drivetrain::TankDrive(double left, double right){
	robotDrive41->TankDrive(left, right);
}

void Drivetrain::driveauto(){
	robotDrive41->TankDrive(0.34,0.32);
}

void Drivetrain::drivestop(){
	robotDrive41->TankDrive(0.0,0.0);
}

