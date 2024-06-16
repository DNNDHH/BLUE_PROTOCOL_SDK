#pragma once

 

// Package: CommandMenu_MissionEffect1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu_MissionEffect1.CommandMenu_MissionEffect1_C
// 0x0018 (0x0290 - 0x0278)
class UCommandMenu_MissionEffect1_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimWaitingIcon;                                   // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 WaitingIcon;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommandMenu_MissionEffect1(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_MissionEffect1_C">();
	}
	static class UCommandMenu_MissionEffect1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_MissionEffect1_C>();
	}
};
static_assert(alignof(UCommandMenu_MissionEffect1_C) == 0x000008, "Wrong alignment on UCommandMenu_MissionEffect1_C");
static_assert(sizeof(UCommandMenu_MissionEffect1_C) == 0x000290, "Wrong size on UCommandMenu_MissionEffect1_C");
static_assert(offsetof(UCommandMenu_MissionEffect1_C, UberGraphFrame) == 0x000278, "Member 'UCommandMenu_MissionEffect1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MissionEffect1_C, AnimWaitingIcon) == 0x000280, "Member 'UCommandMenu_MissionEffect1_C::AnimWaitingIcon' has a wrong offset!");
static_assert(offsetof(UCommandMenu_MissionEffect1_C, WaitingIcon) == 0x000288, "Member 'UCommandMenu_MissionEffect1_C::WaitingIcon' has a wrong offset!");

}

