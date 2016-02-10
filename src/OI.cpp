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
#include "Commands/DriveTrainCommand.h"
#include "Commands/LauncherDefaultCommand.h"
#include "Commands/LauncherMotorTestCommand.h"
#include "Commands/TestBackwardCommand.h"
#include "Commands/TestForwardCommand.h"
#include "Commands/loadermotortestcommand.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    driverjoystick.reset(new Joystick(0));
    
    loadermotorbackward.reset(new JoystickButton(driverjoystick.get(), 2));
    loadermotorbackward->WhileHeld(new loadermotortestcommand(false));
    loadermotorforward.reset(new JoystickButton(driverjoystick.get(), 1));
    loadermotorforward->WhileHeld(new loadermotortestcommand(true));
    launcherMotorBackward.reset(new JoystickButton(driverjoystick.get(), 3));
    launcherMotorBackward->WhileHeld(new LauncherMotorTestCommand(false));
    launcherMotorForward.reset(new JoystickButton(driverjoystick.get(), 4));
    launcherMotorForward->WhileHeld(new LauncherMotorTestCommand(true));
    testbackward.reset(new JoystickButton(driverjoystick.get(), 6));
    testbackward->WhileHeld(new TestBackwardCommand());
    testforward.reset(new JoystickButton(driverjoystick.get(), 8));
    testforward->WhileHeld(new TestForwardCommand());

    // SmartDashboard Buttons
    SmartDashboard::PutData("loadermotortestcommand: default", new loadermotortestcommand(false));
    SmartDashboard::PutData("LauncherMotorTestCommand: default", new LauncherMotorTestCommand(true));
    SmartDashboard::PutData("LauncherDefaultCommand", new LauncherDefaultCommand());
    SmartDashboard::PutData("TestBackwardCommand", new TestBackwardCommand());
    SmartDashboard::PutData("TestForwardCommand", new TestForwardCommand());
    SmartDashboard::PutData("DriveTrainCommand", new DriveTrainCommand());
    SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getdriverjoystick() {
   return driverjoystick;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
