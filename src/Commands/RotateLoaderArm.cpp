#include "RotateLoaderArm.h"

RotateLoaderArm::RotateLoaderArm(double position): Command() {
    m_position = position;
    Requires(Robot::launcher.get());
}

void RotateLoaderArm::Initialize() {
}

void RotateLoaderArm::Execute() {

}

bool RotateLoaderArm::IsFinished() {
    return true;
}

void RotateLoaderArm::End() {
}

void RotateLoaderArm::Interrupted() {

}
