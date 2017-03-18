
#ifndef GEARRETRACT_H
#define GEARRETRACT_H


#include "Commands/Subsystem.h"
#include "../Robot.h"


/**
 * This is the header file for the gearretract command.
 */

class gearretract: public frc::Command {
public:
	// Initialize the constructor
	gearretract();


	virtual void Initialize() override;
	virtual void Execute() override;
	virtual bool IsFinished() override;
	virtual void End() override;
	virtual void Interrupted() override;

private:
	// Add any new variables needed here.
};

#endif
