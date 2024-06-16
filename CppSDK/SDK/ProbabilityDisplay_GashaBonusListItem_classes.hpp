#pragma once

 

// Package: ProbabilityDisplay_GashaBonusListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ProbabilityDisplay_GashaBonusListItem.ProbabilityDisplay_GashaBonusListItem_C
// 0x0058 (0x02D0 - 0x0278)
class UProbabilityDisplay_GashaBonusListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base2;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base3;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DescText;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RequirementText;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_50;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               ProductDetail;                                     // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             Item_Type;                                         // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7E7E[0x3];                                     // 0x02C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Item_Index;                                        // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ProbabilityDisplay_GashaBonusListItem(int32 EntryPoint);
	void Construct();
	void Destruct();
	void BndEvt__ProbabilityDisplay_GashaBonusListItem_CommonIcon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(class UCommonIcon_C* Sender);
	void OnClose_Event(class UUMG_ProductDetailMenu_C* Sender);
	void Setup(int32 ItemIndex, ESBRewardItemType ItemType, const class FString& Requirement, int32 Param_Index, int32 Param_Amount, int32 Limit, bool IsStepUp);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ProbabilityDisplay_GashaBonusListItem_C">();
	}
	static class UProbabilityDisplay_GashaBonusListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UProbabilityDisplay_GashaBonusListItem_C>();
	}
};
static_assert(alignof(UProbabilityDisplay_GashaBonusListItem_C) == 0x000008, "Wrong alignment on UProbabilityDisplay_GashaBonusListItem_C");
static_assert(sizeof(UProbabilityDisplay_GashaBonusListItem_C) == 0x0002D0, "Wrong size on UProbabilityDisplay_GashaBonusListItem_C");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, UberGraphFrame) == 0x000278, "Member 'UProbabilityDisplay_GashaBonusListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, Base1) == 0x000280, "Member 'UProbabilityDisplay_GashaBonusListItem_C::Base1' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, Base2) == 0x000288, "Member 'UProbabilityDisplay_GashaBonusListItem_C::Base2' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, Base3) == 0x000290, "Member 'UProbabilityDisplay_GashaBonusListItem_C::Base3' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, CommonIcon) == 0x000298, "Member 'UProbabilityDisplay_GashaBonusListItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, DescText) == 0x0002A0, "Member 'UProbabilityDisplay_GashaBonusListItem_C::DescText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, RequirementText) == 0x0002A8, "Member 'UProbabilityDisplay_GashaBonusListItem_C::RequirementText' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, WidgetSwitcher_50) == 0x0002B0, "Member 'UProbabilityDisplay_GashaBonusListItem_C::WidgetSwitcher_50' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, ProductDetail) == 0x0002B8, "Member 'UProbabilityDisplay_GashaBonusListItem_C::ProductDetail' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, Item_Type) == 0x0002C0, "Member 'UProbabilityDisplay_GashaBonusListItem_C::Item_Type' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, Item_Index) == 0x0002C4, "Member 'UProbabilityDisplay_GashaBonusListItem_C::Item_Index' has a wrong offset!");
static_assert(offsetof(UProbabilityDisplay_GashaBonusListItem_C, Amount) == 0x0002C8, "Member 'UProbabilityDisplay_GashaBonusListItem_C::Amount' has a wrong offset!");

}

