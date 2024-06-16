#pragma once

 

// Package: GuildEntryEmptyItem

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildEntryEmptyItem.GuildEntryEmptyItem_C
// 0x0008 (0x0280 - 0x0278)
class UGuildEntryEmptyItem_C final : public UUserWidget
{
public:
	class UTextBlock*                             TextBlock_48;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetMessageFromId(int32 TextId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildEntryEmptyItem_C">();
	}
	static class UGuildEntryEmptyItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildEntryEmptyItem_C>();
	}
};
static_assert(alignof(UGuildEntryEmptyItem_C) == 0x000008, "Wrong alignment on UGuildEntryEmptyItem_C");
static_assert(sizeof(UGuildEntryEmptyItem_C) == 0x000280, "Wrong size on UGuildEntryEmptyItem_C");
static_assert(offsetof(UGuildEntryEmptyItem_C, TextBlock_48) == 0x000278, "Member 'UGuildEntryEmptyItem_C::TextBlock_48' has a wrong offset!");

}

