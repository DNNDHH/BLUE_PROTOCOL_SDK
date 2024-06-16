#pragma once

 

// Package: UMG_MatchingMenu_ContentInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_ContentInfo.UMG_MatchingMenu_ContentInfo_C
// 0x0060 (0x02D8 - 0x0278)
class UUMG_MatchingMenu_ContentInfo_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_106;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingImage_C*                   UMG_MatchingImage;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Headder_C*            UMG_MatchingMenu_Headder;                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_MissionDetail_C*      UMG_MatchingMenu_MissionDetail;                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_Term_C*               UMG_MatchingMenu_Term;                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCloseButtonClicked;                              // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickRewardIcon;                                 // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickSupplyIcon;                                 // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCloseButtonClicked__DelegateSignature();
	void OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender);
	void OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
	void ExecuteUbergraph_UMG_MatchingMenu_ContentInfo(int32 EntryPoint);
	void BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_2_OnClickSupplyIcon__DelegateSignature(const struct FSBDungeonSupply& DungeonSupply);
	void BndEvt__UMG_MatchingMenu_ContentInfo_UMG_MatchingMenu_MissionDetail_K2Node_ComponentBoundEvent_1_OnClickRewardIcon__DelegateSignature(class UQuestRewardIcon_C* Sender);
	void BndEvt__UMG_MatchingMenu_Headder_K2Node_ComponentBoundEvent_0_OnCloseButtonClicked__DelegateSignature();
	void SetDungeonInfo(const struct FSBMapInfo& DungeonMapInfo);
	void SetCommandMenuMode();
	void SetBestScore(int32 Record, int32 ClearCount, ESBClassType ClassType, class FName MapId);
	void SetTerm(class FName EventTerm);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_ContentInfo_C">();
	}
	static class UUMG_MatchingMenu_ContentInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_ContentInfo_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_ContentInfo_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_ContentInfo_C");
static_assert(sizeof(UUMG_MatchingMenu_ContentInfo_C) == 0x0002D8, "Wrong size on UUMG_MatchingMenu_ContentInfo_C");
static_assert(offsetof(UUMG_MatchingMenu_ContentInfo_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_ContentInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ContentInfo_C, Image_106) == 0x000280, "Member 'UUMG_MatchingMenu_ContentInfo_C::Image_106' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ContentInfo_C, UMG_MatchingImage) == 0x000288, "Member 'UUMG_MatchingMenu_ContentInfo_C::UMG_MatchingImage' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ContentInfo_C, UMG_MatchingMenu_Headder) == 0x000290, "Member 'UUMG_MatchingMenu_ContentInfo_C::UMG_MatchingMenu_Headder' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ContentInfo_C, UMG_MatchingMenu_MissionDetail) == 0x000298, "Member 'UUMG_MatchingMenu_ContentInfo_C::UMG_MatchingMenu_MissionDetail' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ContentInfo_C, UMG_MatchingMenu_Term) == 0x0002A0, "Member 'UUMG_MatchingMenu_ContentInfo_C::UMG_MatchingMenu_Term' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ContentInfo_C, OnCloseButtonClicked) == 0x0002A8, "Member 'UUMG_MatchingMenu_ContentInfo_C::OnCloseButtonClicked' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ContentInfo_C, OnClickRewardIcon) == 0x0002B8, "Member 'UUMG_MatchingMenu_ContentInfo_C::OnClickRewardIcon' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_ContentInfo_C, OnClickSupplyIcon) == 0x0002C8, "Member 'UUMG_MatchingMenu_ContentInfo_C::OnClickSupplyIcon' has a wrong offset!");

}

