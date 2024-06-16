#pragma once

 

// Package: TicketSelectWeapon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TicketSelectWeapon.TicketSelectWeapon_C
// 0x0248 (0x04C0 - 0x0278)
class UTicketSelectWeapon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       OutAnim;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       WindowAnim;                                        // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       BtnAnim;                                           // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       InAnim;                                            // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UStackBInhelitPerkView_C*               AfterAbilities;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTicketSpecialDisp_C*                   AfterSpecial;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponAssetView_C*                     AfterWeapon;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Decide;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnUseTicket;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose03_C*                          CmnClose03;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_DialogBase;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_148;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_415;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_454;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2758;                                        // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStackBInhelitPerkView_C*               PrevAbilities;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTicketSpecialDisp_C*                   PrevSpecial;                                       // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponAssetView_C*                     PrevWeapon;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BtnDecide;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_SuccessRate;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FOwnItemInfo                           Target;                                            // 0x0330(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FOwnItemInfo>                   Materials;                                         // 0x0448(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSBStackBMasterData                    StackBMasterData;                                  // 0x0458(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBStackBPerk>                  SelectedPerks;                                     // 0x0488(0x0010)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                         UseTokenId;                                        // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         AddRate;                                           // 0x049C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             Select;                                            // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 SpecialUID;                                        // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void Select__DelegateSignature(int32 Param_UseTokenId);
	void ExecuteUbergraph_TicketSelectWeapon(int32 EntryPoint);
	void BndEvt__TicketSelectWeapon_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1();
	void Destruct();
	void RequestClose();
	void BndEvt__TicketSelectWeapon_CmnBtn16_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__TicketSelectWeapon_Btn_Decide_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TicketSelectWeapon_Btn_Decide_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TicketSelectWeapon_Btn_Decide_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void OnClosedTicketSelect();
	void OnSelectToken(int32 TokenID);
	void Construct();
	void Initialize();
	void UpdateTokenData();
	void UpdateSuccessRatio();
	void UpdateRewardRatio(float* AddRatio);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TicketSelectWeapon_C">();
	}
	static class UTicketSelectWeapon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTicketSelectWeapon_C>();
	}
};
static_assert(alignof(UTicketSelectWeapon_C) == 0x000008, "Wrong alignment on UTicketSelectWeapon_C");
static_assert(sizeof(UTicketSelectWeapon_C) == 0x0004C0, "Wrong size on UTicketSelectWeapon_C");
static_assert(offsetof(UTicketSelectWeapon_C, UberGraphFrame) == 0x000278, "Member 'UTicketSelectWeapon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, OutAnim) == 0x000280, "Member 'UTicketSelectWeapon_C::OutAnim' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, WindowAnim) == 0x000288, "Member 'UTicketSelectWeapon_C::WindowAnim' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, BtnAnim) == 0x000290, "Member 'UTicketSelectWeapon_C::BtnAnim' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, InAnim) == 0x000298, "Member 'UTicketSelectWeapon_C::InAnim' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, AfterAbilities) == 0x0002A0, "Member 'UTicketSelectWeapon_C::AfterAbilities' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, AfterSpecial) == 0x0002A8, "Member 'UTicketSelectWeapon_C::AfterSpecial' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, AfterWeapon) == 0x0002B0, "Member 'UTicketSelectWeapon_C::AfterWeapon' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Btn_Decide) == 0x0002B8, "Member 'UTicketSelectWeapon_C::Btn_Decide' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, BtnUseTicket) == 0x0002C0, "Member 'UTicketSelectWeapon_C::BtnUseTicket' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, CmnClose03) == 0x0002C8, "Member 'UTicketSelectWeapon_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Cvs_DialogBase) == 0x0002D0, "Member 'UTicketSelectWeapon_C::Cvs_DialogBase' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Image_148) == 0x0002D8, "Member 'UTicketSelectWeapon_C::Image_148' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Image_415) == 0x0002E0, "Member 'UTicketSelectWeapon_C::Image_415' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Image_454) == 0x0002E8, "Member 'UTicketSelectWeapon_C::Image_454' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Image_2758) == 0x0002F0, "Member 'UTicketSelectWeapon_C::Image_2758' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, PrevAbilities) == 0x0002F8, "Member 'UTicketSelectWeapon_C::PrevAbilities' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, PrevSpecial) == 0x000300, "Member 'UTicketSelectWeapon_C::PrevSpecial' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, PrevWeapon) == 0x000308, "Member 'UTicketSelectWeapon_C::PrevWeapon' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Txt_BtnDecide) == 0x000310, "Member 'UTicketSelectWeapon_C::Txt_BtnDecide' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Txt_SuccessRate) == 0x000318, "Member 'UTicketSelectWeapon_C::Txt_SuccessRate' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, OnClose) == 0x000320, "Member 'UTicketSelectWeapon_C::OnClose' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Target) == 0x000330, "Member 'UTicketSelectWeapon_C::Target' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Materials) == 0x000448, "Member 'UTicketSelectWeapon_C::Materials' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, StackBMasterData) == 0x000458, "Member 'UTicketSelectWeapon_C::StackBMasterData' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, SelectedPerks) == 0x000488, "Member 'UTicketSelectWeapon_C::SelectedPerks' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, UseTokenId) == 0x000498, "Member 'UTicketSelectWeapon_C::UseTokenId' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, AddRate) == 0x00049C, "Member 'UTicketSelectWeapon_C::AddRate' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, Select) == 0x0004A0, "Member 'UTicketSelectWeapon_C::Select' has a wrong offset!");
static_assert(offsetof(UTicketSelectWeapon_C, SpecialUID) == 0x0004B0, "Member 'UTicketSelectWeapon_C::SpecialUID' has a wrong offset!");

}

