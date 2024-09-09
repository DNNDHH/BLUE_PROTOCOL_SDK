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
	 * Function PartyChain.PartyChain_C.Construct
	 */
	struct UPartyChain_C_Construct_Params
	{	};

	/**
	 * Function PartyChain.PartyChain_C.SetEditMode
	 */
	struct UPartyChain_C_SetEditMode_Params
	{	};

	/**
	 * Function PartyChain.PartyChain_C.OnPlayBonusEffect
	 */
	struct UPartyChain_C_OnPlayBonusEffect_Params
	{	};

	/**
	 * Function PartyChain.PartyChain_C.ExecuteUbergraph_PartyChain
	 */
	struct UPartyChain_C_ExecuteUbergraph_PartyChain_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MH9B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
