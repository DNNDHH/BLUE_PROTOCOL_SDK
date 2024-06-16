#pragma once

 

// Package: TicketSelectImagine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TicketSelectImagine.TicketSelectImagine_C
// 0x04E8 (0x0760 - 0x0278)
class UTicketSelectImagine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutAnim;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WindowAnim;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnAnim;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonEquipment2DImageParts_C*         AfterImage;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_L_C*                        AfterStackB;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineAssetViewStatus_C*              AfterStatus;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Decide;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnTicketSelect;                                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose03_C*                          CmnClose03;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Dialog;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_148;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_250;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_415;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_454;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2758;                                        // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonEquipment2DImageParts_C*         PrevImage;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_L_C*                        PrevStackB;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineAssetViewStatus_C*              PrevStatus;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Decide;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Rate;                                          // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FOwnItemInfo                           Target;                                            // 0x0328(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FOwnItemInfo>                   Materials;                                         // 0x0440(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FOwnItemInfo                           SelectAbility;                                     // 0x0450(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FOwnItemInfo                           AfterTarget;                                       // 0x0568(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBMasterImagine                       MasterData;                                        // 0x0680(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SelectTokenId;                                     // 0x0730(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6D72[0x4];                                     // 0x0734(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStackTokenSelectorListView_C*          TicketDialog;                                      // 0x0738(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0740(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDecide;                                          // 0x0750(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnClose__DelegateSignature();
	void OnDecide__DelegateSignature(int32 Ticket);
	void ExecuteUbergraph_TicketSelectImagine(int32 EntryPoint);
	void BndEvt__TicketSelectImagine_CmnClose03_K2Node_ComponentBoundEvent_5_OnClosed__DelegateSignature();
	void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1();
	void OnClosedTicketSelect();
	void RequestClose();
	void Destruct();
	void BndEvt__TicketSelectImagine_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TicketSelectImagine_Btn_Decide_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TicketSelectImagine_CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__TicketSelectImagine_Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnTicketSelected(int32 TokenID);
	void Construct();
	void Initialize();
	void LoadImages();
	void UpdateRate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TicketSelectImagine_C">();
	}
	static class UTicketSelectImagine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTicketSelectImagine_C>();
	}
};
static_assert(alignof(UTicketSelectImagine_C) == 0x000008, "Wrong alignment on UTicketSelectImagine_C");
static_assert(sizeof(UTicketSelectImagine_C) == 0x000760, "Wrong size on UTicketSelectImagine_C");
static_assert(offsetof(UTicketSelectImagine_C, UberGraphFrame) == 0x000278, "Member 'UTicketSelectImagine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, OutAnim) == 0x000280, "Member 'UTicketSelectImagine_C::OutAnim' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, WindowAnim) == 0x000288, "Member 'UTicketSelectImagine_C::WindowAnim' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, BtnAnim) == 0x000290, "Member 'UTicketSelectImagine_C::BtnAnim' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, InAnim) == 0x000298, "Member 'UTicketSelectImagine_C::InAnim' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, AfterImage) == 0x0002A0, "Member 'UTicketSelectImagine_C::AfterImage' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, AfterStackB) == 0x0002A8, "Member 'UTicketSelectImagine_C::AfterStackB' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, AfterStatus) == 0x0002B0, "Member 'UTicketSelectImagine_C::AfterStatus' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Btn_Decide) == 0x0002B8, "Member 'UTicketSelectImagine_C::Btn_Decide' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, BtnTicketSelect) == 0x0002C0, "Member 'UTicketSelectImagine_C::BtnTicketSelect' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, CmnClose03) == 0x0002C8, "Member 'UTicketSelectImagine_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Cvs_Dialog) == 0x0002D0, "Member 'UTicketSelectImagine_C::Cvs_Dialog' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Image_148) == 0x0002D8, "Member 'UTicketSelectImagine_C::Image_148' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Image_250) == 0x0002E0, "Member 'UTicketSelectImagine_C::Image_250' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Image_415) == 0x0002E8, "Member 'UTicketSelectImagine_C::Image_415' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Image_454) == 0x0002F0, "Member 'UTicketSelectImagine_C::Image_454' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Image_2758) == 0x0002F8, "Member 'UTicketSelectImagine_C::Image_2758' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, PrevImage) == 0x000300, "Member 'UTicketSelectImagine_C::PrevImage' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, PrevStackB) == 0x000308, "Member 'UTicketSelectImagine_C::PrevStackB' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, PrevStatus) == 0x000310, "Member 'UTicketSelectImagine_C::PrevStatus' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Txt_Decide) == 0x000318, "Member 'UTicketSelectImagine_C::Txt_Decide' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Txt_Rate) == 0x000320, "Member 'UTicketSelectImagine_C::Txt_Rate' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Target) == 0x000328, "Member 'UTicketSelectImagine_C::Target' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, Materials) == 0x000440, "Member 'UTicketSelectImagine_C::Materials' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, SelectAbility) == 0x000450, "Member 'UTicketSelectImagine_C::SelectAbility' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, AfterTarget) == 0x000568, "Member 'UTicketSelectImagine_C::AfterTarget' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, MasterData) == 0x000680, "Member 'UTicketSelectImagine_C::MasterData' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, SelectTokenId) == 0x000730, "Member 'UTicketSelectImagine_C::SelectTokenId' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, TicketDialog) == 0x000738, "Member 'UTicketSelectImagine_C::TicketDialog' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, OnClose) == 0x000740, "Member 'UTicketSelectImagine_C::OnClose' has a wrong offset!");
static_assert(offsetof(UTicketSelectImagine_C, OnDecide) == 0x000750, "Member 'UTicketSelectImagine_C::OnDecide' has a wrong offset!");

}

