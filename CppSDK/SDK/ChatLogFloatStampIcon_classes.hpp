#pragma once

 

// Package: ChatLogFloatStampIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatLogFloatStampIcon.ChatLogFloatStampIcon_C
// 0x0060 (0x02D8 - 0x0278)
class UChatLogFloatStampIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG_1;                                              // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogDeadIcon_C*                     ChatLogDeadIcon;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatLogFloatStamp_DateTime_C*          ChatLogFloatStamp_DateTime;                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampWidget_C*                         StampWidget;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStampWidget_C*                         StampWidget_1;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            ParentMessageWidget;                               // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SwitchIndex;                                       // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bVisible;                                          // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bPositionSetting;                                  // 0x02D5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_ChatLogFloatStampIcon(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetStamp(int32 InStampId, bool InDeadIcon);
	void Finish();
	void UpdatePos();
	void UpdateVisible(bool InVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatLogFloatStampIcon_C">();
	}
	static class UChatLogFloatStampIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatLogFloatStampIcon_C>();
	}
};
static_assert(alignof(UChatLogFloatStampIcon_C) == 0x000008, "Wrong alignment on UChatLogFloatStampIcon_C");
static_assert(sizeof(UChatLogFloatStampIcon_C) == 0x0002D8, "Wrong size on UChatLogFloatStampIcon_C");
static_assert(offsetof(UChatLogFloatStampIcon_C, UberGraphFrame) == 0x000278, "Member 'UChatLogFloatStampIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, AnimOut) == 0x000280, "Member 'UChatLogFloatStampIcon_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, AnimIn) == 0x000288, "Member 'UChatLogFloatStampIcon_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, BG) == 0x000290, "Member 'UChatLogFloatStampIcon_C::BG' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, BG_1) == 0x000298, "Member 'UChatLogFloatStampIcon_C::BG_1' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, ChatLogDeadIcon) == 0x0002A0, "Member 'UChatLogFloatStampIcon_C::ChatLogDeadIcon' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, ChatLogFloatStamp_DateTime) == 0x0002A8, "Member 'UChatLogFloatStampIcon_C::ChatLogFloatStamp_DateTime' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, StampWidget) == 0x0002B0, "Member 'UChatLogFloatStampIcon_C::StampWidget' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, StampWidget_1) == 0x0002B8, "Member 'UChatLogFloatStampIcon_C::StampWidget_1' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, Switch) == 0x0002C0, "Member 'UChatLogFloatStampIcon_C::Switch' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, ParentMessageWidget) == 0x0002C8, "Member 'UChatLogFloatStampIcon_C::ParentMessageWidget' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, SwitchIndex) == 0x0002D0, "Member 'UChatLogFloatStampIcon_C::SwitchIndex' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, bVisible) == 0x0002D4, "Member 'UChatLogFloatStampIcon_C::bVisible' has a wrong offset!");
static_assert(offsetof(UChatLogFloatStampIcon_C, bPositionSetting) == 0x0002D5, "Member 'UChatLogFloatStampIcon_C::bPositionSetting' has a wrong offset!");

}

