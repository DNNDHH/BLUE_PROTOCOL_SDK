#pragma once

 

// Package: GuildTimeCBIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass GuildTimeCBIcon.GuildTimeCBIcon_C
// 0x0028 (0x02A0 - 0x0278)
class UGuildTimeCBIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBCheckBoxCmnCheckBox01_C*             CB_Time;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TimeIcon;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_TimeText;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBGuildActivityTime                          Time;                                              // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6B62[0x3];                                     // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TextId;                                            // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GuildTimeCBIcon(int32 EntryPoint);
	void InitializeTime();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_C91D83624D7160623CFFE1942693BDF3(class UObject* Loaded);
	void IsCheck(bool* Param_IsCheck);
	void GetTime(ESBGuildActivityTime* Param_Time);
	void Set_Checked(bool bIsChecked);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GuildTimeCBIcon_C">();
	}
	static class UGuildTimeCBIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGuildTimeCBIcon_C>();
	}
};
static_assert(alignof(UGuildTimeCBIcon_C) == 0x000008, "Wrong alignment on UGuildTimeCBIcon_C");
static_assert(sizeof(UGuildTimeCBIcon_C) == 0x0002A0, "Wrong size on UGuildTimeCBIcon_C");
static_assert(offsetof(UGuildTimeCBIcon_C, UberGraphFrame) == 0x000278, "Member 'UGuildTimeCBIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGuildTimeCBIcon_C, CB_Time) == 0x000280, "Member 'UGuildTimeCBIcon_C::CB_Time' has a wrong offset!");
static_assert(offsetof(UGuildTimeCBIcon_C, TimeIcon) == 0x000288, "Member 'UGuildTimeCBIcon_C::TimeIcon' has a wrong offset!");
static_assert(offsetof(UGuildTimeCBIcon_C, Txt_TimeText) == 0x000290, "Member 'UGuildTimeCBIcon_C::Txt_TimeText' has a wrong offset!");
static_assert(offsetof(UGuildTimeCBIcon_C, Time) == 0x000298, "Member 'UGuildTimeCBIcon_C::Time' has a wrong offset!");
static_assert(offsetof(UGuildTimeCBIcon_C, TextId) == 0x00029C, "Member 'UGuildTimeCBIcon_C::TextId' has a wrong offset!");

}

