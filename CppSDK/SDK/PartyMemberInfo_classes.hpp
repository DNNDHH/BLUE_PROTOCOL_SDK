#pragma once

 

// Package: PartyMemberInfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyMemberInfo.PartyMemberInfo_C
// 0x0030 (0x0368 - 0x0338)
class UPartyMemberInfo_C final : public USBPartyMemberNormalWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0338(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Member;                                     // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBuffPartyMemberList_C*                 BufList_2;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconLeader;                                        // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwichParty;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchFollow;                                      // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PartyMemberInfo(int32 EntryPoint);
	void OnChangeSameMap(bool InSameMap);
	void CustomEvent_2(const TArray<struct FPlayerProfileSummaryData>& PlayerProfileSummaryData);
	void Destruct();
	void Construct();
	void SetHPMPGaugeVisibility(bool Param_IsVisible);
	void Update_Follow_Icon(const TArray<struct FPlayerProfileSummaryData>& InFriendList);
	void UpdatePartyIcon();
	void GetBattleStatusComponent(class USBBattleStatusComponent** OutBattleStatus);
	void OnSetBufIcon();
	void ResetBuffIcon();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyMemberInfo_C">();
	}
	static class UPartyMemberInfo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMemberInfo_C>();
	}
};
static_assert(alignof(UPartyMemberInfo_C) == 0x000008, "Wrong alignment on UPartyMemberInfo_C");
static_assert(sizeof(UPartyMemberInfo_C) == 0x000368, "Wrong size on UPartyMemberInfo_C");
static_assert(offsetof(UPartyMemberInfo_C, UberGraphFrame) == 0x000338, "Member 'UPartyMemberInfo_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_C, Border_Member) == 0x000340, "Member 'UPartyMemberInfo_C::Border_Member' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_C, BufList_2) == 0x000348, "Member 'UPartyMemberInfo_C::BufList_2' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_C, IconLeader) == 0x000350, "Member 'UPartyMemberInfo_C::IconLeader' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_C, SwichParty) == 0x000358, "Member 'UPartyMemberInfo_C::SwichParty' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_C, SwitchFollow) == 0x000360, "Member 'UPartyMemberInfo_C::SwitchFollow' has a wrong offset!");

}

