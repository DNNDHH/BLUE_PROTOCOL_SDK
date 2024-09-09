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
	 * Function LightScheduleComponent.LightScheduleComponent_C.EditorPreview
	 */
	struct ULightScheduleComponent_C_EditorPreview_Params
	{
	public:
		float                                                      TimeRate;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Sw;                                                      // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6NGR[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.ClearVariableMaterials
	 */
	struct ULightScheduleComponent_C_ClearVariableMaterials_Params
	{	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.GetVariableMaterial
	 */
	struct ULightScheduleComponent_C_GetVariableMaterial_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OWGQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInstanceDynamic*                            NewParam;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.Set Variable Light All
	 */
	struct ULightScheduleComponent_C_SetVariableLightAll_Params
	{	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.SetVariableMaterial
	 */
	struct ULightScheduleComponent_C_SetVariableMaterial_Params
	{
	public:
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                ParameterName;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Intencity;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ArrayIndex;                                              // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.SetVariableLight
	 */
	struct ULightScheduleComponent_C_SetVariableLight_Params
	{
	public:
		class ULightComponent*                                     LightComponent;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.CheckTime
	 */
	struct ULightScheduleComponent_C_CheckTime_Params
	{
	public:
		TArray<int32_t>                                            Array;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    PrevTime;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrTime;                                                // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CheckedTime;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.ReceiveBeginPlay
	 */
	struct ULightScheduleComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.StartFadeOut
	 */
	struct ULightScheduleComponent_C_StartFadeOut_Params
	{	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.StartFadeIn
	 */
	struct ULightScheduleComponent_C_StartFadeIn_Params
	{	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.UpdateTimeSchedule
	 */
	struct ULightScheduleComponent_C_UpdateTimeSchedule_Params
	{	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.StartTimeSchedule
	 */
	struct ULightScheduleComponent_C_StartTimeSchedule_Params
	{
	public:
		int32_t                                                    SetGameTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.ExecuteUbergraph_LightScheduleComponent
	 */
	struct ULightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.LightOffEvent__DelegateSignature
	 */
	struct ULightScheduleComponent_C_LightOffEvent__DelegateSignature_Params
	{	};

	/**
	 * Function LightScheduleComponent.LightScheduleComponent_C.LightOnEvent__DelegateSignature
	 */
	struct ULightScheduleComponent_C_LightOnEvent__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
