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
	 * Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ReceiveFetchValue
	 */
	struct UUD_IsEnableNpcTalk_C_ReceiveFetchValue_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ReceiveInitialize
	 */
	struct UUD_IsEnableNpcTalk_C_ReceiveInitialize_Params
	{
	public:
		class USBUtilityBrainComponent*                            OwnerComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ExecuteUbergraph_UD_IsEnableNpcTalk
	 */
	struct UUD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YM2U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
