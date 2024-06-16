#pragma once

 

// Package: TicketSelectButtonView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TicketSelectButtonView.TicketSelectButtonView_C
// 0x0170 (0x03E8 - 0x0278)
class UTicketSelectButtonView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            BtnReselect;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_286;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text_Ratio;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Ticket;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBStackBTicketData                    TicketData;                                        // 0x02A0(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         Ticket_Id;                                         // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           Target;                                            // 0x02C0(0x0118)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_             Reselect;                                          // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void Reselect__DelegateSignature();
	void ExecuteUbergraph_TicketSelectButtonView(int32 EntryPoint);
	void BndEvt__TicketSelectButtonView_BtnReselect_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void SetData(int32 TicketId);
	void UpdateTextData();
	float CheckRewardRate(const struct FOwnItemInfo& InputPin, const struct FSBStackBMasterData& SBStackBMasterData);
	void UpdateTarget(const struct FOwnItemInfo& Param_Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TicketSelectButtonView_C">();
	}
	static class UTicketSelectButtonView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTicketSelectButtonView_C>();
	}
};
static_assert(alignof(UTicketSelectButtonView_C) == 0x000008, "Wrong alignment on UTicketSelectButtonView_C");
static_assert(sizeof(UTicketSelectButtonView_C) == 0x0003E8, "Wrong size on UTicketSelectButtonView_C");
static_assert(offsetof(UTicketSelectButtonView_C, UberGraphFrame) == 0x000278, "Member 'UTicketSelectButtonView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTicketSelectButtonView_C, BtnReselect) == 0x000280, "Member 'UTicketSelectButtonView_C::BtnReselect' has a wrong offset!");
static_assert(offsetof(UTicketSelectButtonView_C, Image_286) == 0x000288, "Member 'UTicketSelectButtonView_C::Image_286' has a wrong offset!");
static_assert(offsetof(UTicketSelectButtonView_C, Text_Ratio) == 0x000290, "Member 'UTicketSelectButtonView_C::Text_Ratio' has a wrong offset!");
static_assert(offsetof(UTicketSelectButtonView_C, VB_Ticket) == 0x000298, "Member 'UTicketSelectButtonView_C::VB_Ticket' has a wrong offset!");
static_assert(offsetof(UTicketSelectButtonView_C, TicketData) == 0x0002A0, "Member 'UTicketSelectButtonView_C::TicketData' has a wrong offset!");
static_assert(offsetof(UTicketSelectButtonView_C, Ticket_Id) == 0x0002BC, "Member 'UTicketSelectButtonView_C::Ticket_Id' has a wrong offset!");
static_assert(offsetof(UTicketSelectButtonView_C, Target) == 0x0002C0, "Member 'UTicketSelectButtonView_C::Target' has a wrong offset!");
static_assert(offsetof(UTicketSelectButtonView_C, Reselect) == 0x0003D8, "Member 'UTicketSelectButtonView_C::Reselect' has a wrong offset!");

}

