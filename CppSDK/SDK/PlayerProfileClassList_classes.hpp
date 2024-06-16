#pragma once

 

// Package: PlayerProfileClassList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerProfileClassList.PlayerProfileClassList_C
// 0x0058 (0x02D0 - 0x0278)
class UPlayerProfileClassList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            BtnClose;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnOpen;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CloseGrp;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridClass;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileClassListItem_C*          PlayerProfileClassListItem;                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileClassListItem_C*          PlayerProfileClassListItem_56;                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileClassListItem_C*          PlayerProfileClassListItem_91;                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerProfileClassListItem_C*          PlayerProfileClassListItem_125;                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bOpen;                                             // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_900F[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PosType;                                           // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerProfileClassList(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__BtnClose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BtnOpen_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void AddClass(ESBClassType Type, int32 Level);
	void Init();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerProfileClassList_C">();
	}
	static class UPlayerProfileClassList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerProfileClassList_C>();
	}
};
static_assert(alignof(UPlayerProfileClassList_C) == 0x000008, "Wrong alignment on UPlayerProfileClassList_C");
static_assert(sizeof(UPlayerProfileClassList_C) == 0x0002D0, "Wrong size on UPlayerProfileClassList_C");
static_assert(offsetof(UPlayerProfileClassList_C, UberGraphFrame) == 0x000278, "Member 'UPlayerProfileClassList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, AnimInOut) == 0x000280, "Member 'UPlayerProfileClassList_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, BtnClose) == 0x000288, "Member 'UPlayerProfileClassList_C::BtnClose' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, BtnOpen) == 0x000290, "Member 'UPlayerProfileClassList_C::BtnOpen' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, CloseGrp) == 0x000298, "Member 'UPlayerProfileClassList_C::CloseGrp' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, GridClass) == 0x0002A0, "Member 'UPlayerProfileClassList_C::GridClass' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, PlayerProfileClassListItem) == 0x0002A8, "Member 'UPlayerProfileClassList_C::PlayerProfileClassListItem' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, PlayerProfileClassListItem_56) == 0x0002B0, "Member 'UPlayerProfileClassList_C::PlayerProfileClassListItem_56' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, PlayerProfileClassListItem_91) == 0x0002B8, "Member 'UPlayerProfileClassList_C::PlayerProfileClassListItem_91' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, PlayerProfileClassListItem_125) == 0x0002C0, "Member 'UPlayerProfileClassList_C::PlayerProfileClassListItem_125' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, bOpen) == 0x0002C8, "Member 'UPlayerProfileClassList_C::bOpen' has a wrong offset!");
static_assert(offsetof(UPlayerProfileClassList_C, PosType) == 0x0002CC, "Member 'UPlayerProfileClassList_C::PosType' has a wrong offset!");

}

