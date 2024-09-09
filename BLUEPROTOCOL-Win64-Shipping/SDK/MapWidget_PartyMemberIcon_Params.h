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
	 * Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetDeadFlag
	 */
	struct UMapWidget_PartyMemberIcon_C_GetDeadFlag_Params
	{
	public:
		bool                                                       OutDeadFlag;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetPlayerState
	 */
	struct UMapWidget_PartyMemberIcon_C_GetPlayerState_Params
	{
	public:
		class ASBPlayerState*                                      OutPlayerState;                                          // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.SetPlayerState
	 */
	struct UMapWidget_PartyMemberIcon_C_SetPlayerState_Params
	{
	public:
		class ASBPlayerState*                                      InPlayerState;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.GetText
	 */
	struct UMapWidget_PartyMemberIcon_C_GetText_Params
	{
	public:
		class FText                                                OutText;                                                 // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.CheckDead
	 */
	struct UMapWidget_PartyMemberIcon_C_CheckDead_Params
	{	};

	/**
	 * Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Set Text
	 */
	struct UMapWidget_PartyMemberIcon_C_SetText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Construct
	 */
	struct UMapWidget_PartyMemberIcon_C_Construct_Params
	{	};

	/**
	 * Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.Tick
	 */
	struct UMapWidget_PartyMemberIcon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.CheckVisible
	 */
	struct UMapWidget_PartyMemberIcon_C_CheckVisible_Params
	{	};

	/**
	 * Function MapWidget_PartyMemberIcon.MapWidget_PartyMemberIcon_C.ExecuteUbergraph_MapWidget_PartyMemberIcon
	 */
	struct UMapWidget_PartyMemberIcon_C_ExecuteUbergraph_MapWidget_PartyMemberIcon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
