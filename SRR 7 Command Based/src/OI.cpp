// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/Climbercommand.h"
#include "Commands/GearCommand.h"
#include "Commands/SlowTankDrive.h"
#include "Commands/TankDrive.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    climber.reset(new Joystick(3));
    
    rightJoystick.reset(new Joystick(5));
    
    leftJoystick.reset(new Joystick(2));
    
    gearButton.reset(new JoystickButton(leftJoystick.get(), 2));
    gearButton->WhenPressed(new GearCommand());
    slowTankDriveButton.reset(new JoystickButton(leftJoystick.get(), 1));
    slowTankDriveButton->WhenPressed(new SlowTankDrive());

    // SmartDashboard Buttons
    SmartDashboard::PutData("Gear Command", new GearCommand());
    SmartDashboard::PutData("Slow Tank Drive", new SlowTankDrive());
    SmartDashboard::PutData("Tank Drive", new TankDrive());
    SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
    SmartDashboard::PutData("Climber command", new Climbercommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getLeftJoystick() {
   return leftJoystick;
}

std::shared_ptr<Joystick> OI::getRightJoystick() {
   return rightJoystick;
}

std::shared_ptr<Joystick> OI::getclimber() {
   return climber;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
