#pragma once

 

// Package: WBP_CommonToolTipDetail_Variable

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonToolTipDetail_Variable.WBP_CommonToolTipDetail_Variable_C
// 0x0030 (0x02A8 - 0x0278)
class UWBP_CommonToolTipDetail_Variable_C final : public UUserWidget
{
public:
	class UCanvasPanel*                           CanvasPanel_Desc;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtDesc;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtName;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtType;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTipDetailsDateTime_C*          WBP_ToolTipDetailsDateTime_157;                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetAbilityNameText(const class FText& InText);
	void SetAbilityDescText(const class FText& InText);
	void SetAbilityPerkID(int32 PerkId);
	void SetWeaponPerkData(const struct FSBCharacterWeaponPerkData& SBCharacterWeaponPerkData);
	void SetNameAndTypeText(const class FText& InName, const class FText& InType);
	void SetNameAndDescText(const class FText& InName, const class FText& InDesc);
	void SetNameAndTypeAndDescText(const class FText& InName, const class FText& InType, const class FText& InDesc);
	void SetType(const class FText& InTypeText);
	void SetNameAndDescAndDateTime(const class FText& Param_Name, const class FText& Desc, const struct FDateTime& DateTime, bool bHideIfMinValue);
	void SetNameAndDescAndTermId(const class FText& Param_Name, const class FText& Desc, const class FString& TermId, bool bHideIfMinValue);
	void SetExpOverflowRewardIconMode(bool bInIsClassLevelCounterStop, bool bInIsClassLevelLimit, bool bInIsClassLevelLimitSmallerThanCounterStop);
	void Set_Name_Only_Text(const class FText& InName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonToolTipDetail_Variable_C">();
	}
	static class UWBP_CommonToolTipDetail_Variable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonToolTipDetail_Variable_C>();
	}
};
static_assert(alignof(UWBP_CommonToolTipDetail_Variable_C) == 0x000008, "Wrong alignment on UWBP_CommonToolTipDetail_Variable_C");
static_assert(sizeof(UWBP_CommonToolTipDetail_Variable_C) == 0x0002A8, "Wrong size on UWBP_CommonToolTipDetail_Variable_C");
static_assert(offsetof(UWBP_CommonToolTipDetail_Variable_C, CanvasPanel_Desc) == 0x000278, "Member 'UWBP_CommonToolTipDetail_Variable_C::CanvasPanel_Desc' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Variable_C, Image_line) == 0x000280, "Member 'UWBP_CommonToolTipDetail_Variable_C::Image_line' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Variable_C, TxtDesc) == 0x000288, "Member 'UWBP_CommonToolTipDetail_Variable_C::TxtDesc' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Variable_C, TxtName) == 0x000290, "Member 'UWBP_CommonToolTipDetail_Variable_C::TxtName' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Variable_C, TxtType) == 0x000298, "Member 'UWBP_CommonToolTipDetail_Variable_C::TxtType' has a wrong offset!");
static_assert(offsetof(UWBP_CommonToolTipDetail_Variable_C, WBP_ToolTipDetailsDateTime_157) == 0x0002A0, "Member 'UWBP_CommonToolTipDetail_Variable_C::WBP_ToolTipDetailsDateTime_157' has a wrong offset!");

}

