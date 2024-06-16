#pragma once

 

// Package: UMG_PhotoModeControlMenuSkillList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_PhotoModeControlMenuSkillList.UMG_PhotoModeControlMenuSkillList_C
// 0x0080 (0x02F8 - 0x0278)
class UUMG_PhotoModeControlMenuSkillList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCharaCreateClassSkillMenuItem_C*       CharaCreateClassSkillMenuItem;                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       CharaCreateClassSkillMenuItem_1;                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       CharaCreateClassSkillMenuItem_2;                   // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       CharaCreateClassSkillMenuItem_3;                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       CharaCreateClassSkillMenuItem_4;                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       CharaCreateClassSkillMenuItem_5;                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       CharaCreateClassSkillMenuItem_6;                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       CharaCreateClassSkillMenuItem_7;                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       CharaCreateClassSkillMenuItem_8;                   // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCharaCreateClassSkillMenuItem_C*       CharaCreateClassSkillMenuItem_9;                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ClassSkillList;                                    // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPressed;                                         // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnReleased;                                        // 0x02E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnPressed__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender);
	void OnReleased__DelegateSignature(class UCharaCreateClassSkillMenuItem_C* Sender);
	void ExecuteUbergraph_UMG_PhotoModeControlMenuSkillList(int32 EntryPoint);
	void OnItemButtonReleased(class UCharaCreateClassSkillMenuItem_C* Sender);
	void OnItemButtonPressed(class UCharaCreateClassSkillMenuItem_C* Sender);
	void Construct();
	void UpdateSkillList();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_PhotoModeControlMenuSkillList_C">();
	}
	static class UUMG_PhotoModeControlMenuSkillList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_PhotoModeControlMenuSkillList_C>();
	}
};
static_assert(alignof(UUMG_PhotoModeControlMenuSkillList_C) == 0x000008, "Wrong alignment on UUMG_PhotoModeControlMenuSkillList_C");
static_assert(sizeof(UUMG_PhotoModeControlMenuSkillList_C) == 0x0002F8, "Wrong size on UUMG_PhotoModeControlMenuSkillList_C");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, UberGraphFrame) == 0x000278, "Member 'UUMG_PhotoModeControlMenuSkillList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, CharaCreateClassSkillMenuItem) == 0x000280, "Member 'UUMG_PhotoModeControlMenuSkillList_C::CharaCreateClassSkillMenuItem' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, CharaCreateClassSkillMenuItem_1) == 0x000288, "Member 'UUMG_PhotoModeControlMenuSkillList_C::CharaCreateClassSkillMenuItem_1' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, CharaCreateClassSkillMenuItem_2) == 0x000290, "Member 'UUMG_PhotoModeControlMenuSkillList_C::CharaCreateClassSkillMenuItem_2' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, CharaCreateClassSkillMenuItem_3) == 0x000298, "Member 'UUMG_PhotoModeControlMenuSkillList_C::CharaCreateClassSkillMenuItem_3' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, CharaCreateClassSkillMenuItem_4) == 0x0002A0, "Member 'UUMG_PhotoModeControlMenuSkillList_C::CharaCreateClassSkillMenuItem_4' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, CharaCreateClassSkillMenuItem_5) == 0x0002A8, "Member 'UUMG_PhotoModeControlMenuSkillList_C::CharaCreateClassSkillMenuItem_5' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, CharaCreateClassSkillMenuItem_6) == 0x0002B0, "Member 'UUMG_PhotoModeControlMenuSkillList_C::CharaCreateClassSkillMenuItem_6' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, CharaCreateClassSkillMenuItem_7) == 0x0002B8, "Member 'UUMG_PhotoModeControlMenuSkillList_C::CharaCreateClassSkillMenuItem_7' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, CharaCreateClassSkillMenuItem_8) == 0x0002C0, "Member 'UUMG_PhotoModeControlMenuSkillList_C::CharaCreateClassSkillMenuItem_8' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, CharaCreateClassSkillMenuItem_9) == 0x0002C8, "Member 'UUMG_PhotoModeControlMenuSkillList_C::CharaCreateClassSkillMenuItem_9' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, ClassSkillList) == 0x0002D0, "Member 'UUMG_PhotoModeControlMenuSkillList_C::ClassSkillList' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, OnPressed) == 0x0002D8, "Member 'UUMG_PhotoModeControlMenuSkillList_C::OnPressed' has a wrong offset!");
static_assert(offsetof(UUMG_PhotoModeControlMenuSkillList_C, OnReleased) == 0x0002E8, "Member 'UUMG_PhotoModeControlMenuSkillList_C::OnReleased' has a wrong offset!");

}

