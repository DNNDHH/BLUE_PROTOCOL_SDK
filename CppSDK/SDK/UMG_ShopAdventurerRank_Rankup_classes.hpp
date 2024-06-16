#pragma once

 

// Package: UMG_ShopAdventurerRank_Rankup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_ShopAdventurerRank_Rankup.UMG_ShopAdventurerRank_Rankup_C
// 0x00F0 (0x03A0 - 0x02B0)
class UUMG_ShopAdventurerRank_Rankup_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimRankup;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UAdventurerRank_BenefitList_C*          AdventurerRank_BenefitList;                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAdventurerRank_LineEffect_C*           AdventurerRank_LineEffect;                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonCmn08_C*                       BtnCmn16_OK;                                       // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    BtnText_OK;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_Rankup;                                     // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBtnBack_1;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BG;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Effect01;                                    // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Effect02;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0article01;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0article02;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0article03;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopAdventurerRank_Bg_C*               ShopAdventurerRank_Bg;                             // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_InAnime_C*                    ShopMenu_InAnime;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtPrevRank;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtRan;                                            // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtRankBattle;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         AdventurerRank;                                    // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRankLimit;                                       // 0x036C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141C[0x3];                                     // 0x036D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClose;                                           // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRankUpFlow;                                      // 0x0381(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141D[0x6];                                     // 0x0382(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnStartExam;                                       // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsError;                                           // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature(bool IsSuccess);
	void OnStartExam__DelegateSignature();
	void ExecuteUbergraph_UMG_ShopAdventurerRank_Rankup(int32 EntryPoint);
	void BndEvt__UMG_ShopAdventurerRank_Rankup_BtnCmn08_OK_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_ShopAdventurerRank_Rankup_SBButtonCmn08_C_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_ShopAdventurerRank_Rankup_SBButtonCmn08_C_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_AnimRankup_K2Node_WidgetAnimationEvent_1();
	void OnPress_Cancel();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__CmnBtnBack_1_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void OnAdventurerRankDelegate(int32 InRetCode);
	void Destruct();
	void Construct();
	void UpdateInfo();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_ShopAdventurerRank_Rankup_C">();
	}
	static class UUMG_ShopAdventurerRank_Rankup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_ShopAdventurerRank_Rankup_C>();
	}
};
static_assert(alignof(UUMG_ShopAdventurerRank_Rankup_C) == 0x000008, "Wrong alignment on UUMG_ShopAdventurerRank_Rankup_C");
static_assert(sizeof(UUMG_ShopAdventurerRank_Rankup_C) == 0x0003A0, "Wrong size on UUMG_ShopAdventurerRank_Rankup_C");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_ShopAdventurerRank_Rankup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, AnimRankup) == 0x0002B8, "Member 'UUMG_ShopAdventurerRank_Rankup_C::AnimRankup' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, AnimOut) == 0x0002C0, "Member 'UUMG_ShopAdventurerRank_Rankup_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, AnimIn) == 0x0002C8, "Member 'UUMG_ShopAdventurerRank_Rankup_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, AdventurerRank_BenefitList) == 0x0002D0, "Member 'UUMG_ShopAdventurerRank_Rankup_C::AdventurerRank_BenefitList' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, AdventurerRank_LineEffect) == 0x0002D8, "Member 'UUMG_ShopAdventurerRank_Rankup_C::AdventurerRank_LineEffect' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, BtnCmn16_OK) == 0x0002E0, "Member 'UUMG_ShopAdventurerRank_Rankup_C::BtnCmn16_OK' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, BtnText_OK) == 0x0002E8, "Member 'UUMG_ShopAdventurerRank_Rankup_C::BtnText_OK' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, Canvas_Rankup) == 0x0002F0, "Member 'UUMG_ShopAdventurerRank_Rankup_C::Canvas_Rankup' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, CmnBtnBack_1) == 0x0002F8, "Member 'UUMG_ShopAdventurerRank_Rankup_C::CmnBtnBack_1' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, Image_BG) == 0x000300, "Member 'UUMG_ShopAdventurerRank_Rankup_C::Image_BG' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, Image_Effect01) == 0x000308, "Member 'UUMG_ShopAdventurerRank_Rankup_C::Image_Effect01' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, Image_Effect02) == 0x000310, "Member 'UUMG_ShopAdventurerRank_Rankup_C::Image_Effect02' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, Image_line) == 0x000318, "Member 'UUMG_ShopAdventurerRank_Rankup_C::Image_line' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, Image_0article01) == 0x000320, "Member 'UUMG_ShopAdventurerRank_Rankup_C::Image_0article01' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, Image_0article02) == 0x000328, "Member 'UUMG_ShopAdventurerRank_Rankup_C::Image_0article02' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, Image_0article03) == 0x000330, "Member 'UUMG_ShopAdventurerRank_Rankup_C::Image_0article03' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, ShopAdventurerRank_Bg) == 0x000338, "Member 'UUMG_ShopAdventurerRank_Rankup_C::ShopAdventurerRank_Bg' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, ShopMenu_InAnime) == 0x000340, "Member 'UUMG_ShopAdventurerRank_Rankup_C::ShopMenu_InAnime' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, TxtPrevRank) == 0x000348, "Member 'UUMG_ShopAdventurerRank_Rankup_C::TxtPrevRank' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, TxtRan) == 0x000350, "Member 'UUMG_ShopAdventurerRank_Rankup_C::TxtRan' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, TxtRankBattle) == 0x000358, "Member 'UUMG_ShopAdventurerRank_Rankup_C::TxtRankBattle' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, UIBlocker) == 0x000360, "Member 'UUMG_ShopAdventurerRank_Rankup_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, AdventurerRank) == 0x000368, "Member 'UUMG_ShopAdventurerRank_Rankup_C::AdventurerRank' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, IsRankLimit) == 0x00036C, "Member 'UUMG_ShopAdventurerRank_Rankup_C::IsRankLimit' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, OnClose) == 0x000370, "Member 'UUMG_ShopAdventurerRank_Rankup_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, IsClose) == 0x000380, "Member 'UUMG_ShopAdventurerRank_Rankup_C::IsClose' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, IsRankUpFlow) == 0x000381, "Member 'UUMG_ShopAdventurerRank_Rankup_C::IsRankUpFlow' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, OnStartExam) == 0x000388, "Member 'UUMG_ShopAdventurerRank_Rankup_C::OnStartExam' has a wrong offset!");
static_assert(offsetof(UUMG_ShopAdventurerRank_Rankup_C, IsError) == 0x000398, "Member 'UUMG_ShopAdventurerRank_Rankup_C::IsError' has a wrong offset!");

}

