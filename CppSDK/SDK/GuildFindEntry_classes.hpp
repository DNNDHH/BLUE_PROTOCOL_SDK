#pragma once

 

// Package: GuildFindEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildFindEntry.GuildFindEntry_C
// 0x0240 (0x04B8 - 0x0278)
class UGuildFindEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            Btn_Accept;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Applicate;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Cancel;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Research;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_WithDraw;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasEntryMessage;                                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasLimitMessage;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Entried;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Entry;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_HitGuild;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Invite;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_NoHit;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildDetails_C*                        GuildDetails;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_202;                            // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_Buttons;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuildData                             GuildData;                                         // 0x0310(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuildEntryData                        Entry;                                             // 0x03C8(0x00E0)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnResearchGuild;                                   // 0x04A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnResearchGuild__DelegateSignature();
	void ExecuteUbergraph_GuildFindEntry(int32 EntryPoint);
	void Construct();
	void BndEvt__GuildFindEntry_Btn_WithDraw_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature();
	void BndEvt__GuildFindEntry_Btn_Accept_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature();
	void BndEvt__GuildFindEntry_Btn_Cancel_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
	void BndEvt__GuildFindEntry_Btn_Research_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature();
	void BndEvt__GuildFindEntry_Btn_Applicate_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void OnCloseEntry(EDialogResult OnButton, const class FText& InputText);
	void NotFound();
	void Show_Guild();
	void OnCancelDialog(EDialogResult Result);
	void Initialize();
	void UpdateButtons();
	void OnCompletedGuildEntries(const int32 RetCode);
	void SetGuildData(const struct FGuildData& Param_GuildData);
	class USBPlayerGuildComponent* GetGuildComp();
	void Find_Guild_Entry(struct FGuildEntryData* Output_Get);
	void Set_Entry(const struct FGuildEntryData& Param_Entry);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildFindEntry_C">();
	}
	static class UGuildFindEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildFindEntry_C>();
	}
};
static_assert(alignof(UGuildFindEntry_C) == 0x000008, "Wrong alignment on UGuildFindEntry_C");
static_assert(sizeof(UGuildFindEntry_C) == 0x0004B8, "Wrong size on UGuildFindEntry_C");
static_assert(offsetof(UGuildFindEntry_C, UberGraphFrame) == 0x000278, "Member 'UGuildFindEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Btn_Accept) == 0x000280, "Member 'UGuildFindEntry_C::Btn_Accept' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Btn_Applicate) == 0x000288, "Member 'UGuildFindEntry_C::Btn_Applicate' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Btn_Cancel) == 0x000290, "Member 'UGuildFindEntry_C::Btn_Cancel' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Btn_Research) == 0x000298, "Member 'UGuildFindEntry_C::Btn_Research' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Btn_WithDraw) == 0x0002A0, "Member 'UGuildFindEntry_C::Btn_WithDraw' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, CanvasEntryMessage) == 0x0002A8, "Member 'UGuildFindEntry_C::CanvasEntryMessage' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, CanvasLimitMessage) == 0x0002B0, "Member 'UGuildFindEntry_C::CanvasLimitMessage' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Cvs_Entried) == 0x0002B8, "Member 'UGuildFindEntry_C::Cvs_Entried' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Cvs_Entry) == 0x0002C0, "Member 'UGuildFindEntry_C::Cvs_Entry' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Cvs_HitGuild) == 0x0002C8, "Member 'UGuildFindEntry_C::Cvs_HitGuild' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Cvs_Invite) == 0x0002D0, "Member 'UGuildFindEntry_C::Cvs_Invite' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Cvs_NoHit) == 0x0002D8, "Member 'UGuildFindEntry_C::Cvs_NoHit' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, GuildDetails) == 0x0002E0, "Member 'UGuildFindEntry_C::GuildDetails' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Image) == 0x0002E8, "Member 'UGuildFindEntry_C::Image' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Image_1) == 0x0002F0, "Member 'UGuildFindEntry_C::Image_1' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Image_4) == 0x0002F8, "Member 'UGuildFindEntry_C::Image_4' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, SBRuntimeTextBlock_202) == 0x000300, "Member 'UGuildFindEntry_C::SBRuntimeTextBlock_202' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, WS_Buttons) == 0x000308, "Member 'UGuildFindEntry_C::WS_Buttons' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, GuildData) == 0x000310, "Member 'UGuildFindEntry_C::GuildData' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, Entry) == 0x0003C8, "Member 'UGuildFindEntry_C::Entry' has a wrong offset!");
static_assert(offsetof(UGuildFindEntry_C, OnResearchGuild) == 0x0004A8, "Member 'UGuildFindEntry_C::OnResearchGuild' has a wrong offset!");

}

