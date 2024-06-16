#pragma once

 

// Package: Activity_AcceptEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Activity_AcceptEntry.Activity_AcceptEntry_C
// 0x0010 (0x0378 - 0x0368)
class UActivity_AcceptEntry_C final : public USBUIGuildActivityUMGBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBRichTextBlock*                       SBR_Text;                                          // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_Activity_AcceptEntry(int32 EntryPoint);
	void OnClickedLink(const TArray<class FString>& Keys, const TArray<class FString>& Values);
	void SetActivity_Internal(const struct FGuildActivity& Other);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Activity_AcceptEntry_C">();
	}
	static class UActivity_AcceptEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UActivity_AcceptEntry_C>();
	}
};
static_assert(alignof(UActivity_AcceptEntry_C) == 0x000008, "Wrong alignment on UActivity_AcceptEntry_C");
static_assert(sizeof(UActivity_AcceptEntry_C) == 0x000378, "Wrong size on UActivity_AcceptEntry_C");
static_assert(offsetof(UActivity_AcceptEntry_C, UberGraphFrame) == 0x000368, "Member 'UActivity_AcceptEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UActivity_AcceptEntry_C, SBR_Text) == 0x000370, "Member 'UActivity_AcceptEntry_C::SBR_Text' has a wrong offset!");

}

