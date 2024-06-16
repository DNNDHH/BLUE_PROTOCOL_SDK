#pragma once

 

// Package: CommunicateSettingMenu_HeaderBG

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommunicateSettingMenu_HeaderBG.CommunicateSettingMenu_HeaderBG_C
// 0x00B8 (0x0330 - 0x0278)
class UCommunicateSettingMenu_HeaderBG_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnImageThrobber_C*                    CmnImageThrobber_1;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HeaderBg;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LocationGrp;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOnlineStatusTag_C*                     OnlineStatusTag;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                            DefaultHeaderBrush;                                // 0x02A8(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_CommunicateSettingMenu_HeaderBG(int32 EntryPoint);
	void ErrorDataSet();
	void SetOtherLocationText(bool Inactive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo);
	void SetLocationFollowerUIVisible(bool IsShowPlayerLocationUI);
	void SetLocationText(const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo);
	void Reset();
	void Construct();
	void SetData(const class FString& InURL, float InScale, const struct FVector2D& InPosition, class UCanvasPanel* InCanvasPanel);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommunicateSettingMenu_HeaderBG_C">();
	}
	static class UCommunicateSettingMenu_HeaderBG_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommunicateSettingMenu_HeaderBG_C>();
	}
};
static_assert(alignof(UCommunicateSettingMenu_HeaderBG_C) == 0x000008, "Wrong alignment on UCommunicateSettingMenu_HeaderBG_C");
static_assert(sizeof(UCommunicateSettingMenu_HeaderBG_C) == 0x000330, "Wrong size on UCommunicateSettingMenu_HeaderBG_C");
static_assert(offsetof(UCommunicateSettingMenu_HeaderBG_C, UberGraphFrame) == 0x000278, "Member 'UCommunicateSettingMenu_HeaderBG_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_HeaderBG_C, CmnImageThrobber_1) == 0x000280, "Member 'UCommunicateSettingMenu_HeaderBG_C::CmnImageThrobber_1' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_HeaderBG_C, HeaderBg) == 0x000288, "Member 'UCommunicateSettingMenu_HeaderBG_C::HeaderBg' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_HeaderBG_C, LocationGrp) == 0x000290, "Member 'UCommunicateSettingMenu_HeaderBG_C::LocationGrp' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_HeaderBG_C, OnlineStatusTag) == 0x000298, "Member 'UCommunicateSettingMenu_HeaderBG_C::OnlineStatusTag' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_HeaderBG_C, WidgetSwitcher) == 0x0002A0, "Member 'UCommunicateSettingMenu_HeaderBG_C::WidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UCommunicateSettingMenu_HeaderBG_C, DefaultHeaderBrush) == 0x0002A8, "Member 'UCommunicateSettingMenu_HeaderBG_C::DefaultHeaderBrush' has a wrong offset!");

}

