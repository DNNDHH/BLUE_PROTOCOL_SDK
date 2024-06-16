#pragma once

 

// Package: NpcGuildDetail

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NpcGuildDetail.NpcGuildDetail_C
// 0x00F0 (0x0368 - 0x0278)
class UNpcGuildDetail_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn16_C*                            Btn_TeamDissolution;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_TeamRename;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGuildDetails_C*                        GuildDetails;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_RenameTicket;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuildData                             GuildData;                                         // 0x02A0(0x00B8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UGuildRenameDialog_C*                   ChangeDialog;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGuildDissolutionCheckDialog_C*         DissolutionDialog;                                 // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NpcGuildDetail(int32 EntryPoint);
	void BndEvt__CmnBtn16_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void BndEvt__Btn_TeamRename_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void OnChangeName(const int32 RetCode);
	void Destruct();
	void OnRequestDissolution();
	void OnChanged();
	void Construct();
	void SetGuildData(const struct FGuildData& Param_GuildData);
	class USBPlayerGuildComponent* GetGiuldComp();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NpcGuildDetail_C">();
	}
	static class UNpcGuildDetail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNpcGuildDetail_C>();
	}
};
static_assert(alignof(UNpcGuildDetail_C) == 0x000008, "Wrong alignment on UNpcGuildDetail_C");
static_assert(sizeof(UNpcGuildDetail_C) == 0x000368, "Wrong size on UNpcGuildDetail_C");
static_assert(offsetof(UNpcGuildDetail_C, UberGraphFrame) == 0x000278, "Member 'UNpcGuildDetail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNpcGuildDetail_C, Btn_TeamDissolution) == 0x000280, "Member 'UNpcGuildDetail_C::Btn_TeamDissolution' has a wrong offset!");
static_assert(offsetof(UNpcGuildDetail_C, Btn_TeamRename) == 0x000288, "Member 'UNpcGuildDetail_C::Btn_TeamRename' has a wrong offset!");
static_assert(offsetof(UNpcGuildDetail_C, GuildDetails) == 0x000290, "Member 'UNpcGuildDetail_C::GuildDetails' has a wrong offset!");
static_assert(offsetof(UNpcGuildDetail_C, Txt_RenameTicket) == 0x000298, "Member 'UNpcGuildDetail_C::Txt_RenameTicket' has a wrong offset!");
static_assert(offsetof(UNpcGuildDetail_C, GuildData) == 0x0002A0, "Member 'UNpcGuildDetail_C::GuildData' has a wrong offset!");
static_assert(offsetof(UNpcGuildDetail_C, ChangeDialog) == 0x000358, "Member 'UNpcGuildDetail_C::ChangeDialog' has a wrong offset!");
static_assert(offsetof(UNpcGuildDetail_C, DissolutionDialog) == 0x000360, "Member 'UNpcGuildDetail_C::DissolutionDialog' has a wrong offset!");

}

