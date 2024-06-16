#pragma once

 

// Package: UMG_RewardBoostTooltip

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C
// 0x0028 (0x02A0 - 0x0278)
class UUMG_RewardBoostTooltip_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_RewardBoostTooltopElement_C*       UMG_RewardBoostTooltopElement;                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_Elements;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTextBlock*>                     TextBlockList;                                     // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_UMG_RewardBoostTooltip(int32 EntryPoint);
	void Construct();
	void SetDataList(TArray<struct FSBRewardBoostTooltipData>& DataList);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_RewardBoostTooltip_C">();
	}
	static class UUMG_RewardBoostTooltip_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_RewardBoostTooltip_C>();
	}
};
static_assert(alignof(UUMG_RewardBoostTooltip_C) == 0x000008, "Wrong alignment on UUMG_RewardBoostTooltip_C");
static_assert(sizeof(UUMG_RewardBoostTooltip_C) == 0x0002A0, "Wrong size on UUMG_RewardBoostTooltip_C");
static_assert(offsetof(UUMG_RewardBoostTooltip_C, UberGraphFrame) == 0x000278, "Member 'UUMG_RewardBoostTooltip_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_RewardBoostTooltip_C, UMG_RewardBoostTooltopElement) == 0x000280, "Member 'UUMG_RewardBoostTooltip_C::UMG_RewardBoostTooltopElement' has a wrong offset!");
static_assert(offsetof(UUMG_RewardBoostTooltip_C, VerticalBox_Elements) == 0x000288, "Member 'UUMG_RewardBoostTooltip_C::VerticalBox_Elements' has a wrong offset!");
static_assert(offsetof(UUMG_RewardBoostTooltip_C, TextBlockList) == 0x000290, "Member 'UUMG_RewardBoostTooltip_C::TextBlockList' has a wrong offset!");

}

