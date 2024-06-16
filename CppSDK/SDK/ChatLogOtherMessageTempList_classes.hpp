#pragma once

 

// Package: ChatLogOtherMessageTempList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C
// 0x00A0 (0x0318 - 0x0278)
class UChatLogOtherMessageTempList_C final : public UUserWidget
{
public:
	class UImage*                                 BattleLogIcon;                                     // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MessageBG;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MessageTextBlock;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchTypeIcon;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SystemLogIcon;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TimeTextBlock;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBChatUIMessage                       MessageLog;                                        // 0x02A8(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Init(const struct FSBChatUIMessage& InMessLog);
	void ZeroPadding(int32 InValue, class FText* RetValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogOtherMessageTempList_C">();
	}
	static class UChatLogOtherMessageTempList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogOtherMessageTempList_C>();
	}
};
static_assert(alignof(UChatLogOtherMessageTempList_C) == 0x000008, "Wrong alignment on UChatLogOtherMessageTempList_C");
static_assert(sizeof(UChatLogOtherMessageTempList_C) == 0x000318, "Wrong size on UChatLogOtherMessageTempList_C");
static_assert(offsetof(UChatLogOtherMessageTempList_C, BattleLogIcon) == 0x000278, "Member 'UChatLogOtherMessageTempList_C::BattleLogIcon' has a wrong offset!");
static_assert(offsetof(UChatLogOtherMessageTempList_C, MessageBG) == 0x000280, "Member 'UChatLogOtherMessageTempList_C::MessageBG' has a wrong offset!");
static_assert(offsetof(UChatLogOtherMessageTempList_C, MessageTextBlock) == 0x000288, "Member 'UChatLogOtherMessageTempList_C::MessageTextBlock' has a wrong offset!");
static_assert(offsetof(UChatLogOtherMessageTempList_C, SwitchTypeIcon) == 0x000290, "Member 'UChatLogOtherMessageTempList_C::SwitchTypeIcon' has a wrong offset!");
static_assert(offsetof(UChatLogOtherMessageTempList_C, SystemLogIcon) == 0x000298, "Member 'UChatLogOtherMessageTempList_C::SystemLogIcon' has a wrong offset!");
static_assert(offsetof(UChatLogOtherMessageTempList_C, TimeTextBlock) == 0x0002A0, "Member 'UChatLogOtherMessageTempList_C::TimeTextBlock' has a wrong offset!");
static_assert(offsetof(UChatLogOtherMessageTempList_C, MessageLog) == 0x0002A8, "Member 'UChatLogOtherMessageTempList_C::MessageLog' has a wrong offset!");

}

