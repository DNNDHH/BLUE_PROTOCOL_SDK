#pragma once

 

// Package: CommunicateSettingMenu_ShortId

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommunicateSettingMenu_ShortId.CommunicateSettingMenu_ShortId_C
// 0x0010 (0x0288 - 0x0278)
class UCommunicateSettingMenu_ShortId_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TxtID;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CommunicateSettingMenu_ShortId(int32 EntryPoint);
	void ErrorDataSet();
	void SetShortId(const class FString& InShortId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommunicateSettingMenu_ShortId_C">();
	}
	static class UCommunicateSettingMenu_ShortId_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommunicateSettingMenu_ShortId_C>();
	}
};
static_assert(alignof(UCommunicateSettingMenu_ShortId_C) == 0x000008, "Wrong alignment on UCommunicateSettingMenu_ShortId_C");
static_assert(sizeof(UCommunicateSettingMenu_ShortId_C) == 0x000288, "Wrong size on UCommunicateSettingMenu_ShortId_C");
static_assert(offsetof(UCommunicateSettingMenu_ShortId_C, UberGraphFrame) == 0x000278, "Member 'UCommunicateSettingMenu_ShortId_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_ShortId_C, TxtID) == 0x000280, "Member 'UCommunicateSettingMenu_ShortId_C::TxtID' has a wrong offset!");

}

