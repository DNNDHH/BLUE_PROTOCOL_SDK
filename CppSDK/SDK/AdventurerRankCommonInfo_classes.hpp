#pragma once

 

// Package: AdventurerRankCommonInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AdventurerRankCommonInfo.AdventurerRankCommonInfo_C
// 0x0160 (0x0410 - 0x02B0)
class UAdventurerRankCommonInfo_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DetailedAnim;                                      // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAdventurerRank_AnmArrow_C*             AdventurerRank_AnmArrow_1;                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdventurerRank_AnmArrow_C*             AdventurerRank_AnmArrow_2;                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdventurerRank_AnmArrow_C*             AdventurerRank_AnmArrow_3;                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdventurerRank_BenefitList_C*          AdventurerRank_BenefitList;                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdventurerRank_GuideMessage_C*         AdventurerRank_GuideMessage;                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdventurerRank_LineEffect_C*           AdventurerRank_LineEffect;                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Base01;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonCmn08_C*                       BtnCmn08_SeeContents;                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    BtnText__SeeContents;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_BattleDetails;                              // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Murry;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Normal;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_TOP_Btn;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CommandMenu_RankMax;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn01_C*                            Goto_AdventureBoard;                               // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_BattleDetails;                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_AdventureBoardIcon;                          // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerPartyLevelInfo_C*                PlayerPartyLevelInfo;                              // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestDetail_C*                         QuestDetail;                                       // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonCmn08_C*                       SBButtonCmn08_C;                                   // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchLeftSideDisp;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchRightSideDisp;                               // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_OK;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtAdventureBoardName;                             // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtRank;                                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtRank_1;                                         // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtRank_2;                                         // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_ContentInfo_C*        UMG_MatchingMenu_ContentInfo;                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsRankLimit;                                       // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FF3[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnGuideMessageVisibility;                          // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsCommandMenu;                                     // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_4FF4[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAdventureBoardBtn;                               // 0x03D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDetailsMode;                                     // 0x03E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDetailed;                                        // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSoloBattleMode;                                  // 0x0401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsGoal;                                            // 0x0402(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4FF5[0x1];                                     // 0x0403(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   GameContentId;                                     // 0x0404(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDetailOnly;                                      // 0x040C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnGuideMessageVisibility__DelegateSignature(bool InVisibility);
	void OnAdventureBoardBtn__DelegateSignature();
	void OnClose__DelegateSignature();
	void OnDetailsMode__DelegateSignature(bool Param_IsDetailed);
	void ExecuteUbergraph_AdventurerRankCommonInfo(int32 EntryPoint);
	void BndEvt__AdventurerRankCommonInfo_CmnBtn01_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
	void BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__AdventurerRankCommonInfo_BtnCmn08_SeeContents_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_140_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void Init();
	void WidgetAnimationEvt_DetailedAnim_K2Node_WidgetAnimationEvent_0();
	void BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnCloseButtonClicked_Event();
	void BndEvt__AdventurerRankCommonInfo_SBButtonCmn08_C_140_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void InAnimation();
	void InitText();
	void GetGameContentID(class FName* OutGameContentId);
	struct FEventReply On_Image_AdventureBoardIcon_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AdventurerRankCommonInfo_C">();
	}
	static class UAdventurerRankCommonInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdventurerRankCommonInfo_C>();
	}
};
static_assert(alignof(UAdventurerRankCommonInfo_C) == 0x000008, "Wrong alignment on UAdventurerRankCommonInfo_C");
static_assert(sizeof(UAdventurerRankCommonInfo_C) == 0x000410, "Wrong size on UAdventurerRankCommonInfo_C");
static_assert(offsetof(UAdventurerRankCommonInfo_C, UberGraphFrame) == 0x0002B0, "Member 'UAdventurerRankCommonInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, DetailedAnim) == 0x0002B8, "Member 'UAdventurerRankCommonInfo_C::DetailedAnim' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, AnimIn) == 0x0002C0, "Member 'UAdventurerRankCommonInfo_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, AdventurerRank_AnmArrow_1) == 0x0002C8, "Member 'UAdventurerRankCommonInfo_C::AdventurerRank_AnmArrow_1' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, AdventurerRank_AnmArrow_2) == 0x0002D0, "Member 'UAdventurerRankCommonInfo_C::AdventurerRank_AnmArrow_2' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, AdventurerRank_AnmArrow_3) == 0x0002D8, "Member 'UAdventurerRankCommonInfo_C::AdventurerRank_AnmArrow_3' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, AdventurerRank_BenefitList) == 0x0002E0, "Member 'UAdventurerRankCommonInfo_C::AdventurerRank_BenefitList' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, AdventurerRank_GuideMessage) == 0x0002E8, "Member 'UAdventurerRankCommonInfo_C::AdventurerRank_GuideMessage' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, AdventurerRank_LineEffect) == 0x0002F0, "Member 'UAdventurerRankCommonInfo_C::AdventurerRank_LineEffect' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, Base01) == 0x0002F8, "Member 'UAdventurerRankCommonInfo_C::Base01' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, BtnCmn08_SeeContents) == 0x000300, "Member 'UAdventurerRankCommonInfo_C::BtnCmn08_SeeContents' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, BtnText__SeeContents) == 0x000308, "Member 'UAdventurerRankCommonInfo_C::BtnText__SeeContents' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, Canvas_BattleDetails) == 0x000310, "Member 'UAdventurerRankCommonInfo_C::Canvas_BattleDetails' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, Canvas_Murry) == 0x000318, "Member 'UAdventurerRankCommonInfo_C::Canvas_Murry' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, Canvas_Normal) == 0x000320, "Member 'UAdventurerRankCommonInfo_C::Canvas_Normal' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, CanvasPanel_TOP_Btn) == 0x000328, "Member 'UAdventurerRankCommonInfo_C::CanvasPanel_TOP_Btn' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, CommandMenu_RankMax) == 0x000330, "Member 'UAdventurerRankCommonInfo_C::CommandMenu_RankMax' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, Goto_AdventureBoard) == 0x000338, "Member 'UAdventurerRankCommonInfo_C::Goto_AdventureBoard' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, HorizontalBox_BattleDetails) == 0x000340, "Member 'UAdventurerRankCommonInfo_C::HorizontalBox_BattleDetails' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, Image_AdventureBoardIcon) == 0x000348, "Member 'UAdventurerRankCommonInfo_C::Image_AdventureBoardIcon' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, PlayerPartyLevelInfo) == 0x000350, "Member 'UAdventurerRankCommonInfo_C::PlayerPartyLevelInfo' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, QuestDetail) == 0x000358, "Member 'UAdventurerRankCommonInfo_C::QuestDetail' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, SBButtonCmn08_C) == 0x000360, "Member 'UAdventurerRankCommonInfo_C::SBButtonCmn08_C' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, SwitchLeftSideDisp) == 0x000368, "Member 'UAdventurerRankCommonInfo_C::SwitchLeftSideDisp' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, SwitchRightSideDisp) == 0x000370, "Member 'UAdventurerRankCommonInfo_C::SwitchRightSideDisp' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, Text_OK) == 0x000378, "Member 'UAdventurerRankCommonInfo_C::Text_OK' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, TxtAdventureBoardName) == 0x000380, "Member 'UAdventurerRankCommonInfo_C::TxtAdventureBoardName' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, TxtRank) == 0x000388, "Member 'UAdventurerRankCommonInfo_C::TxtRank' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, TxtRank_1) == 0x000390, "Member 'UAdventurerRankCommonInfo_C::TxtRank_1' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, TxtRank_2) == 0x000398, "Member 'UAdventurerRankCommonInfo_C::TxtRank_2' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, UIBlocker) == 0x0003A0, "Member 'UAdventurerRankCommonInfo_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, UMG_MatchingMenu_ContentInfo) == 0x0003A8, "Member 'UAdventurerRankCommonInfo_C::UMG_MatchingMenu_ContentInfo' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, IsRankLimit) == 0x0003B0, "Member 'UAdventurerRankCommonInfo_C::IsRankLimit' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, OnGuideMessageVisibility) == 0x0003B8, "Member 'UAdventurerRankCommonInfo_C::OnGuideMessageVisibility' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, IsCommandMenu) == 0x0003C8, "Member 'UAdventurerRankCommonInfo_C::IsCommandMenu' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, OnAdventureBoardBtn) == 0x0003D0, "Member 'UAdventurerRankCommonInfo_C::OnAdventureBoardBtn' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, OnDetailsMode) == 0x0003E0, "Member 'UAdventurerRankCommonInfo_C::OnDetailsMode' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, OnClose) == 0x0003F0, "Member 'UAdventurerRankCommonInfo_C::OnClose' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, IsDetailed) == 0x000400, "Member 'UAdventurerRankCommonInfo_C::IsDetailed' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, IsSoloBattleMode) == 0x000401, "Member 'UAdventurerRankCommonInfo_C::IsSoloBattleMode' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, IsGoal) == 0x000402, "Member 'UAdventurerRankCommonInfo_C::IsGoal' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, GameContentId) == 0x000404, "Member 'UAdventurerRankCommonInfo_C::GameContentId' has a wrong offset!");
static_assert(offsetof(UAdventurerRankCommonInfo_C, IsDetailOnly) == 0x00040C, "Member 'UAdventurerRankCommonInfo_C::IsDetailOnly' has a wrong offset!");

}

