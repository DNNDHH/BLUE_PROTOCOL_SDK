#pragma once

 

// Package: RankingRewardResult

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RankingRewardResult.RankingRewardResult_C
// 0x00B0 (0x0328 - 0x0278)
class URankingRewardResult_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG02;                                              // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconTrophy;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line01;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    SBCounterTextBlock_107;                            // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTextTableAsset*                      TextTable;                                         // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClosing;                                         // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_90F3[0x3];                                     // 0x02D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ListCnt;                                           // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URewardIconListDialog_C*                RewardIconListWidget;                              // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRankingRewardData                     MasterData;                                        // 0x02E0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBRankingRewardData>           RankingRewardData;                                 // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ShowCnt;                                           // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_RankingRewardResult(int32 EntryPoint);
	void Destruct();
	void StartEnd();
	void TryShowReward();
	void SetRankingRewardData(const TArray<struct FSBRankingRewardData>& InRankingReward);
	void CustomEvent_1();
	void StartResult();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void Construct();
	void GetIdRewardsList(const struct FRankingRewardData& Param_RankingRewardData, TArray<class FName>* List);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RankingRewardResult_C">();
	}
	static class URankingRewardResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URankingRewardResult_C>();
	}
};
static_assert(alignof(URankingRewardResult_C) == 0x000008, "Wrong alignment on URankingRewardResult_C");
static_assert(sizeof(URankingRewardResult_C) == 0x000328, "Wrong size on URankingRewardResult_C");
static_assert(offsetof(URankingRewardResult_C, UberGraphFrame) == 0x000278, "Member 'URankingRewardResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, AnimOut) == 0x000280, "Member 'URankingRewardResult_C::AnimOut' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, AnimIn) == 0x000288, "Member 'URankingRewardResult_C::AnimIn' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, BG02) == 0x000290, "Member 'URankingRewardResult_C::BG02' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, IconTrophy) == 0x000298, "Member 'URankingRewardResult_C::IconTrophy' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, Line01) == 0x0002A0, "Member 'URankingRewardResult_C::Line01' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, SBCounterTextBlock_107) == 0x0002A8, "Member 'URankingRewardResult_C::SBCounterTextBlock_107' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, OnClose) == 0x0002B0, "Member 'URankingRewardResult_C::OnClose' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, UIBlocker) == 0x0002C0, "Member 'URankingRewardResult_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, TextTable) == 0x0002C8, "Member 'URankingRewardResult_C::TextTable' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, IsClosing) == 0x0002D0, "Member 'URankingRewardResult_C::IsClosing' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, ListCnt) == 0x0002D4, "Member 'URankingRewardResult_C::ListCnt' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, RewardIconListWidget) == 0x0002D8, "Member 'URankingRewardResult_C::RewardIconListWidget' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, MasterData) == 0x0002E0, "Member 'URankingRewardResult_C::MasterData' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, RankingRewardData) == 0x000310, "Member 'URankingRewardResult_C::RankingRewardData' has a wrong offset!");
static_assert(offsetof(URankingRewardResult_C, ShowCnt) == 0x000320, "Member 'URankingRewardResult_C::ShowCnt' has a wrong offset!");

}

