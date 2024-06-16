#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskOpenTheaterMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C
// 0x0008 (0x0038 - 0x0030)
class UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C final : public USBPlayerLevelStartSequenceTaskBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0030(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu(int32 EntryPoint);
	void OnEnd();
	void Start();
	void Load_Lib_Save_Data(class USBLibrarySaveManager** LibSaveData);
	void CheckOpenedLoginBonusWindow(bool* IsOpened);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C">();
	}
	static class UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C>();
	}
};
static_assert(alignof(UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C) == 0x000008, "Wrong alignment on UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C");
static_assert(sizeof(UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C) == 0x000038, "Wrong size on UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C");
static_assert(offsetof(UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C, UberGraphFrame) == 0x000030, "Member 'UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C::UberGraphFrame' has a wrong offset!");

}

