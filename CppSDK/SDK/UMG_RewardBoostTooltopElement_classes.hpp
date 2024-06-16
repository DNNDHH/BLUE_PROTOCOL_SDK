#pragma once

 

// Package: UMG_RewardBoostTooltopElement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_RewardBoostTooltopElement.UMG_RewardBoostTooltopElement_C
// 0x0040 (0x02B8 - 0x0278)
class UUMG_RewardBoostTooltopElement_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HorizontalBox_EffectCount;                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_ResetPattern;                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Effect;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_LimitCount;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_RemainCount;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Slash;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTipDetailsDateTime_C*          WBP_ToolTipDetailsDateTime;                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_RewardBoostTooltopElement(int32 EntryPoint);
	void SetData(const struct FSBRewardBoostTooltipData& Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_RewardBoostTooltopElement_C">();
	}
	static class UUMG_RewardBoostTooltopElement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_RewardBoostTooltopElement_C>();
	}
};
static_assert(alignof(UUMG_RewardBoostTooltopElement_C) == 0x000008, "Wrong alignment on UUMG_RewardBoostTooltopElement_C");
static_assert(sizeof(UUMG_RewardBoostTooltopElement_C) == 0x0002B8, "Wrong size on UUMG_RewardBoostTooltopElement_C");
static_assert(offsetof(UUMG_RewardBoostTooltopElement_C, UberGraphFrame) == 0x000278, "Member 'UUMG_RewardBoostTooltopElement_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_RewardBoostTooltopElement_C, HorizontalBox_EffectCount) == 0x000280, "Member 'UUMG_RewardBoostTooltopElement_C::HorizontalBox_EffectCount' has a wrong offset!");
static_assert(offsetof(UUMG_RewardBoostTooltopElement_C, SBRuntimeTextBlock_ResetPattern) == 0x000288, "Member 'UUMG_RewardBoostTooltopElement_C::SBRuntimeTextBlock_ResetPattern' has a wrong offset!");
static_assert(offsetof(UUMG_RewardBoostTooltopElement_C, TextBlock_Effect) == 0x000290, "Member 'UUMG_RewardBoostTooltopElement_C::TextBlock_Effect' has a wrong offset!");
static_assert(offsetof(UUMG_RewardBoostTooltopElement_C, TextBlock_LimitCount) == 0x000298, "Member 'UUMG_RewardBoostTooltopElement_C::TextBlock_LimitCount' has a wrong offset!");
static_assert(offsetof(UUMG_RewardBoostTooltopElement_C, TextBlock_RemainCount) == 0x0002A0, "Member 'UUMG_RewardBoostTooltopElement_C::TextBlock_RemainCount' has a wrong offset!");
static_assert(offsetof(UUMG_RewardBoostTooltopElement_C, TextBlock_Slash) == 0x0002A8, "Member 'UUMG_RewardBoostTooltopElement_C::TextBlock_Slash' has a wrong offset!");
static_assert(offsetof(UUMG_RewardBoostTooltopElement_C, WBP_ToolTipDetailsDateTime) == 0x0002B0, "Member 'UUMG_RewardBoostTooltopElement_C::WBP_ToolTipDetailsDateTime' has a wrong offset!");

}

