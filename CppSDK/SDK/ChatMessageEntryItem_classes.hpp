#pragma once

 

// Package: ChatMessageEntryItem

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ChatMessageEntryItem.ChatMessageEntryItem_C
// 0x0088 (0x00B0 - 0x0028)
class UChatMessageEntryItem_C final : public UObject
{
public:
	struct FSBChatUIMessage                       MessageLog;                                        // 0x0028(0x0070)(Edit, BlueprintVisible, ExposeOnSpawn)
	float                                         StampSize;                                         // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6FE2[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            ParentWidget;                                      // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsEndInit;                                         // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsCursorHitStamp;                                  // 0x00A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsUnreadWidget;                                    // 0x00AA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsCopy;                                            // 0x00AB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatMessageEntryItem_C">();
	}
	static class UChatMessageEntryItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatMessageEntryItem_C>();
	}
};
static_assert(alignof(UChatMessageEntryItem_C) == 0x000008, "Wrong alignment on UChatMessageEntryItem_C");
static_assert(sizeof(UChatMessageEntryItem_C) == 0x0000B0, "Wrong size on UChatMessageEntryItem_C");
static_assert(offsetof(UChatMessageEntryItem_C, MessageLog) == 0x000028, "Member 'UChatMessageEntryItem_C::MessageLog' has a wrong offset!");
static_assert(offsetof(UChatMessageEntryItem_C, StampSize) == 0x000098, "Member 'UChatMessageEntryItem_C::StampSize' has a wrong offset!");
static_assert(offsetof(UChatMessageEntryItem_C, ParentWidget) == 0x0000A0, "Member 'UChatMessageEntryItem_C::ParentWidget' has a wrong offset!");
static_assert(offsetof(UChatMessageEntryItem_C, IsEndInit) == 0x0000A8, "Member 'UChatMessageEntryItem_C::IsEndInit' has a wrong offset!");
static_assert(offsetof(UChatMessageEntryItem_C, IsCursorHitStamp) == 0x0000A9, "Member 'UChatMessageEntryItem_C::IsCursorHitStamp' has a wrong offset!");
static_assert(offsetof(UChatMessageEntryItem_C, IsUnreadWidget) == 0x0000AA, "Member 'UChatMessageEntryItem_C::IsUnreadWidget' has a wrong offset!");
static_assert(offsetof(UChatMessageEntryItem_C, IsCopy) == 0x0000AB, "Member 'UChatMessageEntryItem_C::IsCopy' has a wrong offset!");

}

