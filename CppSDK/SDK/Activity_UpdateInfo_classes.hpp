#pragma once

 

// Package: Activity_UpdateInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Activity_UpdateInfo.Activity_UpdateInfo_C
// 0x0010 (0x0378 - 0x0368)
class UActivity_UpdateInfo_C final : public USBUIGuildActivityUMGBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRichTextBlock*                       Rich;                                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Activity_UpdateInfo(int32 EntryPoint);
	void BndEvt__Activity_UpdateInfo_Rich_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature(const TArray<class FString>& Keys, const TArray<class FString>& Values);
	void SetActivity_Internal(const struct FGuildActivity& Other);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Activity_UpdateInfo_C">();
	}
	static class UActivity_UpdateInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivity_UpdateInfo_C>();
	}
};
static_assert(alignof(UActivity_UpdateInfo_C) == 0x000008, "Wrong alignment on UActivity_UpdateInfo_C");
static_assert(sizeof(UActivity_UpdateInfo_C) == 0x000378, "Wrong size on UActivity_UpdateInfo_C");
static_assert(offsetof(UActivity_UpdateInfo_C, UberGraphFrame) == 0x000368, "Member 'UActivity_UpdateInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivity_UpdateInfo_C, Rich) == 0x000370, "Member 'UActivity_UpdateInfo_C::Rich' has a wrong offset!");

}

