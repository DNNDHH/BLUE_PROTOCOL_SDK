#pragma once

 

// Package: GuildActivityBeforeStack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildActivityBeforeStack.GuildActivityBeforeStack_C
// 0x0088 (0x0300 - 0x0278)
class UGuildActivityBeforeStack_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole_199;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole_364;                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole_480;                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole_700;                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole_810;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole_931;                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole_1070;                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole_1222;                          // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole_1326;                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UActivity_ChangeRole_C*                 Activity_ChangeRole_1469;                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_93;                                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_231;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_Before;                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Items;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         BeforeTime;                                        // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildActivityBeforeStack(int32 EntryPoint);
	void SetDateTime(const struct FDateTime& Value);
	void Add_Data(class USBUIGuildActivityUMGBase* Widget);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildActivityBeforeStack_C">();
	}
	static class UGuildActivityBeforeStack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildActivityBeforeStack_C>();
	}
};
static_assert(alignof(UGuildActivityBeforeStack_C) == 0x000008, "Wrong alignment on UGuildActivityBeforeStack_C");
static_assert(sizeof(UGuildActivityBeforeStack_C) == 0x000300, "Wrong size on UGuildActivityBeforeStack_C");
static_assert(offsetof(UGuildActivityBeforeStack_C, UberGraphFrame) == 0x000278, "Member 'UGuildActivityBeforeStack_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole) == 0x000280, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole_199) == 0x000288, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole_199' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole_364) == 0x000290, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole_364' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole_480) == 0x000298, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole_480' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole_700) == 0x0002A0, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole_700' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole_810) == 0x0002A8, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole_810' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole_931) == 0x0002B0, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole_931' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole_1070) == 0x0002B8, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole_1070' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole_1222) == 0x0002C0, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole_1222' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole_1326) == 0x0002C8, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole_1326' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Activity_ChangeRole_1469) == 0x0002D0, "Member 'UGuildActivityBeforeStack_C::Activity_ChangeRole_1469' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Image_93) == 0x0002D8, "Member 'UGuildActivityBeforeStack_C::Image_93' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, Image_231) == 0x0002E0, "Member 'UGuildActivityBeforeStack_C::Image_231' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, SBDateTimeTextBlock_Before) == 0x0002E8, "Member 'UGuildActivityBeforeStack_C::SBDateTimeTextBlock_Before' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, VB_Items) == 0x0002F0, "Member 'UGuildActivityBeforeStack_C::VB_Items' has a wrong offset!");
static_assert(offsetof(UGuildActivityBeforeStack_C, BeforeTime) == 0x0002F8, "Member 'UGuildActivityBeforeStack_C::BeforeTime' has a wrong offset!");

}

