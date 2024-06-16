#pragma once

 

// Package: GuildRankMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildRankMenu.GuildRankMenu_C
// 0x0040 (0x02B8 - 0x0278)
class UGuildRankMenu_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnGauge1_C*                           CmnGauge1;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_478;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ExpNext;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ExpNow;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Rank;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Rank;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Rank;                                              // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildRankMenu(int32 EntryPoint);
	void Construct();
	class USBPlayerGuildComponent* GetGuildComp();
	void Initialize();
	void GenerateRankItems();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildRankMenu_C">();
	}
	static class UGuildRankMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildRankMenu_C>();
	}
};
static_assert(alignof(UGuildRankMenu_C) == 0x000008, "Wrong alignment on UGuildRankMenu_C");
static_assert(sizeof(UGuildRankMenu_C) == 0x0002B8, "Wrong size on UGuildRankMenu_C");
static_assert(offsetof(UGuildRankMenu_C, UberGraphFrame) == 0x000278, "Member 'UGuildRankMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildRankMenu_C, CmnGauge1) == 0x000280, "Member 'UGuildRankMenu_C::CmnGauge1' has a wrong offset!");
static_assert(offsetof(UGuildRankMenu_C, Image_478) == 0x000288, "Member 'UGuildRankMenu_C::Image_478' has a wrong offset!");
static_assert(offsetof(UGuildRankMenu_C, Txt_ExpNext) == 0x000290, "Member 'UGuildRankMenu_C::Txt_ExpNext' has a wrong offset!");
static_assert(offsetof(UGuildRankMenu_C, Txt_ExpNow) == 0x000298, "Member 'UGuildRankMenu_C::Txt_ExpNow' has a wrong offset!");
static_assert(offsetof(UGuildRankMenu_C, Txt_Rank) == 0x0002A0, "Member 'UGuildRankMenu_C::Txt_Rank' has a wrong offset!");
static_assert(offsetof(UGuildRankMenu_C, VB_Rank) == 0x0002A8, "Member 'UGuildRankMenu_C::VB_Rank' has a wrong offset!");
static_assert(offsetof(UGuildRankMenu_C, Rank) == 0x0002B0, "Member 'UGuildRankMenu_C::Rank' has a wrong offset!");

}

