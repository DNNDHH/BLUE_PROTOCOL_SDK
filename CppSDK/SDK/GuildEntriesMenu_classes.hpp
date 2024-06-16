#pragma once

 

// Package: GuildEntriesMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildEntriesMenu.GuildEntriesMenu_C
// 0x0078 (0x02F0 - 0x0278)
class UGuildEntriesMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            Btn_Accept;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Deny;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Report;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_ShowCharacter;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_91;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_607;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image2;                                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListView*                              LV_GuildEntries;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           NotEntryMember;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerReport_C*                        PlayerReport;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_CountInfo;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Remain;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildEntryListItem_C*                  OnSelectedItem;                                    // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           SwapBlocker;                                       // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildEntriesMenu(int32 EntryPoint);
	void OpenReportUI_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void BndEvt__GuildEntriesMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__GuildEntriesMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void BndEvt__GuildEntriesMenu_Btn_ShowCharacter_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__GuildEntriesMenu_Btn_Accept_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature();
	void OnConpletedGetProfile(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode);
	void EntryUpdate();
	void On_Update_Guild_Member_List(const int32 RetCode);
	void OnMember_Denied(const int32 RetCode);
	void Remove_Selected();
	void OnMemberAccepted(const int32 RetCode);
	void BindInitailize();
	void Initialize();
	void UpdateButtons();
	void BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
	void Construct();
	void GenerateEntries();
	class USBPlayerGuildComponent* Get_Guild_Comp();
	void PSonlyDiffCheck(bool* PSOnlyDiff);
	void CreateSwapBlocker();
	void DeleteSwapBlocker();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildEntriesMenu_C">();
	}
	static class UGuildEntriesMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildEntriesMenu_C>();
	}
};
static_assert(alignof(UGuildEntriesMenu_C) == 0x000008, "Wrong alignment on UGuildEntriesMenu_C");
static_assert(sizeof(UGuildEntriesMenu_C) == 0x0002F0, "Wrong size on UGuildEntriesMenu_C");
static_assert(offsetof(UGuildEntriesMenu_C, UberGraphFrame) == 0x000278, "Member 'UGuildEntriesMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, Btn_Accept) == 0x000280, "Member 'UGuildEntriesMenu_C::Btn_Accept' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, Btn_Deny) == 0x000288, "Member 'UGuildEntriesMenu_C::Btn_Deny' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, Btn_Report) == 0x000290, "Member 'UGuildEntriesMenu_C::Btn_Report' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, Btn_ShowCharacter) == 0x000298, "Member 'UGuildEntriesMenu_C::Btn_ShowCharacter' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, Image_91) == 0x0002A0, "Member 'UGuildEntriesMenu_C::Image_91' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, Image_607) == 0x0002A8, "Member 'UGuildEntriesMenu_C::Image_607' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, Image2) == 0x0002B0, "Member 'UGuildEntriesMenu_C::Image2' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, LV_GuildEntries) == 0x0002B8, "Member 'UGuildEntriesMenu_C::LV_GuildEntries' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, NotEntryMember) == 0x0002C0, "Member 'UGuildEntriesMenu_C::NotEntryMember' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, PlayerReport) == 0x0002C8, "Member 'UGuildEntriesMenu_C::PlayerReport' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, ScaleBox_CountInfo) == 0x0002D0, "Member 'UGuildEntriesMenu_C::ScaleBox_CountInfo' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, Txt_Remain) == 0x0002D8, "Member 'UGuildEntriesMenu_C::Txt_Remain' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, OnSelectedItem) == 0x0002E0, "Member 'UGuildEntriesMenu_C::OnSelectedItem' has a wrong offset!");
static_assert(offsetof(UGuildEntriesMenu_C, SwapBlocker) == 0x0002E8, "Member 'UGuildEntriesMenu_C::SwapBlocker' has a wrong offset!");

}

