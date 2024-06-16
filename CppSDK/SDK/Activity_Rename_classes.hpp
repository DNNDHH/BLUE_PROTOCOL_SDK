#pragma once

 

// Package: Activity_Rename

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Activity_Rename.Activity_Rename_C
// 0x0010 (0x0378 - 0x0368)
class UActivity_Rename_C final : public USBUIGuildActivityUMGBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRichTextBlock*                       Rich;                                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Activity_Rename(int32 EntryPoint);
	void BndEvt__Activity_Rename_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature(const TArray<class FString>& Keys, const TArray<class FString>& Values);
	void SetActivity_Internal(const struct FGuildActivity& Other);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Activity_Rename_C">();
	}
	static class UActivity_Rename_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivity_Rename_C>();
	}
};
static_assert(alignof(UActivity_Rename_C) == 0x000008, "Wrong alignment on UActivity_Rename_C");
static_assert(sizeof(UActivity_Rename_C) == 0x000378, "Wrong size on UActivity_Rename_C");
static_assert(offsetof(UActivity_Rename_C, UberGraphFrame) == 0x000368, "Member 'UActivity_Rename_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivity_Rename_C, Rich) == 0x000370, "Member 'UActivity_Rename_C::Rich' has a wrong offset!");

}

