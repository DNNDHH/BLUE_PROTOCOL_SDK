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
	 * Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.GetVariableMaterialInstance
	 */
	struct ABP_SchedulableMaterialParam_C_GetVariableMaterialInstance_Params
	{
	public:
		class UMaterialInstance*                                   SourceMaterial;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UMaterialInstanceDynamic*                            MaterialInstanceDynamic;                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.StartRoutine
	 */
	struct ABP_SchedulableMaterialParam_C_StartRoutine_Params
	{
	public:
		TArray<class UMaterialInstance*>                           SourceMaterial;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class FName                                                ParameterName;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Intencity;                                               // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Duration;                                                // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SwitchOnTime;                                            // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SwitchOffTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ReceiveBeginPlay
	 */
	struct ABP_SchedulableMaterialParam_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ReceiveTick
	 */
	struct ABP_SchedulableMaterialParam_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SchedulableMaterialParam.BP_SchedulableMaterialParam_C.ExecuteUbergraph_BP_SchedulableMaterialParam
	 */
	struct ABP_SchedulableMaterialParam_C_ExecuteUbergraph_BP_SchedulableMaterialParam_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
