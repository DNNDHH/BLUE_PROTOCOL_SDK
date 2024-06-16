#pragma once

 

// Package: Activity_Rankup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Activity_Rankup.Activity_Rankup_C
// 0x0010 (0x0378 - 0x0368)
class UActivity_Rankup_C final : public USBUIGuildActivityUMGBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRichTextBlock*                       Txt;                                               // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Activity_Rankup(int32 EntryPoint);
	void SetActivity_Internal(const struct FGuildActivity& Other);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Activity_Rankup_C">();
	}
	static class UActivity_Rankup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivity_Rankup_C>();
	}
};
static_assert(alignof(UActivity_Rankup_C) == 0x000008, "Wrong alignment on UActivity_Rankup_C");
static_assert(sizeof(UActivity_Rankup_C) == 0x000378, "Wrong size on UActivity_Rankup_C");
static_assert(offsetof(UActivity_Rankup_C, UberGraphFrame) == 0x000368, "Member 'UActivity_Rankup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivity_Rankup_C, Txt) == 0x000370, "Member 'UActivity_Rankup_C::Txt' has a wrong offset!");

}

