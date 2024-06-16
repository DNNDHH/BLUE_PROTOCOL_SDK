#pragma once

 

// Package: TicketSpecialDisp

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TicketSpecialDisp.TicketSpecialDisp_C
// 0x0010 (0x0288 - 0x0278)
class UTicketSpecialDisp_C final : public UUserWidget
{
public:
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Ratio;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetInfo(const struct FOwnItemInfo& Info);
	void SetChangeColor(bool bChangeColor);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TicketSpecialDisp_C">();
	}
	static class UTicketSpecialDisp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTicketSpecialDisp_C>();
	}
};
static_assert(alignof(UTicketSpecialDisp_C) == 0x000008, "Wrong alignment on UTicketSpecialDisp_C");
static_assert(sizeof(UTicketSpecialDisp_C) == 0x000288, "Wrong size on UTicketSpecialDisp_C");
static_assert(offsetof(UTicketSpecialDisp_C, Txt_Name) == 0x000278, "Member 'UTicketSpecialDisp_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UTicketSpecialDisp_C, Txt_Ratio) == 0x000280, "Member 'UTicketSpecialDisp_C::Txt_Ratio' has a wrong offset!");

}

