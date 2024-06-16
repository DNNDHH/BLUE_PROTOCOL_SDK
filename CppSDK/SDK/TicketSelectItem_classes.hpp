#pragma once

 

// Package: TicketSelectItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TicketSelectItem.TicketSelectItem_C
// 0x0048 (0x02C0 - 0x0278)
class UTicketSelectItem_C final : public UUserWidget
{
public:
	class UHorizontalBox*                         HB_TicketUse;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Nouse;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TicketName;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TicketNum;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Texts;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         TokenID;                                           // 0x02A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBStackBTicketData                    StackBTicketData;                                  // 0x02A4(0x001C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

public:
	void SetTextId(int32 TicketId);
	void UpdateTokenNum();

	void IsValidTokenID(bool* Valid) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TicketSelectItem_C">();
	}
	static class UTicketSelectItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTicketSelectItem_C>();
	}
};
static_assert(alignof(UTicketSelectItem_C) == 0x000008, "Wrong alignment on UTicketSelectItem_C");
static_assert(sizeof(UTicketSelectItem_C) == 0x0002C0, "Wrong size on UTicketSelectItem_C");
static_assert(offsetof(UTicketSelectItem_C, HB_TicketUse) == 0x000278, "Member 'UTicketSelectItem_C::HB_TicketUse' has a wrong offset!");
static_assert(offsetof(UTicketSelectItem_C, Txt_Nouse) == 0x000280, "Member 'UTicketSelectItem_C::Txt_Nouse' has a wrong offset!");
static_assert(offsetof(UTicketSelectItem_C, Txt_TicketName) == 0x000288, "Member 'UTicketSelectItem_C::Txt_TicketName' has a wrong offset!");
static_assert(offsetof(UTicketSelectItem_C, Txt_TicketNum) == 0x000290, "Member 'UTicketSelectItem_C::Txt_TicketNum' has a wrong offset!");
static_assert(offsetof(UTicketSelectItem_C, WS_Texts) == 0x000298, "Member 'UTicketSelectItem_C::WS_Texts' has a wrong offset!");
static_assert(offsetof(UTicketSelectItem_C, TokenID) == 0x0002A0, "Member 'UTicketSelectItem_C::TokenID' has a wrong offset!");
static_assert(offsetof(UTicketSelectItem_C, StackBTicketData) == 0x0002A4, "Member 'UTicketSelectItem_C::StackBTicketData' has a wrong offset!");

}

