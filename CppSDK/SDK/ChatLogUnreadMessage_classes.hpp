#pragma once

 

// Package: ChatLogUnreadMessage

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogUnreadMessage.ChatLogUnreadMessage_C
// 0x0078 (0x02F0 - 0x0278)
class UChatLogUnreadMessage_C final : public UUserWidget
{
public:
	class UImage*                                 MessageBG;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBChatUIMessage                       MessageLog;                                        // 0x0280(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ZeroPadding(int32 InValue, class FText* RetValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogUnreadMessage_C">();
	}
	static class UChatLogUnreadMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogUnreadMessage_C>();
	}
};
static_assert(alignof(UChatLogUnreadMessage_C) == 0x000008, "Wrong alignment on UChatLogUnreadMessage_C");
static_assert(sizeof(UChatLogUnreadMessage_C) == 0x0002F0, "Wrong size on UChatLogUnreadMessage_C");
static_assert(offsetof(UChatLogUnreadMessage_C, MessageBG) == 0x000278, "Member 'UChatLogUnreadMessage_C::MessageBG' has a wrong offset!");
static_assert(offsetof(UChatLogUnreadMessage_C, MessageLog) == 0x000280, "Member 'UChatLogUnreadMessage_C::MessageLog' has a wrong offset!");

}

