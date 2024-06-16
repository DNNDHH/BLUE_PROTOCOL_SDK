#pragma once

 

// Package: ImagineCraftDescProduct

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineCraftDescProduct.ImagineCraftDescProduct_C
// 0x0078 (0x02F0 - 0x0278)
class UImagineCraftDescProduct_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBonusLarge_C*                       CmnBonus;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipmentStatusDescWithImageView_C* CommonEquipmentStatusDescWithImageView;            // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ProbabilityDisplayText;                            // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTextButton_C*                        RateDisplayButton;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryTag_C*                        TagNotForStackB;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMasterImagineRecepi                   RecepiData;                                        // 0x02A8(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsLoading;                                         // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C5A[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              RewardTooltip;                                     // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ImagineCraftDescProduct(int32 EntryPoint);
	void BndEvt__ImagineCraftDescProduct_RateDisplayButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnComplete_RewardBoostInfo(class UObject* Sender, class UObject* Param);
	void Destruct();
	void Construct();
	void SetRecepiData(const struct FMasterImagineRecepi& Param_RecepiData);
	void IsLiquidMemoryActive(bool* IsActive);
	void UpdateBoost();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineCraftDescProduct_C">();
	}
	static class UImagineCraftDescProduct_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineCraftDescProduct_C>();
	}
};
static_assert(alignof(UImagineCraftDescProduct_C) == 0x000008, "Wrong alignment on UImagineCraftDescProduct_C");
static_assert(sizeof(UImagineCraftDescProduct_C) == 0x0002F0, "Wrong size on UImagineCraftDescProduct_C");
static_assert(offsetof(UImagineCraftDescProduct_C, UberGraphFrame) == 0x000278, "Member 'UImagineCraftDescProduct_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineCraftDescProduct_C, CmnBonus) == 0x000280, "Member 'UImagineCraftDescProduct_C::CmnBonus' has a wrong offset!");
static_assert(offsetof(UImagineCraftDescProduct_C, CommonEquipmentStatusDescWithImageView) == 0x000288, "Member 'UImagineCraftDescProduct_C::CommonEquipmentStatusDescWithImageView' has a wrong offset!");
static_assert(offsetof(UImagineCraftDescProduct_C, ProbabilityDisplayText) == 0x000290, "Member 'UImagineCraftDescProduct_C::ProbabilityDisplayText' has a wrong offset!");
static_assert(offsetof(UImagineCraftDescProduct_C, RateDisplayButton) == 0x000298, "Member 'UImagineCraftDescProduct_C::RateDisplayButton' has a wrong offset!");
static_assert(offsetof(UImagineCraftDescProduct_C, TagNotForStackB) == 0x0002A0, "Member 'UImagineCraftDescProduct_C::TagNotForStackB' has a wrong offset!");
static_assert(offsetof(UImagineCraftDescProduct_C, RecepiData) == 0x0002A8, "Member 'UImagineCraftDescProduct_C::RecepiData' has a wrong offset!");
static_assert(offsetof(UImagineCraftDescProduct_C, IsLoading) == 0x0002E0, "Member 'UImagineCraftDescProduct_C::IsLoading' has a wrong offset!");
static_assert(offsetof(UImagineCraftDescProduct_C, RewardTooltip) == 0x0002E8, "Member 'UImagineCraftDescProduct_C::RewardTooltip' has a wrong offset!");

}

