#pragma once

 

// Package: BP_HumanoidEnemyBase

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_HumanoidEnemyBase.BP_HumanoidEnemyBase_C.GetLockOnCameraID
// 0x0010 (0x0010 - 0x0000)
struct BP_HumanoidEnemyBase_C_GetLockOnCameraID final
{
public:
	class FName                                   ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Lock_on_CameraID;                                  // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_HumanoidEnemyBase_C_GetLockOnCameraID) == 0x000004, "Wrong alignment on BP_HumanoidEnemyBase_C_GetLockOnCameraID");
static_assert(sizeof(BP_HumanoidEnemyBase_C_GetLockOnCameraID) == 0x000010, "Wrong size on BP_HumanoidEnemyBase_C_GetLockOnCameraID");
static_assert(offsetof(BP_HumanoidEnemyBase_C_GetLockOnCameraID, ReturnValue) == 0x000000, "Member 'BP_HumanoidEnemyBase_C_GetLockOnCameraID::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_HumanoidEnemyBase_C_GetLockOnCameraID, Lock_on_CameraID) == 0x000008, "Member 'BP_HumanoidEnemyBase_C_GetLockOnCameraID::Lock_on_CameraID' has a wrong offset!");

}

