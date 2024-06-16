#pragma once

 

// Package: OnlineStatusTag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"
#include "PlayerPannelTypeEnum_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OnlineStatusTag.OnlineStatusTag_C
// 0x0090 (0x0308 - 0x0278)
class UOnlineStatusTag_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                         HB_LastLogin;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               HB_LastLogin_02;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               HB_LoginMap_01;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               HB_Online_03;                                      // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Platform_Id;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               HB_PSOnlyRestriction_04;                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LastLogout;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlatformIcon_C*                        PlatformIcon;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock;                                // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_343;                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StatusNameBackImage;                               // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             StatusTextLabel_LoginMap;                          // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_Platform_Id;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Body;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   StatusText;                                        // 0x02F0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_OnlineStatusTag(int32 EntryPoint);
	void ErrorDataSet();
	void SetForPlayerProfile(bool bInActive, bool bMySelf, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo);
	void SetLocationInfo(bool bActive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo);
	void SetLoginMapInfo(EPlayerPannelTypeEnum PlayerPannelMode, const struct FPlayerProfileSummaryData& PlayerProfileSummaryData, const struct FGuildMemberData& GuildMemberData);
	void PreConstruct(bool IsDesignTime);
	void Init_Login_Map_Info(int32 InStatus, const struct FSBPlatformInfo& InPlatformInfo, bool bOnlyIcon, const class FString& InLastLogin);
	void InitPartyMemberMapInfo(const struct FPlayerProfileSummaryData& PlayerProfileSummaryData);
	void InitCommunicateMode(const struct FPlayerProfileSummaryData& PlayerProfileSummaryData, bool bOnlyIcon);
	void InitOnlineInfo(const struct FSBPlatformInfo& PlatformInfo, bool bIconOnly, bool bIsOnline);
	void InitGuildMemberStatusInfo(const struct FGuildMemberData& InGuildMemberData);
	void InitPlatformInfo(const struct FSBPlatformInfo& PlatformInfo, bool bOnlyIcon, bool bIsActive);
	void InitPlayerProfileMode();
	void InitForPlayerProfile(bool bInActive, bool bMySelf, const struct FSBPlatformInfo& PlatformInfo);
	void Show_Loguin_Status_Text(int32 InOnlineStatus, const class FString& InDateTime, class FText* OutStatusText, struct FSlateColor* OutTextColor);
	void OnGetGamerTag(const class FString& GamerTag);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OnlineStatusTag_C">();
	}
	static class UOnlineStatusTag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOnlineStatusTag_C>();
	}
};
static_assert(alignof(UOnlineStatusTag_C) == 0x000008, "Wrong alignment on UOnlineStatusTag_C");
static_assert(sizeof(UOnlineStatusTag_C) == 0x000308, "Wrong size on UOnlineStatusTag_C");
static_assert(offsetof(UOnlineStatusTag_C, UberGraphFrame) == 0x000278, "Member 'UOnlineStatusTag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, HB_LastLogin) == 0x000280, "Member 'UOnlineStatusTag_C::HB_LastLogin' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, HB_LastLogin_02) == 0x000288, "Member 'UOnlineStatusTag_C::HB_LastLogin_02' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, HB_LoginMap_01) == 0x000290, "Member 'UOnlineStatusTag_C::HB_LoginMap_01' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, HB_Online_03) == 0x000298, "Member 'UOnlineStatusTag_C::HB_Online_03' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, HB_Platform_Id) == 0x0002A0, "Member 'UOnlineStatusTag_C::HB_Platform_Id' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, HB_PSOnlyRestriction_04) == 0x0002A8, "Member 'UOnlineStatusTag_C::HB_PSOnlyRestriction_04' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, LastLogout) == 0x0002B0, "Member 'UOnlineStatusTag_C::LastLogout' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, PlatformIcon) == 0x0002B8, "Member 'UOnlineStatusTag_C::PlatformIcon' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, SBRuntimeTextBlock) == 0x0002C0, "Member 'UOnlineStatusTag_C::SBRuntimeTextBlock' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, SBRuntimeTextBlock_343) == 0x0002C8, "Member 'UOnlineStatusTag_C::SBRuntimeTextBlock_343' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, StatusNameBackImage) == 0x0002D0, "Member 'UOnlineStatusTag_C::StatusNameBackImage' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, StatusTextLabel_LoginMap) == 0x0002D8, "Member 'UOnlineStatusTag_C::StatusTextLabel_LoginMap' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, Txt_Platform_Id) == 0x0002E0, "Member 'UOnlineStatusTag_C::Txt_Platform_Id' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, WidgetSwitcher_Body) == 0x0002E8, "Member 'UOnlineStatusTag_C::WidgetSwitcher_Body' has a wrong offset!");
static_assert(offsetof(UOnlineStatusTag_C, StatusText) == 0x0002F0, "Member 'UOnlineStatusTag_C::StatusText' has a wrong offset!");

}

