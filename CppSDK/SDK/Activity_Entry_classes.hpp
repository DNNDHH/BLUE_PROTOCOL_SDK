#pragma once

 

// Package: Activity_Entry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Activity_Entry.Activity_Entry_C
// 0x0060 (0x03C8 - 0x0368)
class UActivity_Entry_C final : public USBUIGuildActivityUMGBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRichTextBlock*                       Txt;                                               // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FString>            Meta;                                              // 0x0378(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Activity_Entry(int32 EntryPoint);
	void BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature(const TArray<class FString>& Keys, const TArray<class FString>& Values);
	void SetActivity_Internal(const struct FGuildActivity& Other);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Activity_Entry_C">();
	}
	static class UActivity_Entry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivity_Entry_C>();
	}
};
static_assert(alignof(UActivity_Entry_C) == 0x000008, "Wrong alignment on UActivity_Entry_C");
static_assert(sizeof(UActivity_Entry_C) == 0x0003C8, "Wrong size on UActivity_Entry_C");
static_assert(offsetof(UActivity_Entry_C, UberGraphFrame) == 0x000368, "Member 'UActivity_Entry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivity_Entry_C, Txt) == 0x000370, "Member 'UActivity_Entry_C::Txt' has a wrong offset!");
static_assert(offsetof(UActivity_Entry_C, Meta) == 0x000378, "Member 'UActivity_Entry_C::Meta' has a wrong offset!");

}

