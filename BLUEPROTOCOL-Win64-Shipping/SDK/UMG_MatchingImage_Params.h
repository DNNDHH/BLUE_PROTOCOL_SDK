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
	 * Function UMG_MatchingImage.UMG_MatchingImage_C.SetGameContentId2
	 */
	struct UUMG_MatchingImage_C_SetGameContentId2_Params
	{
	public:
		struct FSBMapInfo                                          HelpModeInfo;                                            // 0x0000(0x01F8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UMG_MatchingImage.UMG_MatchingImage_C.SetBestScore
	 */
	struct UUMG_MatchingImage_C_SetBestScore_Params
	{
	public:
		int32_t                                                    Record;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ClearCount;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ESBClassType                                               ClassType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EFN5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                MapId;                                                   // 0x000C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingImage.UMG_MatchingImage_C.SetGameContentID
	 */
	struct UUMG_MatchingImage_C_SetGameContentID_Params
	{
	public:
		class FName                                                GameContentId;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingImage.UMG_MatchingImage_C.OnLoaded_119447794C1BA6C029376DAB31003374
	 */
	struct UUMG_MatchingImage_C_OnLoaded_119447794C1BA6C029376DAB31003374_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingImage.UMG_MatchingImage_C.UIImageAssetLoad
	 */
	struct UUMG_MatchingImage_C_UIImageAssetLoad_Params
	{	};

	/**
	 * Function UMG_MatchingImage.UMG_MatchingImage_C.UIIMageAssetLoadCheck
	 */
	struct UUMG_MatchingImage_C_UIIMageAssetLoadCheck_Params
	{	};

	/**
	 * Function UMG_MatchingImage.UMG_MatchingImage_C.ExecuteUbergraph_UMG_MatchingImage
	 */
	struct UUMG_MatchingImage_C_ExecuteUbergraph_UMG_MatchingImage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
