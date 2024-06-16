#pragma once

 

// Package: History_DeleteAnnounce

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass History_DeleteAnnounce.History_DeleteAnnounce_C
// 0x0070 (0x02E8 - 0x0278)
class UHistory_DeleteAnnounce_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       CloseAnim;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OpenAnim;                                          // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnClose02_C*                          Btn_Close;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_FullScreen;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 FlatShop_CreditItem_BPP;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 FlatShop_CreditItem_Free;                          // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFlatShop_CreditItem_C*                 FlatShop_CreditItem_Paid;                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHistory_TimerIcon_C*                   History_TimerIcon;                                 // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   Txt_Timer;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClosed;                                          // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          Separate;                                          // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClosed__DelegateSignature();
	void ExecuteUbergraph_History_DeleteAnnounce(int32 EntryPoint);
	void OnEsc();
	void SetInfo(ESBHistoryType Type, int32 Paid, int32 Free, const struct FDateTime& Time);
	void BndEvt__History_DeleteAnnounce_Btn_Close_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void BndEvt__History_DeleteAnnounce_Btn_FullScreen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Finished_7D022C654082BF7654B3B38FE16E6757();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"History_DeleteAnnounce_C">();
	}
	static class UHistory_DeleteAnnounce_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHistory_DeleteAnnounce_C>();
	}
};
static_assert(alignof(UHistory_DeleteAnnounce_C) == 0x000008, "Wrong alignment on UHistory_DeleteAnnounce_C");
static_assert(sizeof(UHistory_DeleteAnnounce_C) == 0x0002E8, "Wrong size on UHistory_DeleteAnnounce_C");
static_assert(offsetof(UHistory_DeleteAnnounce_C, UberGraphFrame) == 0x000278, "Member 'UHistory_DeleteAnnounce_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, CloseAnim) == 0x000280, "Member 'UHistory_DeleteAnnounce_C::CloseAnim' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, OpenAnim) == 0x000288, "Member 'UHistory_DeleteAnnounce_C::OpenAnim' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, Btn_Close) == 0x000290, "Member 'UHistory_DeleteAnnounce_C::Btn_Close' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, Btn_FullScreen) == 0x000298, "Member 'UHistory_DeleteAnnounce_C::Btn_FullScreen' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, FlatShop_CreditItem_BPP) == 0x0002A0, "Member 'UHistory_DeleteAnnounce_C::FlatShop_CreditItem_BPP' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, FlatShop_CreditItem_Free) == 0x0002A8, "Member 'UHistory_DeleteAnnounce_C::FlatShop_CreditItem_Free' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, FlatShop_CreditItem_Paid) == 0x0002B0, "Member 'UHistory_DeleteAnnounce_C::FlatShop_CreditItem_Paid' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, History_TimerIcon) == 0x0002B8, "Member 'UHistory_DeleteAnnounce_C::History_TimerIcon' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, Txt_Timer) == 0x0002C0, "Member 'UHistory_DeleteAnnounce_C::Txt_Timer' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, UIBlocker) == 0x0002C8, "Member 'UHistory_DeleteAnnounce_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, OnClosed) == 0x0002D0, "Member 'UHistory_DeleteAnnounce_C::OnClosed' has a wrong offset!");
static_assert(offsetof(UHistory_DeleteAnnounce_C, Separate) == 0x0002E0, "Member 'UHistory_DeleteAnnounce_C::Separate' has a wrong offset!");

}

