#pragma once

 

// Package: ArenaList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ArenaList.ArenaList_C
// 0x0088 (0x0300 - 0x0278)
class UArenaList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            BtnCancel;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnDecide;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_38;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_149;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_217;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_440;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBListBox*                             List;                                              // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TextNoSelect;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_ContentInfo_C*        UMG_MatchingMenu_ContentInfo;                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_ListItem_C*           UMG_MatchingMenu_ListItem;                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingMenu_PlayerInfo_C*         UMG_MatchingMenu_PlayerInfo;                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinish;                                          // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SelectedArenaNo;                                   // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CB4[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMapInfo>                     ArenaInfoList;                                     // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnFinish__DelegateSignature(const class FString& Result);
	void ExecuteUbergraph_ArenaList(int32 EntryPoint);
	void OnSelectItem(const struct FSBMapInfo& ArenaInfo, class UUMG_MatchingMenu_ListItem_C* Item);
	void Destruct();
	void BndEvt__BtnCancel_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void Construct();
	void MakeArenaInfoList();
	void SetupListItem();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ArenaList_C">();
	}
	static class UArenaList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArenaList_C>();
	}
};
static_assert(alignof(UArenaList_C) == 0x000008, "Wrong alignment on UArenaList_C");
static_assert(sizeof(UArenaList_C) == 0x000300, "Wrong size on UArenaList_C");
static_assert(offsetof(UArenaList_C, UberGraphFrame) == 0x000278, "Member 'UArenaList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UArenaList_C, BtnCancel) == 0x000280, "Member 'UArenaList_C::BtnCancel' has a wrong offset!");
static_assert(offsetof(UArenaList_C, BtnDecide) == 0x000288, "Member 'UArenaList_C::BtnDecide' has a wrong offset!");
static_assert(offsetof(UArenaList_C, Image_38) == 0x000290, "Member 'UArenaList_C::Image_38' has a wrong offset!");
static_assert(offsetof(UArenaList_C, Image_149) == 0x000298, "Member 'UArenaList_C::Image_149' has a wrong offset!");
static_assert(offsetof(UArenaList_C, Image_217) == 0x0002A0, "Member 'UArenaList_C::Image_217' has a wrong offset!");
static_assert(offsetof(UArenaList_C, Image_440) == 0x0002A8, "Member 'UArenaList_C::Image_440' has a wrong offset!");
static_assert(offsetof(UArenaList_C, List) == 0x0002B0, "Member 'UArenaList_C::List' has a wrong offset!");
static_assert(offsetof(UArenaList_C, TextNoSelect) == 0x0002B8, "Member 'UArenaList_C::TextNoSelect' has a wrong offset!");
static_assert(offsetof(UArenaList_C, UMG_MatchingMenu_ContentInfo) == 0x0002C0, "Member 'UArenaList_C::UMG_MatchingMenu_ContentInfo' has a wrong offset!");
static_assert(offsetof(UArenaList_C, UMG_MatchingMenu_ListItem) == 0x0002C8, "Member 'UArenaList_C::UMG_MatchingMenu_ListItem' has a wrong offset!");
static_assert(offsetof(UArenaList_C, UMG_MatchingMenu_PlayerInfo) == 0x0002D0, "Member 'UArenaList_C::UMG_MatchingMenu_PlayerInfo' has a wrong offset!");
static_assert(offsetof(UArenaList_C, OnFinish) == 0x0002D8, "Member 'UArenaList_C::OnFinish' has a wrong offset!");
static_assert(offsetof(UArenaList_C, SelectedArenaNo) == 0x0002E8, "Member 'UArenaList_C::SelectedArenaNo' has a wrong offset!");
static_assert(offsetof(UArenaList_C, ArenaInfoList) == 0x0002F0, "Member 'UArenaList_C::ArenaInfoList' has a wrong offset!");

}

