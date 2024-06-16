#pragma once

 

// Package: GuildRankItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildRankItem.GuildRankItem_C
// 0x0090 (0x0308 - 0x0278)
class UGuildRankItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Cheked;                                            // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_RankCheck;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Cheked;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RankItemBgHovered;                                 // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RankItemBgNormal;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RankUpIcon;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RankUpIconSelected;                                // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Desc;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Name;                                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Rank;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Unchecked;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_RanksSwitch;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuildRankUnlockMaster                 UnlockData;                                        // 0x02E0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Rank;                                              // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildRankItem(int32 EntryPoint);
	void SetRankUnlockData(const struct FGuildRankUnlockMaster& Param_UnlockData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildRankItem_C">();
	}
	static class UGuildRankItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildRankItem_C>();
	}
};
static_assert(alignof(UGuildRankItem_C) == 0x000008, "Wrong alignment on UGuildRankItem_C");
static_assert(sizeof(UGuildRankItem_C) == 0x000308, "Wrong size on UGuildRankItem_C");
static_assert(offsetof(UGuildRankItem_C, UberGraphFrame) == 0x000278, "Member 'UGuildRankItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, Cheked) == 0x000280, "Member 'UGuildRankItem_C::Cheked' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, HB_RankCheck) == 0x000288, "Member 'UGuildRankItem_C::HB_RankCheck' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, Img_Cheked) == 0x000290, "Member 'UGuildRankItem_C::Img_Cheked' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, RankItemBgHovered) == 0x000298, "Member 'UGuildRankItem_C::RankItemBgHovered' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, RankItemBgNormal) == 0x0002A0, "Member 'UGuildRankItem_C::RankItemBgNormal' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, RankUpIcon) == 0x0002A8, "Member 'UGuildRankItem_C::RankUpIcon' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, RankUpIconSelected) == 0x0002B0, "Member 'UGuildRankItem_C::RankUpIconSelected' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, Txt_Desc) == 0x0002B8, "Member 'UGuildRankItem_C::Txt_Desc' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, Txt_Name) == 0x0002C0, "Member 'UGuildRankItem_C::Txt_Name' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, Txt_Rank) == 0x0002C8, "Member 'UGuildRankItem_C::Txt_Rank' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, Unchecked) == 0x0002D0, "Member 'UGuildRankItem_C::Unchecked' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, WS_RanksSwitch) == 0x0002D8, "Member 'UGuildRankItem_C::WS_RanksSwitch' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, UnlockData) == 0x0002E0, "Member 'UGuildRankItem_C::UnlockData' has a wrong offset!");
static_assert(offsetof(UGuildRankItem_C, Rank) == 0x000300, "Member 'UGuildRankItem_C::Rank' has a wrong offset!");

}

