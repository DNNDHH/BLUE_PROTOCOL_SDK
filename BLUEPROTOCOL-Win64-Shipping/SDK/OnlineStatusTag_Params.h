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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.OnGetGamerTag
	 */
	struct UOnlineStatusTag_C_OnGetGamerTag_Params
	{
	public:
		class FString                                              gamerTag;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.Show Loguin Status Text
	 */
	struct UOnlineStatusTag_C_ShowLoguinStatusText_Params
	{
	public:
		int32_t                                                    InOnlineStatus;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OK79[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InDateTime;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                OutStatusText;                                           // 0x0018(0x0018)  (Parm, OutParm)
		struct FSlateColor                                         outTextColor;                                            // 0x0030(0x0028)  (Parm, OutParm)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.InitForPlayerProfile
	 */
	struct UOnlineStatusTag_C_InitForPlayerProfile_Params
	{
	public:
		bool                                                       bInActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bMySelf;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EZD3[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBPlatformInfo                                     PlatformInfo;                                            // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.InitPlayerProfileMode
	 */
	struct UOnlineStatusTag_C_InitPlayerProfileMode_Params
	{	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.InitPlatformInfo
	 */
	struct UOnlineStatusTag_C_InitPlatformInfo_Params
	{
	public:
		struct FSBPlatformInfo                                     PlatformInfo;                                            // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bOnlyIcon;                                               // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsActive;                                               // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1HU5[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.InitGuildMemberStatusInfo
	 */
	struct UOnlineStatusTag_C_InitGuildMemberStatusInfo_Params
	{
	public:
		struct FGuildMemberData                                    InGuildMemberData;                                       // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.InitOnlineInfo
	 */
	struct UOnlineStatusTag_C_InitOnlineInfo_Params
	{
	public:
		struct FSBPlatformInfo                                     PlatformInfo;                                            // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bIconOnly;                                               // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsOnline;                                               // 0x0021(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.InitCommunicateMode
	 */
	struct UOnlineStatusTag_C_InitCommunicateMode_Params
	{
	public:
		struct FPlayerProfileSummaryData                           PlayerProfileSummaryData;                                // 0x0000(0x0118)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bOnlyIcon;                                               // 0x0118(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.InitPartyMemberMapInfo
	 */
	struct UOnlineStatusTag_C_InitPartyMemberMapInfo_Params
	{
	public:
		struct FPlayerProfileSummaryData                           PlayerProfileSummaryData;                                // 0x0000(0x0118)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.Init Login Map Info
	 */
	struct UOnlineStatusTag_C_InitLoginMapInfo_Params
	{
	public:
		int32_t                                                    InStatus;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1E2W[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSBPlatformInfo                                     InPlatformInfo;                                          // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bOnlyIcon;                                               // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_8UN3[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              InLastLogin;                                             // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.PreConstruct
	 */
	struct UOnlineStatusTag_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.SetLoginMapInfo
	 */
	struct UOnlineStatusTag_C_SetLoginMapInfo_Params
	{
	public:
		EPlayerPannelTypeEnum                                      PlayerPannelMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O8NG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileSummaryData                           PlayerProfileSummaryData;                                // 0x0008(0x0118)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FGuildMemberData                                    GuildMemberData;                                         // 0x0120(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.SetLocationInfo
	 */
	struct UOnlineStatusTag_C_SetLocationInfo_Params
	{
	public:
		bool                                                       bActive;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PG54[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              LocationName;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ZoneId;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ContentId;                                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBPlatformInfo                                     PlatformInfo;                                            // 0x0038(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.SetForPlayerProfile
	 */
	struct UOnlineStatusTag_C_SetForPlayerProfile_Params
	{
	public:
		bool                                                       bInActive;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bMySelf;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0PZW[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              LocationName;                                            // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ZoneId;                                                  // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              ContentId;                                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FSBPlatformInfo                                     PlatformInfo;                                            // 0x0038(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.ErrorDataSet
	 */
	struct UOnlineStatusTag_C_ErrorDataSet_Params
	{	};

	/**
	 * Function OnlineStatusTag.OnlineStatusTag_C.ExecuteUbergraph_OnlineStatusTag
	 */
	struct UOnlineStatusTag_C_ExecuteUbergraph_OnlineStatusTag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
