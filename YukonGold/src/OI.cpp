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
#include "Commands/cagedown.h"
#include "Commands/cageup.h"
#include "Commands/climbfast.h"
#include "Commands/climbslow.h"
#include "Commands/climbstop.h"
#include "Commands/driveauto.h"
#include "Commands/drivewithjoysticks.h"
#include "Commands/gearpunch.h"
#include "Commands/gearretract.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    shock.reset(new Joystick(0));
    
    leftthumbstick.reset(new JoystickButton(shock.get(), 10));
    leftthumbstick->WhenPressed(new gearretract());
    rightthumbstick.reset(new JoystickButton(shock.get(), 9));
    rightthumbstick->WhenPressed(new gearpunch());
    l1.reset(new JoystickButton(shock.get(), 5));
    l1->WhenPressed(new climbstop());
    y.reset(new JoystickButton(shock.get(), 4));
    y->WhenPressed(new climbfast());
    x.reset(new JoystickButton(shock.get(), 3));
    x->WhenPressed(new climbslow());
    b.reset(new JoystickButton(shock.get(), 2));
    b->WhenPressed(new cagedown());
    a.reset(new JoystickButton(shock.get(), 1));
    a->WhenPressed(new cageup());
    xbox.reset(new Joystick(5));
    

    // SmartDashboard Buttons
    SmartDashboard::PutData("gearretract", new gearretract());
    SmartDashboard::PutData("gearpunch", new gearpunch());
    SmartDashboard::PutData("cagedown", new cagedown());
    SmartDashboard::PutData("cageup", new cageup());
    SmartDashboard::PutData("drivewithjoysticks", new drivewithjoysticks());
    SmartDashboard::PutData("driveauto", new driveauto());
    SmartDashboard::PutData("climbstop", new climbstop());
    SmartDashboard::PutData("climbslow", new climbslow());
    SmartDashboard::PutData("climbfast", new climbfast());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getXbox() {
   return xbox;
}

std::shared_ptr<Joystick> OI::getShock() {
   return shock;
}

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
