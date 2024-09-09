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
	 * Function TargetCursor.TargetCursor_C.isTargetInvincible
	 */
	struct UTargetCursor_C_isTargetInvincible_Params
	{
	public:
		bool                                                       OutIsInvincible;                                         // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UVIU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TargetCursor.TargetCursor_C.GetNearRange
	 */
	struct UTargetCursor_C_GetNearRange_Params
	{
	public:
		float                                                      OutIsRange;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TargetCursor.TargetCursor_C.ColorChange
	 */
	struct UTargetCursor_C_ColorChange_Params
	{	};

	/**
	 * Function TargetCursor.TargetCursor_C.isTargetNear
	 */
	struct UTargetCursor_C_isTargetNear_Params
	{
	public:
		bool                                                       OutIsNear;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VFAT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TargetCursor.TargetCursor_C.UpdatePosition
	 */
	struct UTargetCursor_C_UpdatePosition_Params
	{	};

	/**
	 * Function TargetCursor.TargetCursor_C.VisibleSettingChangeDelegate
	 */
	struct UTargetCursor_C_VisibleSettingChangeDelegate_Params
	{
	public:
		ESBUIType                                                  InUIType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInVisibility;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bInInstantly;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TargetCursor.TargetCursor_C.Construct
	 */
	struct UTargetCursor_C_Construct_Params
	{	};

	/**
	 * Function TargetCursor.TargetCursor_C.Destruct
	 */
	struct UTargetCursor_C_Destruct_Params
	{	};

	/**
	 * Function TargetCursor.TargetCursor_C.OnPlayLockOnSe
	 */
	struct UTargetCursor_C_OnPlayLockOnSe_Params
	{	};

	/**
	 * Function TargetCursor.TargetCursor_C.ExecuteUbergraph_TargetCursor
	 */
	struct UTargetCursor_C_ExecuteUbergraph_TargetCursor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
