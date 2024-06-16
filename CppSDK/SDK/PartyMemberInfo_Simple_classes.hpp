#pragma once

 

// Package: PartyMemberInfo_Simple

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyMemberInfo_Simple.PartyMemberInfo_Simple_C
// 0x0040 (0x02E8 - 0x02A8)
class UPartyMemberInfo_Simple_C final : public USBPartyMemberWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_0;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuffList_C*                            BufList;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon1;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIconShadow;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyMemberInfo_HPGauge_C*             HPGauge;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyMemberInfo_PlayerName_C*          PlayerName;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               StatusAilment;                                     // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PartyMemberInfo_Simple(int32 EntryPoint);
	void UpdateDisplayInfo();
	void Construct();
	void SetHpMpGauge(class USBPartyMemberState* InPartyMemberState);
	void SetHPMPGaugeVisibility(bool Param_IsVisible);
	void UpdateDisplayInfo_Internal();
	void SetCurrentMapMode();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyMemberInfo_Simple_C">();
	}
	static class UPartyMemberInfo_Simple_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMemberInfo_Simple_C>();
	}
};
static_assert(alignof(UPartyMemberInfo_Simple_C) == 0x000008, "Wrong alignment on UPartyMemberInfo_Simple_C");
static_assert(sizeof(UPartyMemberInfo_Simple_C) == 0x0002E8, "Wrong size on UPartyMemberInfo_Simple_C");
static_assert(offsetof(UPartyMemberInfo_Simple_C, UberGraphFrame) == 0x0002A8, "Member 'UPartyMemberInfo_Simple_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_Simple_C, Border_0) == 0x0002B0, "Member 'UPartyMemberInfo_Simple_C::Border_0' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_Simple_C, BufList) == 0x0002B8, "Member 'UPartyMemberInfo_Simple_C::BufList' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_Simple_C, ClassIcon1) == 0x0002C0, "Member 'UPartyMemberInfo_Simple_C::ClassIcon1' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_Simple_C, ClassIconShadow) == 0x0002C8, "Member 'UPartyMemberInfo_Simple_C::ClassIconShadow' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_Simple_C, HPGauge) == 0x0002D0, "Member 'UPartyMemberInfo_Simple_C::HPGauge' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_Simple_C, PlayerName) == 0x0002D8, "Member 'UPartyMemberInfo_Simple_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_Simple_C, StatusAilment) == 0x0002E0, "Member 'UPartyMemberInfo_Simple_C::StatusAilment' has a wrong offset!");

}

