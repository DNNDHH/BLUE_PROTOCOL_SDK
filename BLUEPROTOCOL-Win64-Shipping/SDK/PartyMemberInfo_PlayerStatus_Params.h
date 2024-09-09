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
	 * Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.GetMapName
	 */
	struct UPartyMemberInfo_PlayerStatus_C_GetMapName_Params
	{
	public:
		class FString                                              OutPlayerName;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.SetMapName
	 */
	struct UPartyMemberInfo_PlayerStatus_C_SetMapName_Params
	{
	public:
		class FString                                              InName;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.Construct
	 */
	struct UPartyMemberInfo_PlayerStatus_C_Construct_Params
	{	};

	/**
	 * Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.ExecuteUbergraph_PartyMemberInfo_PlayerStatus
	 */
	struct UPartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TAKM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
