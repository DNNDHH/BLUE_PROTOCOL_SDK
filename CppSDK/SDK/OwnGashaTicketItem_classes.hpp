#pragma once

 

// Package: OwnGashaTicketItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OwnGashaTicketItem.OwnGashaTicketItem_C
// 0x00F8 (0x0370 - 0x0278)
class UOwnGashaTicketItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Frame;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGashaLever_C*                          GashaLever;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_AutoSelectMessage;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Credit_Ticket;                               // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Credit_Ticket_1;                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label_Credit_Ticket_2;                             // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_TicketName;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_TicketName_1;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Type_Ticket_1;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Term;                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchUPD_CreditTicket;                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchUPD_LeverText;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtAmount;                                         // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtAmountNum;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtLever;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SwitchId;                                          // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4604[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectTicket;                                    // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FSBGashaTickets                        TicketData;                                        // 0x0328(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	FMulticastInlineDelegateProperty_             EventOnClicked;                                    // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UTexture2D>              Texture;                                           // 0x0340(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         AmountUse;                                         // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelectTicket__DelegateSignature(const struct FSBGashaTickets& Param_TicketData, int32 Amount);
	void EventOnClicked__DelegateSignature();
	void ExecuteUbergraph_OwnGashaTicketItem(int32 EntryPoint);
	void SetIconTexture(int32 TokenID);
	void BndEvt__GashaLever_K2Node_ComponentBoundEvent_2_EventRotateAnimFinished__DelegateSignature();
	void BndEvt__GashaLever_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_B24768C447D1D1C1B9F53D83D080C74E(class UObject* Loaded);
	void SetOwnTicketList(int32 TokenID, int32 Amount);
	void SetExecutionTicketSelect(const struct FSBGashaTickets& InGashaTicketData, int32 Amount, int32 Gender, int32 Param_Index);
	void GetAmount(int32* OutAmount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OwnGashaTicketItem_C">();
	}
	static class UOwnGashaTicketItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOwnGashaTicketItem_C>();
	}
};
static_assert(alignof(UOwnGashaTicketItem_C) == 0x000008, "Wrong alignment on UOwnGashaTicketItem_C");
static_assert(sizeof(UOwnGashaTicketItem_C) == 0x000370, "Wrong size on UOwnGashaTicketItem_C");
static_assert(offsetof(UOwnGashaTicketItem_C, UberGraphFrame) == 0x000278, "Member 'UOwnGashaTicketItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Frame) == 0x000280, "Member 'UOwnGashaTicketItem_C::Frame' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, GashaLever) == 0x000288, "Member 'UOwnGashaTicketItem_C::GashaLever' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Image) == 0x000290, "Member 'UOwnGashaTicketItem_C::Image' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Image_1) == 0x000298, "Member 'UOwnGashaTicketItem_C::Image_1' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Label_AutoSelectMessage) == 0x0002A0, "Member 'UOwnGashaTicketItem_C::Label_AutoSelectMessage' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Label_Credit_Ticket) == 0x0002A8, "Member 'UOwnGashaTicketItem_C::Label_Credit_Ticket' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Label_Credit_Ticket_1) == 0x0002B0, "Member 'UOwnGashaTicketItem_C::Label_Credit_Ticket_1' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Label_Credit_Ticket_2) == 0x0002B8, "Member 'UOwnGashaTicketItem_C::Label_Credit_Ticket_2' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Label_TicketName) == 0x0002C0, "Member 'UOwnGashaTicketItem_C::Label_TicketName' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Label_TicketName_1) == 0x0002C8, "Member 'UOwnGashaTicketItem_C::Label_TicketName_1' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Label_Type_Ticket_1) == 0x0002D0, "Member 'UOwnGashaTicketItem_C::Label_Type_Ticket_1' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, SBDateTimeTextBlock_Term) == 0x0002D8, "Member 'UOwnGashaTicketItem_C::SBDateTimeTextBlock_Term' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, SwitchType) == 0x0002E0, "Member 'UOwnGashaTicketItem_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, SwitchUPD_CreditTicket) == 0x0002E8, "Member 'UOwnGashaTicketItem_C::SwitchUPD_CreditTicket' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, SwitchUPD_LeverText) == 0x0002F0, "Member 'UOwnGashaTicketItem_C::SwitchUPD_LeverText' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, TxtAmount) == 0x0002F8, "Member 'UOwnGashaTicketItem_C::TxtAmount' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, TxtAmountNum) == 0x000300, "Member 'UOwnGashaTicketItem_C::TxtAmountNum' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, TxtLever) == 0x000308, "Member 'UOwnGashaTicketItem_C::TxtLever' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, SwitchId) == 0x000310, "Member 'UOwnGashaTicketItem_C::SwitchId' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, OnSelectTicket) == 0x000318, "Member 'UOwnGashaTicketItem_C::OnSelectTicket' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, TicketData) == 0x000328, "Member 'UOwnGashaTicketItem_C::TicketData' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, EventOnClicked) == 0x000330, "Member 'UOwnGashaTicketItem_C::EventOnClicked' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, Texture) == 0x000340, "Member 'UOwnGashaTicketItem_C::Texture' has a wrong offset!");
static_assert(offsetof(UOwnGashaTicketItem_C, AmountUse) == 0x000368, "Member 'UOwnGashaTicketItem_C::AmountUse' has a wrong offset!");

}

