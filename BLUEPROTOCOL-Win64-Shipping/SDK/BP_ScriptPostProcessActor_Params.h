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
	 * Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.GetTimeRate
	 */
	struct ABP_ScriptPostProcessActor_C_GetTimeRate_Params
	{
	public:
		float                                                      TimeRate;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.Update_Internal
	 */
	struct ABP_ScriptPostProcessActor_C_Update_Internal_Params
	{
	public:
		float                                                      InDeltaTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ApplyDofSettings
	 */
	struct ABP_ScriptPostProcessActor_C_ApplyDofSettings_Params
	{
	public:
		class FName                                                InSettingName;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InTransitionTime;                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bResult;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2Y4E[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ReceiveTick
	 */
	struct ABP_ScriptPostProcessActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ExecuteUbergraph_BP_ScriptPostProcessActor
	 */
	struct ABP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.OnDofTransitionFinish__DelegateSignature
	 */
	struct ABP_ScriptPostProcessActor_C_OnDofTransitionFinish__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
