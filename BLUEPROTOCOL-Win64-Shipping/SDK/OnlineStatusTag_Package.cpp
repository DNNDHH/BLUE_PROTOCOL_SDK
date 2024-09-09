/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.OnGetGamerTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      gamerTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UOnlineStatusTag_C::OnGetGamerTag(const class FString& gamerTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.OnGetGamerTag");
		
		UOnlineStatusTag_C_OnGetGamerTag_Params params {};
		params.gamerTag = gamerTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.Show Loguin Status Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InOnlineStatus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      InDateTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        OutStatusText                                              (Parm, OutParm)
	 * 		struct FSlateColor                                 outTextColor                                               (Parm, OutParm)
	 */
	void UOnlineStatusTag_C::ShowLoguinStatusText(int32_t InOnlineStatus, const class FString& InDateTime, class FText* OutStatusText, struct FSlateColor* outTextColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.Show Loguin Status Text");
		
		UOnlineStatusTag_C_ShowLoguinStatusText_Params params {};
		params.InOnlineStatus = InOnlineStatus;
		params.InDateTime = InDateTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStatusText != nullptr)
			*OutStatusText = params.OutStatusText;
		if (outTextColor != nullptr)
			*outTextColor = params.outTextColor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.InitForPlayerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bMySelf                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FSBPlatformInfo                             PlatformInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOnlineStatusTag_C::InitForPlayerProfile(bool bInActive, bool bMySelf, const struct FSBPlatformInfo& PlatformInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.InitForPlayerProfile");
		
		UOnlineStatusTag_C_InitForPlayerProfile_Params params {};
		params.bInActive = bInActive;
		params.bMySelf = bMySelf;
		params.PlatformInfo = PlatformInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.InitPlayerProfileMode
	 * 		Flags  -> ()
	 */
	void UOnlineStatusTag_C::InitPlayerProfileMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.InitPlayerProfileMode");
		
		UOnlineStatusTag_C_InitPlayerProfileMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.InitPlatformInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlatformInfo                             PlatformInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bOnlyIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOnlineStatusTag_C::InitPlatformInfo(const struct FSBPlatformInfo& PlatformInfo, bool bOnlyIcon, bool bIsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.InitPlatformInfo");
		
		UOnlineStatusTag_C_InitPlatformInfo_Params params {};
		params.PlatformInfo = PlatformInfo;
		params.bOnlyIcon = bOnlyIcon;
		params.bIsActive = bIsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.InitGuildMemberStatusInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGuildMemberData                            InGuildMemberData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOnlineStatusTag_C::InitGuildMemberStatusInfo(const struct FGuildMemberData& InGuildMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.InitGuildMemberStatusInfo");
		
		UOnlineStatusTag_C_InitGuildMemberStatusInfo_Params params {};
		params.InGuildMemberData = InGuildMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.InitOnlineInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBPlatformInfo                             PlatformInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bIconOnly                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsOnline                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOnlineStatusTag_C::InitOnlineInfo(const struct FSBPlatformInfo& PlatformInfo, bool bIconOnly, bool bIsOnline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.InitOnlineInfo");
		
		UOnlineStatusTag_C_InitOnlineInfo_Params params {};
		params.PlatformInfo = PlatformInfo;
		params.bIconOnly = bIconOnly;
		params.bIsOnline = bIsOnline;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.InitCommunicateMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileSummaryData                   PlayerProfileSummaryData                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bOnlyIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOnlineStatusTag_C::InitCommunicateMode(const struct FPlayerProfileSummaryData& PlayerProfileSummaryData, bool bOnlyIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.InitCommunicateMode");
		
		UOnlineStatusTag_C_InitCommunicateMode_Params params {};
		params.PlayerProfileSummaryData = PlayerProfileSummaryData;
		params.bOnlyIcon = bOnlyIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.InitPartyMemberMapInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayerProfileSummaryData                   PlayerProfileSummaryData                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOnlineStatusTag_C::InitPartyMemberMapInfo(const struct FPlayerProfileSummaryData& PlayerProfileSummaryData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.InitPartyMemberMapInfo");
		
		UOnlineStatusTag_C_InitPartyMemberMapInfo_Params params {};
		params.PlayerProfileSummaryData = PlayerProfileSummaryData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.Init Login Map Info
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBPlatformInfo                             InPlatformInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bOnlyIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      InLastLogin                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UOnlineStatusTag_C::InitLoginMapInfo(int32_t InStatus, const struct FSBPlatformInfo& InPlatformInfo, bool bOnlyIcon, const class FString& InLastLogin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.Init Login Map Info");
		
		UOnlineStatusTag_C_InitLoginMapInfo_Params params {};
		params.InStatus = InStatus;
		params.InPlatformInfo = InPlatformInfo;
		params.bOnlyIcon = bOnlyIcon;
		params.InLastLogin = InLastLogin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOnlineStatusTag_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.PreConstruct");
		
		UOnlineStatusTag_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.SetLoginMapInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerPannelTypeEnum                              PlayerPannelMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FPlayerProfileSummaryData                   PlayerProfileSummaryData                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FGuildMemberData                            GuildMemberData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOnlineStatusTag_C::SetLoginMapInfo(EPlayerPannelTypeEnum PlayerPannelMode, const struct FPlayerProfileSummaryData& PlayerProfileSummaryData, const struct FGuildMemberData& GuildMemberData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.SetLoginMapInfo");
		
		UOnlineStatusTag_C_SetLoginMapInfo_Params params {};
		params.PlayerPannelMode = PlayerPannelMode;
		params.PlayerProfileSummaryData = PlayerProfileSummaryData;
		params.GuildMemberData = GuildMemberData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.SetLocationInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      LocationName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ZoneId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ContentId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBPlatformInfo                             PlatformInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOnlineStatusTag_C::SetLocationInfo(bool bActive, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.SetLocationInfo");
		
		UOnlineStatusTag_C_SetLocationInfo_Params params {};
		params.bActive = bActive;
		params.LocationName = LocationName;
		params.ZoneId = ZoneId;
		params.ContentId = ContentId;
		params.PlatformInfo = PlatformInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.SetForPlayerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInActive                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bMySelf                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      LocationName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ZoneId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      ContentId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FSBPlatformInfo                             PlatformInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UOnlineStatusTag_C::SetForPlayerProfile(bool bInActive, bool bMySelf, const class FString& LocationName, const class FString& ZoneId, const class FString& ContentId, const struct FSBPlatformInfo& PlatformInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.SetForPlayerProfile");
		
		UOnlineStatusTag_C_SetForPlayerProfile_Params params {};
		params.bInActive = bInActive;
		params.bMySelf = bMySelf;
		params.LocationName = LocationName;
		params.ZoneId = ZoneId;
		params.ContentId = ContentId;
		params.PlatformInfo = PlatformInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.ErrorDataSet
	 * 		Flags  -> ()
	 */
	void UOnlineStatusTag_C::ErrorDataSet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.ErrorDataSet");
		
		UOnlineStatusTag_C_ErrorDataSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OnlineStatusTag.OnlineStatusTag_C.ExecuteUbergraph_OnlineStatusTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOnlineStatusTag_C::ExecuteUbergraph_OnlineStatusTag(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OnlineStatusTag.OnlineStatusTag_C.ExecuteUbergraph_OnlineStatusTag");
		
		UOnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnlineStatusTag_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnlineStatusTag_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OnlineStatusTag.OnlineStatusTag_C");
		return ptr;
	}

}


