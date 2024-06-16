#pragma once

 

// Package: PartyInfoWindow

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyInfoWindow.PartyInfoWindow_C
// 0x0018 (0x0290 - 0x0278)
class UPartyInfoWindow_C final : public UUserWidget
{
public:
	class UUMG_PartyMemberList_C*                 PartyMemberList;                                   // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchMode;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bEditMode;                                         // 0x0288(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void SetEditMode(bool EditMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyInfoWindow_C">();
	}
	static class UPartyInfoWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyInfoWindow_C>();
	}
};
static_assert(alignof(UPartyInfoWindow_C) == 0x000008, "Wrong alignment on UPartyInfoWindow_C");
static_assert(sizeof(UPartyInfoWindow_C) == 0x000290, "Wrong size on UPartyInfoWindow_C");
static_assert(offsetof(UPartyInfoWindow_C, PartyMemberList) == 0x000278, "Member 'UPartyInfoWindow_C::PartyMemberList' has a wrong offset!");
static_assert(offsetof(UPartyInfoWindow_C, SwitchMode) == 0x000280, "Member 'UPartyInfoWindow_C::SwitchMode' has a wrong offset!");
static_assert(offsetof(UPartyInfoWindow_C, bEditMode) == 0x000288, "Member 'UPartyInfoWindow_C::bEditMode' has a wrong offset!");

}

