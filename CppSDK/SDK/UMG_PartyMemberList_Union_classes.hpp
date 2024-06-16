#pragma once

 

// Package: UMG_PartyMemberList_Union

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "E_PartyListPartyType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C
// 0x0040 (0x02B8 - 0x0278)
class UUMG_PartyMemberList_Union_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_PartyMemberList_UnionList_C*       InstantMemberList1;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PartyMemberList_UnionList_C*       InstantMemberList2;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PartyMemberList_UnionList_C*       InstantMemberList3;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PartyMemberList_UnionList_C*       PersistentMemberList;                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUMG_PartyMemberList_UnionList_C*> InstantMemberLists;                                // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         LineCapacity;                                      // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_PartyMemberList_Union(int32 EntryPoint);
	void Construct();
	void Update_Member_List();
	void CreateMemberListWidget(class UUMG_PartyMemberList_UnionList_C* OutMemberListWidget, TArray<class USBPartyMemberState*>& InMemberList, int32 InStart, int32 InLimitCount, int32* NextMemberIndex, class UUMG_PartyMemberList_UnionList_C** OutListWidget);
	void ResetMemberListVisibility();

	void GetPartyType(E_PartyListPartyType* PartyType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PartyMemberList_Union_C">();
	}
	static class UUMG_PartyMemberList_Union_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PartyMemberList_Union_C>();
	}
};
static_assert(alignof(UUMG_PartyMemberList_Union_C) == 0x000008, "Wrong alignment on UUMG_PartyMemberList_Union_C");
static_assert(sizeof(UUMG_PartyMemberList_Union_C) == 0x0002B8, "Wrong size on UUMG_PartyMemberList_Union_C");
static_assert(offsetof(UUMG_PartyMemberList_Union_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PartyMemberList_Union_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_Union_C, InstantMemberList1) == 0x000280, "Member 'UUMG_PartyMemberList_Union_C::InstantMemberList1' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_Union_C, InstantMemberList2) == 0x000288, "Member 'UUMG_PartyMemberList_Union_C::InstantMemberList2' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_Union_C, InstantMemberList3) == 0x000290, "Member 'UUMG_PartyMemberList_Union_C::InstantMemberList3' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_Union_C, PersistentMemberList) == 0x000298, "Member 'UUMG_PartyMemberList_Union_C::PersistentMemberList' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_Union_C, InstantMemberLists) == 0x0002A0, "Member 'UUMG_PartyMemberList_Union_C::InstantMemberLists' has a wrong offset!");
static_assert(offsetof(UUMG_PartyMemberList_Union_C, LineCapacity) == 0x0002B0, "Member 'UUMG_PartyMemberList_Union_C::LineCapacity' has a wrong offset!");

}

