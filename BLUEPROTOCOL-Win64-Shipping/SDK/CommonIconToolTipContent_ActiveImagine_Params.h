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
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineDataBase
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_SetImagineDataBase_Params
	{
	public:
		struct FSBMasterImagine                                    InMasterImagine;                                         // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              InUniqueId;                                              // 0x00B8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsImagineIconActive;                                   // 0x00C8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InUseClassTypeForLevelSync;                              // 0x00C9(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassTypeForLevelSync;                                 // 0x00CA(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEffectiveDisplay;                                      // 0x00CB(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InForceLevelSyncOff;                                     // 0x00CC(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EV1Q[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InClassLevel;                                            // 0x00D0(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InPerkId;                                                // 0x00D4(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStackBNum;                                             // 0x00D8(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InStackBMax;                                             // 0x00DC(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInUseArgBattleScore;                                    // 0x00E0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P9QW[0x3];                                   // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    InBattleScore;                                           // 0x00E4(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineIconActive
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_SetImagineIconActive_Params
	{
	public:
		bool                                                       InIsActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineLevel
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_SetImagineLevel_Params
	{
	public:
		int32_t                                                    InImagineLv;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InClassLevel;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OutImagineLv;                                            // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.SetImagineData
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_SetImagineData_Params
	{
	public:
		struct FSBMasterImagine                                    InMasterImagine;                                         // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              InUniqueId;                                              // 0x00B8(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       InIsImagineIconActive;                                   // 0x00C8(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InUseClassTypeForLevelSync;                              // 0x00C9(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ESBClassType                                               InClassTypeForLevelSync;                                 // 0x00CA(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsEffectiveDisplay;                                      // 0x00CB(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InForceLevelSyncOff;                                     // 0x00CC(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.PreConstruct
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.Construct
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_Construct_Params
	{	};

	/**
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadStart
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadStart_Params
	{	};

	/**
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadRequestCheckStart
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequestCheckStart_Params
	{	};

	/**
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ImagineIconLoadRequest
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_ImagineIconLoadRequest_Params
	{
	public:
		struct FSBMasterImagine                                    InImagineMaster;                                         // 0x0000(0x00B8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C.ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine
	 */
	struct UCommonIconToolTipContent_ActiveImagine_C_ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
