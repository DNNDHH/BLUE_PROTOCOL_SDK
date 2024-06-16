#pragma once

 

// Package: NpcGuildJoin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NpcGuildJoin.NpcGuildJoin_C
// 0x0070 (0x02E8 - 0x0278)
class UNpcGuildJoin_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildData_C*                           GuildData;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildFindEntry_C*                      GuildFindEntry;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildNpcSelectMode_C*                  GuildNpcSelectMode;                                // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        MenuSwitch;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOrganizeSettings_C*                    OrganizeSettings;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopCmnBg1_C*                          ShopCmnBg1;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_InAnime_C*                    ShopMenu_InAnime;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   Now_Tutorial_Help_Id;                              // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_NpcGuildJoin(int32 EntryPoint);
	void Event_SetNowTurorialHelpId(class FName TutorialHelpId);
	void OnCompleteGetGuildData_Event(const int32 RetCode);
	void BndEvt__NpcGuildJoin_GuildFindEntry_K2Node_ComponentBoundEvent_2_OnResearchGuild__DelegateSignature();
	void BndEvt__NpcGuildJoin_GuildData_K2Node_ComponentBoundEvent_1_OnRefreshRightMenu__DelegateSignature();
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnInviteArraimented(const int32 RetCode, bool IsAccept, const class FString& InEntryId);
	void OnCompleteCancelEntry(const int32 RetCode);
	void OnComplete_GuildDetail(const int32 RetCode, const struct FGuildData& InGuildData);
	void Request_Close();
	void OnOrganized(const int32 RetCode);
	void OnCompletedChangeName(const int32 RetCode);
	void OnClosePressed();
	void Listen_Action_Close();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature();
	void Destruct();
	void bindInitialize();
	void Construct();
	void Initialize();
	void OnCompleteFindGuildShortID(const int32 RetCode);
	void BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry);
	void BndEvt__GuildData_K2Node_ComponentBoundEvent_3_OnGuildOrganize__DelegateSignature();
	class USBPlayerGuildComponent* GetGuildComp();
	void InVisitorInitialize();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NpcGuildJoin_C">();
	}
	static class UNpcGuildJoin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNpcGuildJoin_C>();
	}
};
static_assert(alignof(UNpcGuildJoin_C) == 0x000008, "Wrong alignment on UNpcGuildJoin_C");
static_assert(sizeof(UNpcGuildJoin_C) == 0x0002E8, "Wrong size on UNpcGuildJoin_C");
static_assert(offsetof(UNpcGuildJoin_C, UberGraphFrame) == 0x000278, "Member 'UNpcGuildJoin_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, Btn_ShowHint) == 0x000280, "Member 'UNpcGuildJoin_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, CmnBack01) == 0x000288, "Member 'UNpcGuildJoin_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, GuildData) == 0x000290, "Member 'UNpcGuildJoin_C::GuildData' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, GuildFindEntry) == 0x000298, "Member 'UNpcGuildJoin_C::GuildFindEntry' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, GuildNpcSelectMode) == 0x0002A0, "Member 'UNpcGuildJoin_C::GuildNpcSelectMode' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, Image_7) == 0x0002A8, "Member 'UNpcGuildJoin_C::Image_7' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, MenuSwitch) == 0x0002B0, "Member 'UNpcGuildJoin_C::MenuSwitch' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, OrganizeSettings) == 0x0002B8, "Member 'UNpcGuildJoin_C::OrganizeSettings' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, ShopCmnBg1) == 0x0002C0, "Member 'UNpcGuildJoin_C::ShopCmnBg1' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, ShopMenu_InAnime) == 0x0002C8, "Member 'UNpcGuildJoin_C::ShopMenu_InAnime' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, OnClose) == 0x0002D0, "Member 'UNpcGuildJoin_C::OnClose' has a wrong offset!");
static_assert(offsetof(UNpcGuildJoin_C, Now_Tutorial_Help_Id) == 0x0002E0, "Member 'UNpcGuildJoin_C::Now_Tutorial_Help_Id' has a wrong offset!");

}

