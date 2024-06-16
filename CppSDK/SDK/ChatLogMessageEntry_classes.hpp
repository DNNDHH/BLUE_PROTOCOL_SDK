#pragma once

 

// Package: ChatLogMessageEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogMessageEntry.ChatLogMessageEntry_C
// 0x0090 (0x0308 - 0x0278)
class UChatLogMessageEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                               LogPanel;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            ParentWidget;                                      // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Unread_Widget;                                  // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6182[0x7];                                     // 0x0291(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBChatUIMessage                       ChatUIMessageData;                                 // 0x0298(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ChatLogMessageEntry(int32 EntryPoint);
	void DircetChat(const class FString& TagertPlayerId, const class FText& TagertName, const class FString& CharacterId, ESBPrivilegeType PrivilegeType);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnEntryReleased();
	void CreateChatMessage(const struct FSBChatUIMessage& InMessage, float StampSize, bool IsEndInit, bool IsCursorStampHit, bool IsUnreadWidget, bool IsCopy);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogMessageEntry_C">();
	}
	static class UChatLogMessageEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogMessageEntry_C>();
	}
};
static_assert(alignof(UChatLogMessageEntry_C) == 0x000008, "Wrong alignment on UChatLogMessageEntry_C");
static_assert(sizeof(UChatLogMessageEntry_C) == 0x000308, "Wrong size on UChatLogMessageEntry_C");
static_assert(offsetof(UChatLogMessageEntry_C, UberGraphFrame) == 0x000278, "Member 'UChatLogMessageEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatLogMessageEntry_C, LogPanel) == 0x000280, "Member 'UChatLogMessageEntry_C::LogPanel' has a wrong offset!");
static_assert(offsetof(UChatLogMessageEntry_C, ParentWidget) == 0x000288, "Member 'UChatLogMessageEntry_C::ParentWidget' has a wrong offset!");
static_assert(offsetof(UChatLogMessageEntry_C, Is_Unread_Widget) == 0x000290, "Member 'UChatLogMessageEntry_C::Is_Unread_Widget' has a wrong offset!");
static_assert(offsetof(UChatLogMessageEntry_C, ChatUIMessageData) == 0x000298, "Member 'UChatLogMessageEntry_C::ChatUIMessageData' has a wrong offset!");

}

