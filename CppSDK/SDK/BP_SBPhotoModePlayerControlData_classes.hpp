#pragma once

 

// Package: BP_SBPhotoModePlayerControlData

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBPhotoModePlayerControlData.BP_SBPhotoModePlayerControlData_C
// 0x0010 (0x0108 - 0x00F8)
class UBP_SBPhotoModePlayerControlData_C final : public USBPhotoModePlayerControlData
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          ShowWeapon;                                        // 0x0100(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_SBPhotoModePlayerControlData(int32 EntryPoint);
	void BP_OnChangeWeaponVisibility();
	void BP_CreateCloneCharacter(class UObject* InParent, bool bInCopyPose);
	void SetPlayerHidden(bool bIsHidden);
	void CreateCloneCharacter(class UObject* InParent, bool bInCopyPose);
	void OnChangeWeaponVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBPhotoModePlayerControlData_C">();
	}
	static class UBP_SBPhotoModePlayerControlData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SBPhotoModePlayerControlData_C>();
	}
};
static_assert(alignof(UBP_SBPhotoModePlayerControlData_C) == 0x000008, "Wrong alignment on UBP_SBPhotoModePlayerControlData_C");
static_assert(sizeof(UBP_SBPhotoModePlayerControlData_C) == 0x000108, "Wrong size on UBP_SBPhotoModePlayerControlData_C");
static_assert(offsetof(UBP_SBPhotoModePlayerControlData_C, UberGraphFrame) == 0x0000F8, "Member 'UBP_SBPhotoModePlayerControlData_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_SBPhotoModePlayerControlData_C, ShowWeapon) == 0x000100, "Member 'UBP_SBPhotoModePlayerControlData_C::ShowWeapon' has a wrong offset!");

}

