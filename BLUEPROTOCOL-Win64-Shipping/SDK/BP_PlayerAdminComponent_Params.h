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
	 * Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.WarpPlayerByMapClick
	 */
	struct UBP_PlayerAdminComponent_C_WarpPlayerByMapClick_Params
	{
	public:
		struct FVector2D                                           WorldLocation2d;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnConfirmAdminWarp
	 */
	struct UBP_PlayerAdminComponent_C_OnConfirmAdminWarp_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event
	 */
	struct UBP_PlayerAdminComponent_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JW1N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OutputFoundPlayerInfoByScreenClick
	 */
	struct UBP_PlayerAdminComponent_C_OutputFoundPlayerInfoByScreenClick_Params
	{	};

	/**
	 * Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OutputFoundPlayerInfo
	 */
	struct UBP_PlayerAdminComponent_C_OutputFoundPlayerInfo_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FVector                                             WorldLocation;                                           // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.TravelMapToCharacter
	 */
	struct UBP_PlayerAdminComponent_C_TravelMapToCharacter_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.SearchPlayerProfile
	 */
	struct UBP_PlayerAdminComponent_C_SearchPlayerProfile_Params
	{
	public:
		class FString                                              CharacterId;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.ExecuteGotoBookmarkSub
	 */
	struct UBP_PlayerAdminComponent_C_ExecuteGotoBookmarkSub_Params
	{
	public:
		class USBAdminGotoBookmarkItem*                            BookmarkData;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.OnCanfirmGotoBookmarkMapJamp
	 */
	struct UBP_PlayerAdminComponent_C_OnCanfirmGotoBookmarkMapJamp_Params
	{
	public:
		EYesNoDialogResult                                         Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerAdminComponent.BP_PlayerAdminComponent_C.ExecuteUbergraph_BP_PlayerAdminComponent
	 */
	struct UBP_PlayerAdminComponent_C_ExecuteUbergraph_BP_PlayerAdminComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RL3N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
