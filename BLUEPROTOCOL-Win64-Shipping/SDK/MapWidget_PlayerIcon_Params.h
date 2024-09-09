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
	 * Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.ShowTooltip
	 */
	struct UMapWidget_PlayerIcon_C_ShowTooltip_Params
	{
	public:
		bool                                                       IsShow;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.PlayPublicDungeonAnimation
	 */
	struct UMapWidget_PlayerIcon_C_PlayPublicDungeonAnimation_Params
	{	};

	/**
	 * Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.GetCursorAngle
	 */
	struct UMapWidget_PlayerIcon_C_GetCursorAngle_Params
	{
	public:
		float                                                      OutCursorAngle;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.SetCursorAngle
	 */
	struct UMapWidget_PlayerIcon_C_SetCursorAngle_Params
	{
	public:
		float                                                      InAngle;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.Construct
	 */
	struct UMapWidget_PlayerIcon_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_PlayerIcon.MapWidget_PlayerIcon_C.ExecuteUbergraph_MapWidget_PlayerIcon
	 */
	struct UMapWidget_PlayerIcon_C_ExecuteUbergraph_MapWidget_PlayerIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JXRS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
