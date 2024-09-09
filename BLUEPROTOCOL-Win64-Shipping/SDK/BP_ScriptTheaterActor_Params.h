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
	 * Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.RequestPlayDemo_Theater
	 */
	struct ABP_ScriptTheaterActor_C_RequestPlayDemo_Theater_Params
	{
	public:
		class FName                                                InDemoName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.OnDemoFinish_Theater
	 */
	struct ABP_ScriptTheaterActor_C_OnDemoFinish_Theater_Params
	{	};

	/**
	 * Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.ReceiveDestroyed
	 */
	struct ABP_ScriptTheaterActor_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.ExecuteUbergraph_BP_ScriptTheaterActor
	 */
	struct ABP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
