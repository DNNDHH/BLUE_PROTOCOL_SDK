#pragma once

 

// Package: Fang_expedition_PlayListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_PlayListItem.Fang_expedition_PlayListItem_C
// 0x00A0 (0x0318 - 0x0278)
class UFang_expedition_PlayListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Base02;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Blank;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ClockIcon;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ExpeditionName;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_PlayListBtn_Finish_C*  Finish;                                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    FinishText;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        PanelSwitcher;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFang_expedition_PlayListBtn_Play_C*    Play;                                              // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ReleaseCondition;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        StatusSwitcher;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         TimerBox;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   TimerText;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TimeText2;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         SlotIndex;                                         // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5F07[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClick_Playing;                                   // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick_Finish;                                    // 0x0300(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class USBTextTableAsset*                      TextTable;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClick_Playing__DelegateSignature(int32 Param_Index);
	void OnClick_Finish__DelegateSignature(int32 Param_Index);
	void ExecuteUbergraph_Fang_expedition_PlayListItem(int32 EntryPoint);
	void Destruct();
	void CB_FinishButtonClick();
	void CB_PlayButtonClick();
	void Construct();
	void SetData(int32 Param_Index, struct FSBFang_expeditionPlayData& PlayData);
	void SetEmpty();
	void SetBlank(bool TextVisibility, int32 TimeNum);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_PlayListItem_C">();
	}
	static class UFang_expedition_PlayListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_PlayListItem_C>();
	}
};
static_assert(alignof(UFang_expedition_PlayListItem_C) == 0x000008, "Wrong alignment on UFang_expedition_PlayListItem_C");
static_assert(sizeof(UFang_expedition_PlayListItem_C) == 0x000318, "Wrong size on UFang_expedition_PlayListItem_C");
static_assert(offsetof(UFang_expedition_PlayListItem_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_PlayListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, Base02) == 0x000280, "Member 'UFang_expedition_PlayListItem_C::Base02' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, Blank) == 0x000288, "Member 'UFang_expedition_PlayListItem_C::Blank' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, ClockIcon) == 0x000290, "Member 'UFang_expedition_PlayListItem_C::ClockIcon' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, ExpeditionName) == 0x000298, "Member 'UFang_expedition_PlayListItem_C::ExpeditionName' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, Finish) == 0x0002A0, "Member 'UFang_expedition_PlayListItem_C::Finish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, FinishText) == 0x0002A8, "Member 'UFang_expedition_PlayListItem_C::FinishText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, PanelSwitcher) == 0x0002B0, "Member 'UFang_expedition_PlayListItem_C::PanelSwitcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, Play) == 0x0002B8, "Member 'UFang_expedition_PlayListItem_C::Play' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, ReleaseCondition) == 0x0002C0, "Member 'UFang_expedition_PlayListItem_C::ReleaseCondition' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, StatusSwitcher) == 0x0002C8, "Member 'UFang_expedition_PlayListItem_C::StatusSwitcher' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, TimerBox) == 0x0002D0, "Member 'UFang_expedition_PlayListItem_C::TimerBox' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, TimerText) == 0x0002D8, "Member 'UFang_expedition_PlayListItem_C::TimerText' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, TimeText2) == 0x0002E0, "Member 'UFang_expedition_PlayListItem_C::TimeText2' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, SlotIndex) == 0x0002E8, "Member 'UFang_expedition_PlayListItem_C::SlotIndex' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, OnClick_Playing) == 0x0002F0, "Member 'UFang_expedition_PlayListItem_C::OnClick_Playing' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, OnClick_Finish) == 0x000300, "Member 'UFang_expedition_PlayListItem_C::OnClick_Finish' has a wrong offset!");
static_assert(offsetof(UFang_expedition_PlayListItem_C, TextTable) == 0x000310, "Member 'UFang_expedition_PlayListItem_C::TextTable' has a wrong offset!");

}

