#pragma once

 

// Package: BuffPartyMemberList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BuffPartyMemberList.BuffPartyMemberList_C
// 0x0010 (0x02A8 - 0x0298)
class UBuffPartyMemberList_C final : public USBBuffListWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWrapBox*                               List;                                              // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BuffPartyMemberList(int32 EntryPoint);
	void UnbindBattleStatusComponent();
	void BindBattleStatusComponent();
	void UpdateList();
	class USBBuffIcon* OnCreateIcon();

	class UPanelWidget* GetList() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BuffPartyMemberList_C">();
	}
	static class UBuffPartyMemberList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBuffPartyMemberList_C>();
	}
};
static_assert(alignof(UBuffPartyMemberList_C) == 0x000008, "Wrong alignment on UBuffPartyMemberList_C");
static_assert(sizeof(UBuffPartyMemberList_C) == 0x0002A8, "Wrong size on UBuffPartyMemberList_C");
static_assert(offsetof(UBuffPartyMemberList_C, UberGraphFrame) == 0x000298, "Member 'UBuffPartyMemberList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBuffPartyMemberList_C, List) == 0x0002A0, "Member 'UBuffPartyMemberList_C::List' has a wrong offset!");

}

