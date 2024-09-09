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
	 * Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetCurrentMapMode
	 */
	struct UPartyMemberInfo_Simple_C_SetCurrentMapMode_Params
	{	};

	/**
	 * Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.UpdateDisplayInfo_Internal
	 */
	struct UPartyMemberInfo_Simple_C_UpdateDisplayInfo_Internal_Params
	{	};

	/**
	 * Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetHPMPGaugeVisibility
	 */
	struct UPartyMemberInfo_Simple_C_SetHPMPGaugeVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.SetHpMpGauge
	 */
	struct UPartyMemberInfo_Simple_C_SetHpMpGauge_Params
	{
	public:
		class USBPartyMemberState*                                 InPartyMemberState;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.Construct
	 */
	struct UPartyMemberInfo_Simple_C_Construct_Params
	{	};

	/**
	 * Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.UpdateDisplayInfo
	 */
	struct UPartyMemberInfo_Simple_C_UpdateDisplayInfo_Params
	{	};

	/**
	 * Function PartyMemberInfo_Simple.PartyMemberInfo_Simple_C.ExecuteUbergraph_PartyMemberInfo_Simple
	 */
	struct UPartyMemberInfo_Simple_C_ExecuteUbergraph_PartyMemberInfo_Simple_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
