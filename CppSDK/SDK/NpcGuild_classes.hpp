#pragma once

 

// Package: NpcGuild

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NpcGuild.NpcGuild_C
// 0x0080 (0x02F8 - 0x0278)
class UNpcGuild_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildData_C*                           GuildData;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildEntriesMenu_C*                    GuildEntriesMenu;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildFindEntry_C*                      GuildFindEntry;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildMember_C*                         GuildMember;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildNpcSelectMode_C*                  GuildNpcSelectMode;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MenuSwitch;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNpcGuildDetail_C*                      NpcGuildDetail;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopCmnBg1_C*                          ShopCmnBg1;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_InAnime_C*                    ShopMenu_InAnime;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   Now_Tutorial_Help_Id;                              // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_NpcGuild(int32 EntryPoint);
	void OnCompleteGetGuildData_Event(const int32 RetCode);
	void Event_SetNowTurorialHelpId(class FName TutorialHelpId);
	void Event_OnCompleteNotifyKickedFromGuild(const class FString& KickedGuildName);
	void Construct();
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnDissolution(const int32 RetCode);
	void OnCloseRequest();
	void OnGuildWithDraw(const int32 RetCode);
	void OnOrganized(const int32 RetCode);
	void Initialize();
	void OnCompletedChangeName(const int32 RetCode);
	void OnClosePressed();
	void Listen_Action_Close();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature();
	void Destruct();
	void bindInitialize();
	void OnCompleteFindGuildShortID(const int32 RetCode);
	void BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry);
	void BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature();
	void BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature();
	void BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature();
	class USBPlayerGuildComponent* GetGuildComp();
	void InGuildMemberInialize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NpcGuild_C">();
	}
	static class UNpcGuild_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNpcGuild_C>();
	}
};
static_assert(alignof(UNpcGuild_C) == 0x000008, "Wrong alignment on UNpcGuild_C");
static_assert(sizeof(UNpcGuild_C) == 0x0002F8, "Wrong size on UNpcGuild_C");
static_assert(offsetof(UNpcGuild_C, UberGraphFrame) == 0x000278, "Member 'UNpcGuild_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, Btn_ShowHint) == 0x000280, "Member 'UNpcGuild_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, CmnBack01) == 0x000288, "Member 'UNpcGuild_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, GuildData) == 0x000290, "Member 'UNpcGuild_C::GuildData' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, GuildEntriesMenu) == 0x000298, "Member 'UNpcGuild_C::GuildEntriesMenu' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, GuildFindEntry) == 0x0002A0, "Member 'UNpcGuild_C::GuildFindEntry' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, GuildMember) == 0x0002A8, "Member 'UNpcGuild_C::GuildMember' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, GuildNpcSelectMode) == 0x0002B0, "Member 'UNpcGuild_C::GuildNpcSelectMode' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, Image_7) == 0x0002B8, "Member 'UNpcGuild_C::Image_7' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, MenuSwitch) == 0x0002C0, "Member 'UNpcGuild_C::MenuSwitch' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, NpcGuildDetail) == 0x0002C8, "Member 'UNpcGuild_C::NpcGuildDetail' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, ShopCmnBg1) == 0x0002D0, "Member 'UNpcGuild_C::ShopCmnBg1' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, ShopMenu_InAnime) == 0x0002D8, "Member 'UNpcGuild_C::ShopMenu_InAnime' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, OnClose) == 0x0002E0, "Member 'UNpcGuild_C::OnClose' has a wrong offset!");
static_assert(offsetof(UNpcGuild_C, Now_Tutorial_Help_Id) == 0x0002F0, "Member 'UNpcGuild_C::Now_Tutorial_Help_Id' has a wrong offset!");

}

