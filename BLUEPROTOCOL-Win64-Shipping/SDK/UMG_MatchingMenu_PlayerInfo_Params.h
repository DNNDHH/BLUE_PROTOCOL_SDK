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
	 * Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.DownLoadFaceImage_Event
	 */
	struct UUMG_MatchingMenu_PlayerInfo_C_DownLoadFaceImage_Event_Params
	{
	public:
		class FString                                              ImageUrl;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.Construct
	 */
	struct UUMG_MatchingMenu_PlayerInfo_C_Construct_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_PlayerInfo.UMG_MatchingMenu_PlayerInfo_C.ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo
	 */
	struct UUMG_MatchingMenu_PlayerInfo_C_ExecuteUbergraph_UMG_MatchingMenu_PlayerInfo_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I22Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
