#pragma once

 

// Package: GuildRecruitmentEmptyItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C
// 0x0018 (0x0290 - 0x0278)
class UGuildRecruitmentEmptyItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             TextBlock_Guild_Tutorial;                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Main_Reason;                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildRecruitmentEmptyItem(int32 EntryPoint);
	void Construct();
	void SetMainMessageFromId(int32 TextId);
	void SetGuildTutorialMessage();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildRecruitmentEmptyItem_C">();
	}
	static class UGuildRecruitmentEmptyItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildRecruitmentEmptyItem_C>();
	}
};
static_assert(alignof(UGuildRecruitmentEmptyItem_C) == 0x000008, "Wrong alignment on UGuildRecruitmentEmptyItem_C");
static_assert(sizeof(UGuildRecruitmentEmptyItem_C) == 0x000290, "Wrong size on UGuildRecruitmentEmptyItem_C");
static_assert(offsetof(UGuildRecruitmentEmptyItem_C, UberGraphFrame) == 0x000278, "Member 'UGuildRecruitmentEmptyItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentEmptyItem_C, TextBlock_Guild_Tutorial) == 0x000280, "Member 'UGuildRecruitmentEmptyItem_C::TextBlock_Guild_Tutorial' has a wrong offset!");
static_assert(offsetof(UGuildRecruitmentEmptyItem_C, TextBlock_Main_Reason) == 0x000288, "Member 'UGuildRecruitmentEmptyItem_C::TextBlock_Main_Reason' has a wrong offset!");

}

