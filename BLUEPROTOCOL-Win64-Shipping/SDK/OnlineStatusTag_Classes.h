#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass OnlineStatusTag.OnlineStatusTag_C
	 * Size -> 0x0090 (FullSize[0x0308] - InheritedSize[0x0278])
	 */
	class UOnlineStatusTag_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      HB_LastLogin;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            HB_LastLogin_02;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            HB_LoginMap_01;                                          // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            HB_Online_03;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HB_Platform_Id;                                          // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            HB_PSOnlyRestriction_04;                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          LastLogout;                                              // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UPlatformIcon_C*                                     PlatformIcon;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock;                                      // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_344;                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              StatusNameBackImage;                                     // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StatusTextLabel_LoginMap;                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Txt_Platform_Id;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     WidgetSwitcher_Body;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                StatusText;                                              // 0x02F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnGetGamerTag(const class FString& gamerTag);
		void ShowLoguinStatusText(int32_t InOnlineStatus, const class FString& InDateTime, class FText* OutStatusText, struct FSlateColor* outTextColor);
		void InitForPlayerProfile(bool bInActive, bool bMySelf, const struct FSBPlatformInfo& PlatformInfo);
		void InitPlayerProfileMode();
		void InitPlatformInfo(const struct FSBPlatformInfo& PlatformInfo, bool bOnlyIcon, bool bIsActive);
		void InitGuildMemberStatusInfo(const struct FGuildMemberData& InGuildMemberData);
		void InitOnlineInfo(const struct FSBPlatformInfo& PlatformInfo, bool bIconOnly, bool bIsOnline);
		void InitCommunicateMode(const struct FPlayerProfileSummaryData& PlayerProfileSummaryData, bool bOnlyIcon);
		void InitPartyMemberMapInfo(const struct FPlayerProfileSummaryData& PlayerProfileSummaryData);
		void InitLoginMapInfo(int32_t InStatus, const struct FSBPlatformInfo& InPlatformInfo, bool bOnlyIcon, const class FString& InLastLogin);
		void PreConstruct(bool IsDesignTime);
		void SetLoginMapInfo(EPlayerPannelTypeEnum PlayerPannelMode, const struct FPlayerProfileSummaryData& PlayerProfileSummaryData, const struct FGuildMemberData& GuildMemberData);
		void SetLocationInfo(bool bActive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo);
		void SetForPlayerProfile(bool bInActive, bool bMySelf, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo);
		void ErrorDataSet();
		void ExecuteUbergraph_OnlineStatusTag(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
