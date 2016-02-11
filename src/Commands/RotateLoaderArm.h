#ifndef ROTATELOADERARM_H
#define ROTATELOADERARM_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class RotateLoaderArm: public Command {
public:
    RotateLoaderArm(double position);
    
    virtual void Initialize();
    virtual void Execute();
    virtual void IsFinished();
    virtual void End();
    virtual void Interrupted();
    
#endif
