#pragma once

 

// Package: Activity_GuildOrganize

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Activity_GuildOrganize.Activity_GuildOrganize_C
// 0x0010 (0x0378 - 0x0368)
class UActivity_GuildOrganize_C final : public USBUIGuildActivityUMGBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRichTextBlock*                       RichText;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Activity_GuildOrganize(int32 EntryPoint);
	void BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature(const TArray<class FString>& Keys, const TArray<class FString>& Values);
	void SetActivity_Internal(const struct FGuildActivity& Other);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Activity_GuildOrganize_C">();
	}
	static class UActivity_GuildOrganize_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivity_GuildOrganize_C>();
	}
};
static_assert(alignof(UActivity_GuildOrganize_C) == 0x000008, "Wrong alignment on UActivity_GuildOrganize_C");
static_assert(sizeof(UActivity_GuildOrganize_C) == 0x000378, "Wrong size on UActivity_GuildOrganize_C");
static_assert(offsetof(UActivity_GuildOrganize_C, UberGraphFrame) == 0x000368, "Member 'UActivity_GuildOrganize_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivity_GuildOrganize_C, RichText) == 0x000370, "Member 'UActivity_GuildOrganize_C::RichText' has a wrong offset!");

}

