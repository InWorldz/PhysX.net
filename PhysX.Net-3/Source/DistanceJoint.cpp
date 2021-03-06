#include "StdAfx.h"
#include <PxDistanceJoint.h> 
#include "DistanceJoint.h"

DistanceJoint::DistanceJoint(PxDistanceJoint* joint, PhysX::Scene^ owner)
	: Joint(joint, owner)
{
	
}

float DistanceJoint::MinimumDistance::get()
{
	return this->UnmanagedPointer->getMinDistance();
}
void DistanceJoint::MinimumDistance::set(float value)
{
	this->UnmanagedPointer->setMinDistance(value);
}

float DistanceJoint::MaximumDistance::get()
{
	return this->UnmanagedPointer->getMaxDistance();
}
void DistanceJoint::MaximumDistance::set(float value)
{
	this->UnmanagedPointer->setMaxDistance(value);
}

float DistanceJoint::Tolerance::get()
{
	return this->UnmanagedPointer->getTolerance();
}
void DistanceJoint::Tolerance::set(float value)
{
	this->UnmanagedPointer->setTolerance(value);
}

float DistanceJoint::Spring::get()
{
	return this->UnmanagedPointer->getSpring();
}
void DistanceJoint::Spring::set(float value)
{
	this->UnmanagedPointer->setSpring(value);
}

float DistanceJoint::Damping::get()
{
	return this->UnmanagedPointer->getDamping();
}
void DistanceJoint::Damping::set(float value)
{
	this->UnmanagedPointer->setDamping(value);
}

DistanceJointFlag DistanceJoint::Flags::get()
{
	return ToManagedEnum(DistanceJointFlag, this->UnmanagedPointer->getDistanceJointFlags());
}
void DistanceJoint::Flags::set(DistanceJointFlag value)
{
	this->UnmanagedPointer->setDistanceJointFlags(ToUnmanagedEnum(PxDistanceJointFlag, value));
}

PxDistanceJoint* DistanceJoint::UnmanagedPointer::get()
{
	return (PxDistanceJoint*)Joint::UnmanagedPointer;
}