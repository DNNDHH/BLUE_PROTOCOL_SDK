#pragma once

 

// Package: FlatShop_CreditItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EFlatShopCreditType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FlatShop_CreditItem.FlatShop_CreditItem_C
// 0x0168 (0x03E0 - 0x0278)
class UFlatShop_CreditItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Arrow;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_1;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_2;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Arrow_3;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Caution_1;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Caution_2;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_Coin;                               // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_Coin_Amount_U;                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_Coin_U;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_Orb;                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_Orb_Amount_U;                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_Orb_U;                              // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_SRP;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_SRP_Amount_U;                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_SRP_U;                              // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_Ticket;                             // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_Ticket_Amount_U;                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCounterTextBlock*                    Counter_Credit_Ticket_U;                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ExpireSoon_Bp;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ExpireSoon_Bp_U;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ExpireSoon_Orb;                                    // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ExpireSoon_Orb_1;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageExpireSoon;                                   // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageExpireSoon_1;                                 // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageExpireSoon_Bp;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageExpireSoon_Bp_U;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageUpperLimitOver;                               // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_ExpireSoon_Bp;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_ExpireSoon_Bp_U;                             // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_ExpireSoon_Orb;                              // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_ExpireSoon_Orb_1;                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Type_Coin;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Type_Orb;                                    // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Type_Orb_U;                                  // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Type_SRP;                                    // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Type_Ticket;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_UpperLimitOver_Bp_1;                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchType;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TicketIcon;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TicketIcon_1;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         UpperLimitOver;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EFlatShopCreditType                           InCrditType;                                       // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C71[0x3];                                     // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CreditCounter;                                     // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCountMove;                                       // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsDialog;                                          // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6C72[0x2];                                     // 0x03D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CreditCost;                                        // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonIconToolTipContent_MultiLine_C*  CautionToolTop;                                    // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_FlatShop_CreditItem(int32 EntryPoint);
	void SetIconTexture(int32 TokenID);
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_52660D15417B61953E2BF591D987F44E(class UObject* Loaded);
	void Set_Credit_Type();
	void SetCreditNum(int32 Num);
	void ChangeToTicketType(int32 TokenID);
	void Reset_Count_Move();
	void SetGashaTicketAmountColor(bool IsLack);
	void SetAfterCreditNum(int32 Num);
	void SetVisibilityExpired(bool InVisibility);
	void SetCreditLack(bool IsLack);
	class UWidget* Get_Caution_ToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FlatShop_CreditItem_C">();
	}
	static class UFlatShop_CreditItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFlatShop_CreditItem_C>();
	}
};
static_assert(alignof(UFlatShop_CreditItem_C) == 0x000008, "Wrong alignment on UFlatShop_CreditItem_C");
static_assert(sizeof(UFlatShop_CreditItem_C) == 0x0003E0, "Wrong size on UFlatShop_CreditItem_C");
static_assert(offsetof(UFlatShop_CreditItem_C, UberGraphFrame) == 0x000278, "Member 'UFlatShop_CreditItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Arrow) == 0x000280, "Member 'UFlatShop_CreditItem_C::Arrow' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Arrow_1) == 0x000288, "Member 'UFlatShop_CreditItem_C::Arrow_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Arrow_2) == 0x000290, "Member 'UFlatShop_CreditItem_C::Arrow_2' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Arrow_3) == 0x000298, "Member 'UFlatShop_CreditItem_C::Arrow_3' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Caution_1) == 0x0002A0, "Member 'UFlatShop_CreditItem_C::Caution_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Caution_2) == 0x0002A8, "Member 'UFlatShop_CreditItem_C::Caution_2' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_Coin) == 0x0002B0, "Member 'UFlatShop_CreditItem_C::Counter_Credit_Coin' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_Coin_Amount_U) == 0x0002B8, "Member 'UFlatShop_CreditItem_C::Counter_Credit_Coin_Amount_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_Coin_U) == 0x0002C0, "Member 'UFlatShop_CreditItem_C::Counter_Credit_Coin_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_Orb) == 0x0002C8, "Member 'UFlatShop_CreditItem_C::Counter_Credit_Orb' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_Orb_Amount_U) == 0x0002D0, "Member 'UFlatShop_CreditItem_C::Counter_Credit_Orb_Amount_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_Orb_U) == 0x0002D8, "Member 'UFlatShop_CreditItem_C::Counter_Credit_Orb_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_SRP) == 0x0002E0, "Member 'UFlatShop_CreditItem_C::Counter_Credit_SRP' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_SRP_Amount_U) == 0x0002E8, "Member 'UFlatShop_CreditItem_C::Counter_Credit_SRP_Amount_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_SRP_U) == 0x0002F0, "Member 'UFlatShop_CreditItem_C::Counter_Credit_SRP_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_Ticket) == 0x0002F8, "Member 'UFlatShop_CreditItem_C::Counter_Credit_Ticket' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_Ticket_Amount_U) == 0x000300, "Member 'UFlatShop_CreditItem_C::Counter_Credit_Ticket_Amount_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Counter_Credit_Ticket_U) == 0x000308, "Member 'UFlatShop_CreditItem_C::Counter_Credit_Ticket_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, ExpireSoon_Bp) == 0x000310, "Member 'UFlatShop_CreditItem_C::ExpireSoon_Bp' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, ExpireSoon_Bp_U) == 0x000318, "Member 'UFlatShop_CreditItem_C::ExpireSoon_Bp_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, ExpireSoon_Orb) == 0x000320, "Member 'UFlatShop_CreditItem_C::ExpireSoon_Orb' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, ExpireSoon_Orb_1) == 0x000328, "Member 'UFlatShop_CreditItem_C::ExpireSoon_Orb_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, ImageExpireSoon) == 0x000330, "Member 'UFlatShop_CreditItem_C::ImageExpireSoon' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, ImageExpireSoon_1) == 0x000338, "Member 'UFlatShop_CreditItem_C::ImageExpireSoon_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, ImageExpireSoon_Bp) == 0x000340, "Member 'UFlatShop_CreditItem_C::ImageExpireSoon_Bp' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, ImageExpireSoon_Bp_U) == 0x000348, "Member 'UFlatShop_CreditItem_C::ImageExpireSoon_Bp_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, ImageUpperLimitOver) == 0x000350, "Member 'UFlatShop_CreditItem_C::ImageUpperLimitOver' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Label_ExpireSoon_Bp) == 0x000358, "Member 'UFlatShop_CreditItem_C::Label_ExpireSoon_Bp' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Label_ExpireSoon_Bp_U) == 0x000360, "Member 'UFlatShop_CreditItem_C::Label_ExpireSoon_Bp_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Label_ExpireSoon_Orb) == 0x000368, "Member 'UFlatShop_CreditItem_C::Label_ExpireSoon_Orb' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Label_ExpireSoon_Orb_1) == 0x000370, "Member 'UFlatShop_CreditItem_C::Label_ExpireSoon_Orb_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Label_Type_Coin) == 0x000378, "Member 'UFlatShop_CreditItem_C::Label_Type_Coin' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Label_Type_Orb) == 0x000380, "Member 'UFlatShop_CreditItem_C::Label_Type_Orb' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Label_Type_Orb_U) == 0x000388, "Member 'UFlatShop_CreditItem_C::Label_Type_Orb_U' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Label_Type_SRP) == 0x000390, "Member 'UFlatShop_CreditItem_C::Label_Type_SRP' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Label_Type_Ticket) == 0x000398, "Member 'UFlatShop_CreditItem_C::Label_Type_Ticket' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, Label_UpperLimitOver_Bp_1) == 0x0003A0, "Member 'UFlatShop_CreditItem_C::Label_UpperLimitOver_Bp_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, SwitchType) == 0x0003A8, "Member 'UFlatShop_CreditItem_C::SwitchType' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, TicketIcon) == 0x0003B0, "Member 'UFlatShop_CreditItem_C::TicketIcon' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, TicketIcon_1) == 0x0003B8, "Member 'UFlatShop_CreditItem_C::TicketIcon_1' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, UpperLimitOver) == 0x0003C0, "Member 'UFlatShop_CreditItem_C::UpperLimitOver' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, InCrditType) == 0x0003C8, "Member 'UFlatShop_CreditItem_C::InCrditType' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, CreditCounter) == 0x0003CC, "Member 'UFlatShop_CreditItem_C::CreditCounter' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, IsCountMove) == 0x0003D0, "Member 'UFlatShop_CreditItem_C::IsCountMove' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, IsDialog) == 0x0003D1, "Member 'UFlatShop_CreditItem_C::IsDialog' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, CreditCost) == 0x0003D4, "Member 'UFlatShop_CreditItem_C::CreditCost' has a wrong offset!");
static_assert(offsetof(UFlatShop_CreditItem_C, CautionToolTop) == 0x0003D8, "Member 'UFlatShop_CreditItem_C::CautionToolTop' has a wrong offset!");

}

