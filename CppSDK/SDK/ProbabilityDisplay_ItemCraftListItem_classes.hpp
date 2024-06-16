#pragma once

 

// Package: ProbabilityDisplay_ItemCraftListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_ItemCraftListItem.ProbabilityDisplay_ItemCraftListItem_C
// 0x0028 (0x02A0 - 0x0278)
class UProbabilityDisplay_ItemCraftListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GreatSuccessNumText;                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NormalNumText;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProbabilityDisplay_ItemCraftListItem(int32 EntryPoint);
	void Setup(int32 NormalNum, int32 GreatNumBottom, int32 GreatNumUpper);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_ItemCraftListItem_C">();
	}
	static class UProbabilityDisplay_ItemCraftListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_ItemCraftListItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_ItemCraftListItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_ItemCraftListItem_C");
static_assert(sizeof(UProbabilityDisplay_ItemCraftListItem_C) == 0x0002A0, "Wrong size on UProbabilityDisplay_ItemCraftListItem_C");
static_assert(offsetof(UProbabilityDisplay_ItemCraftListItem_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplay_ItemCraftListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ItemCraftListItem_C, Base1) == 0x000280, "Member 'UProbabilityDisplay_ItemCraftListItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ItemCraftListItem_C, Base2) == 0x000288, "Member 'UProbabilityDisplay_ItemCraftListItem_C::Base2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ItemCraftListItem_C, GreatSuccessNumText) == 0x000290, "Member 'UProbabilityDisplay_ItemCraftListItem_C::GreatSuccessNumText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_ItemCraftListItem_C, NormalNumText) == 0x000298, "Member 'UProbabilityDisplay_ItemCraftListItem_C::NormalNumText' has a wrong offset!");

}

