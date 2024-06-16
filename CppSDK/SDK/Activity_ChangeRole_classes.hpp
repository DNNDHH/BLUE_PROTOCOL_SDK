#pragma once

 

// Package: Activity_ChangeRole

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Activity_ChangeRole.Activity_ChangeRole_C
// 0x0060 (0x03C8 - 0x0368)
class UActivity_ChangeRole_C final : public USBUIGuildActivityUMGBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRichTextBlock*                       RichText;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, class FString>            TagMap;                                            // 0x0378(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_Activity_ChangeRole(int32 EntryPoint);
	void _________0(const TArray<class FString>& Keys, const TArray<class FString>& Values);
	void SetActivity_Internal(const struct FGuildActivity& Other);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Activity_ChangeRole_C">();
	}
	static class UActivity_ChangeRole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivity_ChangeRole_C>();
	}
};
static_assert(alignof(UActivity_ChangeRole_C) == 0x000008, "Wrong alignment on UActivity_ChangeRole_C");
static_assert(sizeof(UActivity_ChangeRole_C) == 0x0003C8, "Wrong size on UActivity_ChangeRole_C");
static_assert(offsetof(UActivity_ChangeRole_C, UberGraphFrame) == 0x000368, "Member 'UActivity_ChangeRole_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivity_ChangeRole_C, RichText) == 0x000370, "Member 'UActivity_ChangeRole_C::RichText' has a wrong offset!");
static_assert(offsetof(UActivity_ChangeRole_C, TagMap) == 0x000378, "Member 'UActivity_ChangeRole_C::TagMap' has a wrong offset!");

}

