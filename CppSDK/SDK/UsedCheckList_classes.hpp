#pragma once

 

// Package: UsedCheckList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UsedCheckList.UsedCheckList_C
// 0x0020 (0x0298 - 0x0278)
class UUsedCheckList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           VB_BoxType;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<ESBUseCheckDialogType>                 GeneratedTypes;                                    // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void UsedCheckList_AutoGenFunc(ESBUseCheckDialogType Type, bool Enable);
	void Generate();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UsedCheckList(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UsedCheckList_C">();
	}
	static class UUsedCheckList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUsedCheckList_C>();
	}
};
static_assert(alignof(UUsedCheckList_C) == 0x000008, "Wrong alignment on UUsedCheckList_C");
static_assert(sizeof(UUsedCheckList_C) == 0x000298, "Wrong size on UUsedCheckList_C");
static_assert(offsetof(UUsedCheckList_C, UberGraphFrame) == 0x000278, "Member 'UUsedCheckList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUsedCheckList_C, VB_BoxType) == 0x000280, "Member 'UUsedCheckList_C::VB_BoxType' has a wrong offset!");
static_assert(offsetof(UUsedCheckList_C, GeneratedTypes) == 0x000288, "Member 'UUsedCheckList_C::GeneratedTypes' has a wrong offset!");

}

