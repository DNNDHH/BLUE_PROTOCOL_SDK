#pragma once

 

// Package: Fang_expedition_TicketListWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_TicketListWindow.Fang_expedition_TicketListWindow_C
// 0x00F8 (0x0370 - 0x0278)
class UFang_expedition_TicketListWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            Btn_Ok;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          Fang_expedition_TicketItem;                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          Fang_expedition_TicketItem_88;                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          Fang_expedition_TicketItem_194;                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          Fang_expedition_TicketItem_261;                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          Fang_expedition_TicketItem_344;                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_TicketItem_C*          Fang_expedition_TicketItem_416;                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Arrow;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Arrow_1;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<int32>                                 ResetTarget1;                                      // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 ResetTarget2;                                      // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 ResetTarget3;                                      // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 ResetTarget4;                                      // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 ResetTarget5;                                      // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 ResetTarget6;                                      // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 CheckboxIDList;                                    // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UFang_expedition_TicketItem_C*>  CheckWidgetList;                                   // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 TempTokenIds;                                      // 0x0360(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnClose__DelegateSignature(TArray<int32>& SelectTokenIds);
	void ExecuteUbergraph_Fang_expedition_TicketListWindow(int32 EntryPoint);
	void BndEvt__Fang_expedition_TicketListWindow_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void BndEvt__Fang_expedition_TicketListWindow_Btn_OK_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Destruct();
	void Construct();
	void CB_OnCheckStateChange(bool State, int32 ID);
	void Initialize();
	void CB_EnableButtonWork();
	void CloseWork();
	void SetTokenSelect(TArray<int32>& SelectTokenId, const struct FSBFang_expeditionAreaData& AreaData);
	void CheckTicketNum(int32 InId, bool* OutIsEnable);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_TicketListWindow_C">();
	}
	static class UFang_expedition_TicketListWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_TicketListWindow_C>();
	}
};
static_assert(alignof(UFang_expedition_TicketListWindow_C) == 0x000008, "Wrong alignment on UFang_expedition_TicketListWindow_C");
static_assert(sizeof(UFang_expedition_TicketListWindow_C) == 0x000370, "Wrong size on UFang_expedition_TicketListWindow_C");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_TicketListWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, Btn_Ok) == 0x000280, "Member 'UFang_expedition_TicketListWindow_C::Btn_Ok' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, CmnClose01) == 0x000288, "Member 'UFang_expedition_TicketListWindow_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, Fang_expedition_TicketItem) == 0x000290, "Member 'UFang_expedition_TicketListWindow_C::Fang_expedition_TicketItem' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, Fang_expedition_TicketItem_88) == 0x000298, "Member 'UFang_expedition_TicketListWindow_C::Fang_expedition_TicketItem_88' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, Fang_expedition_TicketItem_194) == 0x0002A0, "Member 'UFang_expedition_TicketListWindow_C::Fang_expedition_TicketItem_194' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, Fang_expedition_TicketItem_261) == 0x0002A8, "Member 'UFang_expedition_TicketListWindow_C::Fang_expedition_TicketItem_261' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, Fang_expedition_TicketItem_344) == 0x0002B0, "Member 'UFang_expedition_TicketListWindow_C::Fang_expedition_TicketItem_344' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, Fang_expedition_TicketItem_416) == 0x0002B8, "Member 'UFang_expedition_TicketListWindow_C::Fang_expedition_TicketItem_416' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, Img_Arrow) == 0x0002C0, "Member 'UFang_expedition_TicketListWindow_C::Img_Arrow' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, Img_Arrow_1) == 0x0002C8, "Member 'UFang_expedition_TicketListWindow_C::Img_Arrow_1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, ResetTarget1) == 0x0002D0, "Member 'UFang_expedition_TicketListWindow_C::ResetTarget1' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, ResetTarget2) == 0x0002E0, "Member 'UFang_expedition_TicketListWindow_C::ResetTarget2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, ResetTarget3) == 0x0002F0, "Member 'UFang_expedition_TicketListWindow_C::ResetTarget3' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, ResetTarget4) == 0x000300, "Member 'UFang_expedition_TicketListWindow_C::ResetTarget4' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, ResetTarget5) == 0x000310, "Member 'UFang_expedition_TicketListWindow_C::ResetTarget5' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, ResetTarget6) == 0x000320, "Member 'UFang_expedition_TicketListWindow_C::ResetTarget6' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, CheckboxIDList) == 0x000330, "Member 'UFang_expedition_TicketListWindow_C::CheckboxIDList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, CheckWidgetList) == 0x000340, "Member 'UFang_expedition_TicketListWindow_C::CheckWidgetList' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, OnClose) == 0x000350, "Member 'UFang_expedition_TicketListWindow_C::OnClose' has a wrong offset!");
static_assert(offsetof(UFang_expedition_TicketListWindow_C, TempTokenIds) == 0x000360, "Member 'UFang_expedition_TicketListWindow_C::TempTokenIds' has a wrong offset!");

}

