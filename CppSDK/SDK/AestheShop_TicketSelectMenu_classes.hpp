#pragma once

 

// Package: AestheShop_TicketSelectMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AestheShop_TicketSelectMenu.AestheShop_TicketSelectMenu_C
// 0x00C0 (0x0370 - 0x02B0)
class UAestheShop_TicketSelectMenu_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAestheShop_InAnime_C*                  AestheShop_InAnime;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 AestheTitle;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Decide;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBtnBack;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAestheShop_TicketDescWindow_C*         CourseDetail;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconShop;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Bg0;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BgWh;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoBG;                                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_TicketList;                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_AestheShopStepInfo_C*              StepInfo;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StepInfoBgLine;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Decide;                                        // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBCharacterToken>              HoldTicketTokens;                                  // 0x0338(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectedTicketTokenId;                             // 0x0348(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectedTicketHoldNum;                             // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPremiumMember;                                  // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsCourseDecided;                                  // 0x0351(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B60[0x6];                                     // 0x0352(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           BPDialog;                                          // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempCourseId;                                      // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempTicketTokenId;                                 // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAestheShop_TicketListItem_C*           TempTicketListItem;                                // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature(bool InIsCourseDecided, int32 InTicketTokenId, int32 InUseTicketNum);
	void ExecuteUbergraph_AestheShop_TicketSelectMenu(int32 EntryPoint);
	void AdventureBoardError_Event(EDialogResult Result);
	void OnCheckStatus(const int32 RetCode);
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature();
	void OnCourseListItemSelected____(int32 InCourseId, int32 InTicketTokenId, int32 InHoldTicketTokenAmount);
	void OnCourseDecided();
	void BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void OnPress_Cancel();
	void OnEndLastConfirmDialog(EDialogResult Result);
	void OpenLastConfirmDialog();
	void BndEvt__Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Close();
	void SetListItemSelected(int32 InTicketTokenId, bool InIsSelected);
	void CreateCourseItemList();
	void CheckIfCourseIsUsable(int32 InTicketTokenId, int32 InHoldTicketNum, bool* OutIsUsable);
	void GetHoldTicketTokenAmount(TArray<struct FSBCharacterToken>& InHoldTicketTokens, int32 InTicketTokenId, bool* OutIsValid, int32* OutAmount);
	void SetupCourseDetail(int32 InCourseId);
	void SetCourseDetailVisibility(bool Param_IsVisible);
	void GetTicketTokenNameTextId(TArray<struct FMasterToken>& InTokenMasterDataArray, int32 InTicketTokenId, bool* OutIsValid, struct FSBTextTableHash* OutTextId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AestheShop_TicketSelectMenu_C">();
	}
	static class UAestheShop_TicketSelectMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAestheShop_TicketSelectMenu_C>();
	}
};
static_assert(alignof(UAestheShop_TicketSelectMenu_C) == 0x000008, "Wrong alignment on UAestheShop_TicketSelectMenu_C");
static_assert(sizeof(UAestheShop_TicketSelectMenu_C) == 0x000370, "Wrong size on UAestheShop_TicketSelectMenu_C");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, UberGraphFrame) == 0x0002B0, "Member 'UAestheShop_TicketSelectMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, AestheShop_InAnime) == 0x0002B8, "Member 'UAestheShop_TicketSelectMenu_C::AestheShop_InAnime' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, AestheTitle) == 0x0002C0, "Member 'UAestheShop_TicketSelectMenu_C::AestheTitle' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, Btn_Decide) == 0x0002C8, "Member 'UAestheShop_TicketSelectMenu_C::Btn_Decide' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, Btn_ShowHint) == 0x0002D0, "Member 'UAestheShop_TicketSelectMenu_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, CmnBtnBack) == 0x0002D8, "Member 'UAestheShop_TicketSelectMenu_C::CmnBtnBack' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, CourseDetail) == 0x0002E0, "Member 'UAestheShop_TicketSelectMenu_C::CourseDetail' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, IconShop) == 0x0002E8, "Member 'UAestheShop_TicketSelectMenu_C::IconShop' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, Image_Bg0) == 0x0002F0, "Member 'UAestheShop_TicketSelectMenu_C::Image_Bg0' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, Image_BgWh) == 0x0002F8, "Member 'UAestheShop_TicketSelectMenu_C::Image_BgWh' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, LogoBG) == 0x000300, "Member 'UAestheShop_TicketSelectMenu_C::LogoBG' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, ScrollBox_TicketList) == 0x000308, "Member 'UAestheShop_TicketSelectMenu_C::ScrollBox_TicketList' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, StepInfo) == 0x000310, "Member 'UAestheShop_TicketSelectMenu_C::StepInfo' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, StepInfoBgLine) == 0x000318, "Member 'UAestheShop_TicketSelectMenu_C::StepInfoBgLine' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, Txt_Decide) == 0x000320, "Member 'UAestheShop_TicketSelectMenu_C::Txt_Decide' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, OnClose) == 0x000328, "Member 'UAestheShop_TicketSelectMenu_C::OnClose' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, HoldTicketTokens) == 0x000338, "Member 'UAestheShop_TicketSelectMenu_C::HoldTicketTokens' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, SelectedTicketTokenId) == 0x000348, "Member 'UAestheShop_TicketSelectMenu_C::SelectedTicketTokenId' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, SelectedTicketHoldNum) == 0x00034C, "Member 'UAestheShop_TicketSelectMenu_C::SelectedTicketHoldNum' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, bIsPremiumMember) == 0x000350, "Member 'UAestheShop_TicketSelectMenu_C::bIsPremiumMember' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, bIsCourseDecided) == 0x000351, "Member 'UAestheShop_TicketSelectMenu_C::bIsCourseDecided' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, BPDialog) == 0x000358, "Member 'UAestheShop_TicketSelectMenu_C::BPDialog' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, TempCourseId) == 0x000360, "Member 'UAestheShop_TicketSelectMenu_C::TempCourseId' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, TempTicketTokenId) == 0x000364, "Member 'UAestheShop_TicketSelectMenu_C::TempTicketTokenId' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketSelectMenu_C, TempTicketListItem) == 0x000368, "Member 'UAestheShop_TicketSelectMenu_C::TempTicketListItem' has a wrong offset!");

}

