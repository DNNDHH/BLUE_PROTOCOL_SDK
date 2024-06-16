#pragma once

 

// Package: UMG_SeasonPassMenuRewardRankWrap

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_SeasonPassMenuRewardRankWrap.UMG_SeasonPassMenuRewardRankWrap_C
// 0x0028 (0x02A0 - 0x0278)
class UUMG_SeasonPassMenuRewardRankWrap_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_82;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickItemIcon;                                   // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUMG_SeasonPassMenuRewardRank_C*        SeasonPassMenuRewardRank;                          // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClickItemIcon__DelegateSignature(class USBSeasonPassMenuRewardItemData* RewardItemData);
	void ExecuteUbergraph_UMG_SeasonPassMenuRewardRankWrap(int32 EntryPoint);
	void Destruct();
	void OnUpdateData();
	void CustomEvent_0(class USBSeasonPassMenuRewardItemData* RewardItemData);
	void SetData(class USBSeasonPassMenuRewardRankData* Data, float Duration);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_SeasonPassMenuRewardRankWrap_C">();
	}
	static class UUMG_SeasonPassMenuRewardRankWrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_SeasonPassMenuRewardRankWrap_C>();
	}
};
static_assert(alignof(UUMG_SeasonPassMenuRewardRankWrap_C) == 0x000008, "Wrong alignment on UUMG_SeasonPassMenuRewardRankWrap_C");
static_assert(sizeof(UUMG_SeasonPassMenuRewardRankWrap_C) == 0x0002A0, "Wrong size on UUMG_SeasonPassMenuRewardRankWrap_C");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRankWrap_C, UberGraphFrame) == 0x000278, "Member 'UUMG_SeasonPassMenuRewardRankWrap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRankWrap_C, CanvasPanel_82) == 0x000280, "Member 'UUMG_SeasonPassMenuRewardRankWrap_C::CanvasPanel_82' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRankWrap_C, OnClickItemIcon) == 0x000288, "Member 'UUMG_SeasonPassMenuRewardRankWrap_C::OnClickItemIcon' has a wrong offset!");
static_assert(offsetof(UUMG_SeasonPassMenuRewardRankWrap_C, SeasonPassMenuRewardRank) == 0x000298, "Member 'UUMG_SeasonPassMenuRewardRankWrap_C::SeasonPassMenuRewardRank' has a wrong offset!");

}

