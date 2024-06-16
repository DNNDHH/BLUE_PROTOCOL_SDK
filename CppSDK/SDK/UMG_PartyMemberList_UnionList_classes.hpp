#pragma once

 

// Package: UMG_PartyMemberList_UnionList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_PartyListPartyType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C
// 0x0028 (0x02A0 - 0x0278)
class UUMG_PartyMemberList_UnionList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Line1;                                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           MemberList;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPartyMemberList_ContentsLabel_C*       PartyTypeLabel;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bPartyTypeLabelEnable;                             // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	E_PartyListPartyType                          PartyType;                                         // 0x0299(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_PartyMemberList_UnionList(int32 EntryPoint);
	void Construct();
	void CreateMember(class USBPartyMemberState* PartyMemberState, bool bShowBattleStatus);
	void AddMember(class UUserWidget* InMemberWidget);
	void ClearMember();
	void SetPartyTypeLabel(E_PartyListPartyType InPartyType);
	void SetPartyTypeLabelEnable(bool bInEnable);

	void GetPartyType(E_PartyListPartyType* Param_PartyType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PartyMemberList_UnionList_C">();
	}
	static class UUMG_PartyMemberList_UnionList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PartyMemberList_UnionList_C>();
	}
};
static_assert(alignof(UUMG_PartyMemberList_UnionList_C) == 0x000008, "Wrong alignment on UUMG_PartyMemberList_UnionList_C");
static_assert(sizeof(UUMG_PartyMemberList_UnionList_C) == 0x0002A0, "Wrong size on UUMG_PartyMemberList_UnionList_C");
static_assert(offsetof(UUMG_PartyMemberList_UnionList_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PartyMemberList_UnionList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_UnionList_C, Line1) == 0x000280, "Member 'UUMG_PartyMemberList_UnionList_C::Line1' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_UnionList_C, MemberList) == 0x000288, "Member 'UUMG_PartyMemberList_UnionList_C::MemberList' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_UnionList_C, PartyTypeLabel) == 0x000290, "Member 'UUMG_PartyMemberList_UnionList_C::PartyTypeLabel' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_UnionList_C, bPartyTypeLabelEnable) == 0x000298, "Member 'UUMG_PartyMemberList_UnionList_C::bPartyTypeLabelEnable' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_UnionList_C, PartyType) == 0x000299, "Member 'UUMG_PartyMemberList_UnionList_C::PartyType' has a wrong offset!");

}

