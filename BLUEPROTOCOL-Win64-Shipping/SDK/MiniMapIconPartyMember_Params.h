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
	 * Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.Construct
	 */
	struct UMiniMapIconPartyMember_C_Construct_Params
	{	};

	/**
	 * Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.Destruct
	 */
	struct UMiniMapIconPartyMember_C_Destruct_Params
	{	};

	/**
	 * Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.CustomEvent_2
	 */
	struct UMiniMapIconPartyMember_C_CustomEvent_2_Params
	{
	public:
		class USBMapPartyMemberIcon*                               InPartyMemberIcon;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDead;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.ExecuteUbergraph_MiniMapIconPartyMember
	 */
	struct UMiniMapIconPartyMember_C_ExecuteUbergraph_MiniMapIconPartyMember_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LHMU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MiniMapIconPartyMember.MiniMapIconPartyMember_C.OnDead__DelegateSignature
	 */
	struct UMiniMapIconPartyMember_C_OnDead__DelegateSignature_Params
	{
	public:
		class UMiniMapIconPartyMember_C*                           PartyMember;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsDead;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
